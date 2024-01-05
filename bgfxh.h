// bgfxh.hh
//

#ifndef LZZ_bgfxh_hh
#define LZZ_bgfxh_hh

///////////////////////////////////////////////////////////////////////
// bgfxh header
// 
// How to use:
// 0. Include! Use #include <bgfxh/bgfxh.h>. Be sure to use #define BGFXH_IMPL *once* to generate an implementation somewhere!
// 1. Call bgfxh::init(width, height, shaderSearchPath) after creating a bgfx context in a window. You may use bgfxh::initSdlWindow() before bgfxh::init().
//
// Notes on shaderSearchPath - this is the path to where the binary bgfxh shaders are located at runtime. You must
// set this path depending on the renderer type:
// 		bgfx::RendererType::Enum type = bgfx::getRendererType();
// 		if (type == bgfx::RendererType::OpenGl) shaderPath = path_to_shaders + "/glsl/";
// 		if (type == bgfx::RendererType::Dx9) shaderPath = path_to_shaders + "/dx9/";
// 		...etc
// You can use bgfxh::getShaderDirectoryFromRenderType() to get this automatically:
// 		shaderPath = path__to_shaders + "/" + bgfxh::getShaderDirectoryFromRenderType() + "/"; // Result: path_to_shaders/glsl/ if running OpenGl
//
// Note on embedding shaders: you can define the macro BGFXH_EMBED_EFFECT_SHADERS to embed filter shaders at compile time. I don't recommend this
// as its better to distribute the shader source + build scripts and load them at run time, so that you don't need to recompile your program
// every time you modify a shader, and so then users can modify shaders if they choose to. If you choose to embed shaders then the
// header "bgfxh_embedded_shader.h" must be present as well as the path to all shaders (eg, bgfxh/shaders/lum_filter/c/vs_lum.bin.h) at compile.
//
// The debug shaders (bgfxh/shaders/textured_passthrough) will be embedded by default, disable this with #define BGFXH_DONT_EMBED_DEBUG_SHADERS
//
// Note on distributing shaders: you can copy the shaders into the same directoy
// Eg: shaders/bloom_filter/* and shaders/lum_filter/* can be merged into the same directory and shipped with your app
// eg (after merging): 
//		your_app.exe
//		shaders/glsl/vs_bloom_filter.bin
//		shaders/glsl/fs_bloom_filter.bin
//		shaders/glsl/vs_lum_filter.bin
//		shaders/glsl/fs_lum_filter.bin
//		shaders/dx11/vs_bloom_filter.bin
//		shaders/dx11/fs_bloom_filter.bin
//		shaders/dx11/vs_lum_filter.bin
//		shaders/dx11/fs_lum_filter.bin
//		...etc
//	And set shaderSearchPath to "shaders" + "/" + bgfxh::getShaderDirectoryFromRenderType() + "/";
//
// Note on compiling shaders:
// You'll need shaderc (provided by bgfx, also in the tools folder for linux/windows) and lua (lua52 is also provided in the tools folder for linux/windows)
// (to run lua52.exe on windows you will need the .dll too!)
// Run compile_shaders.lua (read it for instructions/options)
// By default this builds glsl (for desktop OpenGl), dx9, dx11, metal and spriv (Vulkan) shaders. It'll also make embedable c headers for the shaders
// You must be on a windows maching to build dx9 and dx11 shaders! You can pass the "-d" option to compile_shaders.lua (or build_xxxx.lua) to just build OpenGl shaders
// for debugging if you are developing on a non-windows machine, and then compile the dx9/dx11 shaders when you want to test/distribute on windows
// If you want a different target (such as Anrdoid, PS4, Google NaCL), you'll have to edit compile_shaders
// Alternatively run /shaders/<shader_to_compile>/build_<shader_to_compile>.lua - this will invoke compile_shaders.lua (with args) for shaders in that folder
//
// Note on file paths:
// bgfxh internally uses posix paths "foward/slashes/for/directories". There is a helper function bgfxh::fixPath that'll automatically
// convert any forward-slash-paths to backslash-paths on windows (#ifdef __WIN32), or backslash-paths to forward-slash-paths (other)
//
// Notes on editing the source:
// This header was generated automatically from src/bgfxh.lzz using a program called lzz (lazy c++ - https://www.lazycplusplus.com/).
// Edit that instead of this, and use the makefile to build. lzz is included in tools/
//
// Resources: This will create 1 sampler (s_texColor) and load 2 shaders (m_programTexturePassthrough, m_programTexturePassthroughMonochromatic)
// These are for inspecting textures/framebuffers with debugDrawTexture/debugDrawTextureMono/debugDrawFramebuffer/debugDrawFramebufferMono
// 

#ifndef BGFXH_STRING
	// If you are someone who hates std::strings (or are using something like tinystl::string), set BGFXH_STRING to that type
	#define BGFXH_STRING std::string
	#include <string>
#endif

#define BGFXH_UV_CLAMP       BGFX_SAMPLER_U_CLAMP | BGFX_SAMPLER_V_CLAMP
#define BGFXH_RT_UV_CLAMP    BGFX_TEXTURE_RT | BGFX_SAMPLER_U_CLAMP | BGFX_SAMPLER_V_CLAMP

#ifndef BGFXH_DONT_EMBED_DEBUG_SHADERS
	#define BGFXH_EMBED_DEBUG_SHADERS
#endif // BGFXH_DONT_EMBED_DEBUG_SHADERS
//#define BGFXH_EMBED_EFFECT_SHADERS //<-- uncomment to embed shaders when compiling effects


#ifndef BGFXH_ASSERT
	#define BGFXH_ASSERT BX_ASSERT
#endif //BGFXH_ASSERT
#ifndef BGFXH_WARN
	#define BGFXH_WARN BX_WARN
#endif //BGFXH_WARN

#define LZZ_INLINE inline
namespace bgfxh
{
  extern unsigned int screenWidth;
}
namespace bgfxh
{
  extern unsigned int screenHeight;
}
namespace bgfxh
{
  extern BGFXH_STRING shaderSearchPath;
}
namespace bgfxh
{
  extern bgfx::UniformHandle s_texColor;
}
namespace bgfxh
{
  extern bgfx::ProgramHandle m_programUntexturedPassthrough;
}
namespace bgfxh
{
  extern bgfx::ProgramHandle m_programTexturePassthrough;
}
namespace bgfxh
{
  extern bgfx::ProgramHandle m_programTexturePassthroughArray;
}
namespace bgfxh
{
  extern bgfx::ProgramHandle m_programTexturePassthroughMonochromatic;
}
namespace bgfxh
{
  extern bgfx::UniformHandle u_bgfxhUtilUniform;
}
namespace bgfxh
{
  extern bx::AllocatorI * m_allocator;
}
namespace bgfxh
{
  BGFXH_STRING getShaderDirectoryFromRenderType ();
}
namespace bgfxh
{
  void init (unsigned int const _screenWidth, unsigned int const _screenHeight, BGFXH_STRING const & _shaderSearchPath);
}
namespace bgfxh
{
  bx::AllocatorI * internal_getDefaultAllocator ();
}
namespace bgfxh
{
  void debugDrawTexture (bgfx::ViewId const viewId, bgfx::TextureHandle const texture, float const xOffset, float const yOffset, float const xSize, float const ySize, float const _targetFrameBufferWidth = 0.0f, float const _targetFrameBufferHeight = 0.0f);
}
namespace bgfxh
{
  void debugDrawTextureArray (bgfx::ViewId const viewId, bgfx::TextureHandle const texture, unsigned int const layer, float const xOffset, float const yOffset, float const xSize, float const ySize, float const _targetFrameBufferWidth = 0.0f, float const _targetFrameBufferHeight = 0.0f);
}
namespace bgfxh
{
  void debugDrawFramebuffer (bgfx::ViewId const viewId, bgfx::FrameBufferHandle const framebuffer, float const xOffset, float const yOffset, float const xSize, float const ySize, float const _targetFrameBufferWidth = 0.0f, float const _targetFrameBufferHeight = 0.0f);
}
namespace bgfxh
{
  void debugDrawTextureMono (bgfx::ViewId const viewId, bgfx::TextureHandle const texture, float const xOffset, float const yOffset, float const xSize, float const ySize, float const _targetFrameBufferWidth = 0.0f, float const _targetFrameBufferHeight = 0.0f);
}
namespace bgfxh
{
  void debugDrawFramebufferMono (bgfx::ViewId const viewId, bgfx::FrameBufferHandle const framebuffer, float const xOffset, float const yOffset, float const xSize, float const ySize, float const _targetFrameBufferWidth = 0.0f, float const _targetFrameBufferHeight = 0.0f);
}
namespace bgfxh
{
  void deInit ();
}
namespace bgfxh
{
  class renderJob
  {
  public:
    virtual void init () = 0;
    virtual bgfx::FrameBufferHandle getOutputFrameBuffer () const = 0;
    virtual bgfx::TextureHandle getOutputTexture () const;
    virtual int getViewIncrement () const = 0;
  };
}
namespace bgfxh
{
  template <typename T>
  struct bxMathWrap
  {
    T v;
    bxMathWrap ();
    T & operator = (T const & p);
    operator T & ();
    operator T const & () const;
  };
}
namespace bgfxh
{
  typedef bxMathWrap <bx::Vec3> Vec3Wrap;
}
namespace bgfxh
{
  typedef bxMathWrap <bx::Plane> PlaneWrap;
}
namespace bgfxh
{
  typedef bxMathWrap <bx::Quaternion> QuaternionWrap;
}
namespace bgfxh
{
  struct frustum
  {
    PlaneWrap (planes) [4];
    frustum ();
    void setFromViewAndProjMatrix (float * mView, float * mProj);
    static float dotPV (bx::Plane const & p, bx::Vec3 const pos);
    bool frustumCheck (bx::Vec3 const & where, float const objectBoundingRadius) const;
    bool frustumCheck (float const * bgfxModelMtx, float const objectBoundingRadius) const;
  };
}
namespace bgfxh
{
  struct PosTexCoord0Vertex
  {
    float m_x;
    float m_y;
    float m_z;
    float m_u;
    float m_v;
    static void init ();
    static bgfx::VertexLayout ms_decl;
  };
}
namespace bgfxh
{
  struct PosVertex
  {
    float m_x;
    float m_y;
    float m_z;
    static void init ();
    static bgfx::VertexLayout ms_decl;
  };
}
namespace bgfxh
{
  template <typename T>
  void destroyHandle (T & handle);
}
namespace bgfxh
{
  void initView (bgfx::ViewId const viewId, char const * tag, uint32_t const vw, uint32_t const vh, float const (view) [16], float const (proj) [16], bgfx::FrameBufferHandle const fh, bool const doClear = true, bool const forwardZ = true);
}
namespace bgfxh
{
  void initView2D (bgfx::ViewId const viewId, char const * tag, uint32_t const vw, uint32_t const vh, bgfx::FrameBufferHandle const fh, bool const doClear = true, bool const unitOrthoMatrix = true, bool const forwardZ = true);
}
namespace bgfxh
{
  void fullscreenQuad (float const _textureWidth, float const _textureHeight);
}
namespace bgfxh
{
  void screenSpaceQuad (float const xOffset, float const yOffset, float const xSize, float const ySize, float const _framebufferWidth = 0.f, float const _framebufferHeight = 0.f);
}
namespace bgfxh
{
  BGFXH_STRING fixPath (BGFXH_STRING const & in);
}
namespace bgfxh
{
  void readFileRawToString (BGFXH_STRING const & filename, BGFXH_STRING & buff);
}
namespace bgfxh
{
  bgfx::Memory const * readFileRawToBgfxMemory (BGFXH_STRING const & filename);
}
namespace bgfxh
{
  bgfx::ProgramHandle loadProgram (char const * vertexShaderFile, char const * fragementShaderFile);
}
namespace bgfxh
{
  bgfx::ProgramHandle loadProgram (BGFXH_STRING const & vertexShaderFile, BGFXH_STRING const & fragmentShaderFile);
}
namespace bgfxh
{
  template <typename T>
  LZZ_INLINE bxMathWrap <T>::bxMathWrap ()
    : v (bx::InitNone)
                                                      {}
}
namespace bgfxh
{
  template <typename T>
  LZZ_INLINE T & bxMathWrap <T>::operator = (T const & p)
                                                   { v = p; return v; }
}
namespace bgfxh
{
  template <typename T>
  LZZ_INLINE bxMathWrap <T>::operator T & ()
                                      { return v; }
}
namespace bgfxh
{
  template <typename T>
  LZZ_INLINE bxMathWrap <T>::operator T const & () const
                                                  { return v; }
}
namespace bgfxh
{
  LZZ_INLINE frustum::frustum ()
    : planes ()
                                            {}
}
namespace bgfxh
{
  LZZ_INLINE float frustum::dotPV (bx::Plane const & p, bx::Vec3 const pos)
                                                                                    {
			return bx::dot(p.normal, pos) + p.dist;
			}
}
namespace bgfxh
{
  LZZ_INLINE bool frustum::frustumCheck (bx::Vec3 const & where, float const objectBoundingRadius) const
                                                                                                          {
			/// To do: sse optimisation
			return (dotPV(planes[0], where) + objectBoundingRadius> 0.0f) &&
					(dotPV(planes[1], where) + objectBoundingRadius> 0.0f) &&
					(dotPV(planes[2], where) + objectBoundingRadius> 0.0f) &&
					(dotPV(planes[3], where) + objectBoundingRadius> 0.0f);
			}
}
namespace bgfxh
{
  LZZ_INLINE bool frustum::frustumCheck (float const * bgfxModelMtx, float const objectBoundingRadius) const
                                                                                                              {
			bx::Vec3 where(bgfxModelMtx[12], bgfxModelMtx[13], bgfxModelMtx[14]);
			return (dotPV(planes[0], where) + objectBoundingRadius> 0.0f) &&
					(dotPV(planes[1], where) + objectBoundingRadius> 0.0f) &&
					(dotPV(planes[2], where) + objectBoundingRadius> 0.0f) &&
					(dotPV(planes[3], where) + objectBoundingRadius> 0.0f);
			}
}
namespace bgfxh
{
  template <typename T>
  void destroyHandle (T & handle)
                                        {
		/// Destroys a handle (if valid), sets the value of the handle to BGFX_INVALID_HANDLE
		if (bgfx::isValid(handle))
			bgfx::destroy(handle);
		handle = BGFX_INVALID_HANDLE;
		}
}
#undef LZZ_INLINE
#endif

////////////////////////////////////////////////////////////////////////

#ifdef BGFXH_IMPL
#ifndef BGFXH_DOUBLE_GUARD_bgfxh
#define BGFXH_DOUBLE_GUARD_bgfxh
// bgfxh.cpp
//

#include <fstream> // Todo - make fstream dependency optional

#ifdef BGFXH_EMBED_DEBUG_SHADERS
	#include "bgfxh_embedded_shader.h"
#endif //BGFXH_EMBED_DEBUG_SHADERS

#define LZZ_INLINE inline
namespace bgfxh
{
  static unsigned int const SAMPLER_COLOR = 0;
}
namespace bgfxh
{
  static unsigned int const SAMPLER_LUM = 1;
}
namespace bgfxh
{
  static unsigned int const SAMPLER_TONEMAPING_EXTRA0 = 2;
}
namespace bgfxh
{
  static unsigned int const SAMPLER_TONEMAPING_EXTRA1 = 3;
}
namespace bgfxh
{
  static unsigned int const SAMPLER_TONEMAPING_EXTRA2 = 4;
}
namespace bgfxh
{
  static unsigned int const SAMPLER_TONEMAPING_EXTRA3 = 5;
}
namespace bgfxh
{
  unsigned int screenWidth = 0;
}
namespace bgfxh
{
  unsigned int screenHeight = 0;
}
namespace bgfxh
{
  BGFXH_STRING shaderSearchPath = "";
}
namespace bgfxh
{
  bgfx::UniformHandle s_texColor = BGFX_INVALID_HANDLE;
}
namespace bgfxh
{
  bgfx::ProgramHandle m_programUntexturedPassthrough = BGFX_INVALID_HANDLE;
}
namespace bgfxh
{
  bgfx::ProgramHandle m_programTexturePassthrough = BGFX_INVALID_HANDLE;
}
namespace bgfxh
{
  bgfx::ProgramHandle m_programTexturePassthroughArray = BGFX_INVALID_HANDLE;
}
namespace bgfxh
{
  bgfx::ProgramHandle m_programTexturePassthroughMonochromatic = BGFX_INVALID_HANDLE;
}
namespace bgfxh
{
  bgfx::UniformHandle u_bgfxhUtilUniform = BGFX_INVALID_HANDLE;
}
namespace bgfxh
{
  bx::AllocatorI * m_allocator = NULL;
}
namespace bgfxh
{
  BGFXH_STRING getShaderDirectoryFromRenderType ()
                                                         {
		bgfx::RendererType::Enum type = bgfx::getRendererType();
			
		switch (type) {
			case bgfx::RendererType::Noop:
			//case bgfx::RendererType::Direct3D9:  return "dx9";   break;
			case bgfx::RendererType::Direct3D11:
			case bgfx::RendererType::Direct3D12: return "dx11";  break;
			case bgfx::RendererType::Gnm:        return "pssl";  break;
			case bgfx::RendererType::Metal:      return "metal"; break;
			case bgfx::RendererType::Nvn:        return "nvn";   break;
			case bgfx::RendererType::OpenGL:     return "glsl";  break;
			#ifdef BGFXH_GOOGLE_NACL
				case bgfx::RendererType::OpenGLES:   return "esslnacl";  break;
			#else
				case bgfx::RendererType::OpenGLES:   return "esslandroid";  break;
			#endif
			case bgfx::RendererType::Vulkan:     return "spirv"; break;
			default: break;
			}
		BGFXH_ASSERT (false, "bgfxh::getShaderDirectoryFromRenderType() - Invalid render type!");
		return "i am error";
		}
}
namespace bgfxh
{
  void init (unsigned int const _screenWidth, unsigned int const _screenHeight, BGFXH_STRING const & _shaderSearchPath)
                                                                                                                              {
		screenWidth  = _screenWidth;
		screenHeight = _screenHeight;
		shaderSearchPath = _shaderSearchPath;
		PosVertex::init();
		PosTexCoord0Vertex::init();
		if (!m_allocator)
			m_allocator = bgfxh::internal_getDefaultAllocator();
		
		s_texColor  = bgfx::createUniform("s_texColor",  bgfx::UniformType::Sampler);
		u_bgfxhUtilUniform = bgfx::createUniform("u_bgfxhUtilUniform",  bgfx::UniformType::Vec4);
		
		#ifdef BGFXH_EMBED_DEBUG_SHADERS
			{
			#include "shaders/textured_passthrough/c/vs_textured_passthrough.bin.h"
			#include "shaders/textured_passthrough/c/fs_textured_passthrough.bin.h"

			static const bgfx::EmbeddedShader s_embeddedShaders[] = {
				BGFXH_EMBEDDED_SHADER(vs_textured_passthrough_bin),
				BGFXH_EMBEDDED_SHADER(fs_textured_passthrough_bin),
				
				BGFX_EMBEDDED_SHADER_END()
				};
			
			bgfx::RendererType::Enum type = bgfx::getRendererType();
			m_programTexturePassthrough = bgfx::createProgram(bgfx::createEmbeddedShader(s_embeddedShaders, type, "vs_textured_passthrough_bin")
															, bgfx::createEmbeddedShader(s_embeddedShaders, type, "fs_textured_passthrough_bin")
															, true
															);
			}
			{
			#include "shaders/textured_passthrough/c/vs_textured_passthrough_monochromatic.bin.h"
			#include "shaders/textured_passthrough/c/fs_textured_passthrough_monochromatic.bin.h"

			static const bgfx::EmbeddedShader s_embeddedShaders[] = {
				BGFXH_EMBEDDED_SHADER(vs_textured_passthrough_monochromatic_bin),
				BGFXH_EMBEDDED_SHADER(fs_textured_passthrough_monochromatic_bin),
				
				BGFX_EMBEDDED_SHADER_END()
				};
			
			bgfx::RendererType::Enum type = bgfx::getRendererType();
			m_programTexturePassthroughMonochromatic = bgfx::createProgram(bgfx::createEmbeddedShader(s_embeddedShaders, type, "vs_textured_passthrough_monochromatic_bin")
															, bgfx::createEmbeddedShader(s_embeddedShaders, type, "fs_textured_passthrough_monochromatic_bin")
															, true
															);
			}
			
			{
			#include "shaders/textured_passthrough/c/vs_untextured_passthrough.bin.h"
			#include "shaders/textured_passthrough/c/fs_untextured_passthrough.bin.h"

			static const bgfx::EmbeddedShader s_embeddedShaders[] = {
				BGFXH_EMBEDDED_SHADER(vs_untextured_passthrough_bin),
				BGFXH_EMBEDDED_SHADER(fs_untextured_passthrough_bin),
				
				BGFX_EMBEDDED_SHADER_END()
				};
			
			bgfx::RendererType::Enum type = bgfx::getRendererType();
			m_programUntexturedPassthrough = bgfx::createProgram(bgfx::createEmbeddedShader(s_embeddedShaders, type, "vs_untextured_passthrough_bin")
															, bgfx::createEmbeddedShader(s_embeddedShaders, type, "fs_untextured_passthrough_bin")
															, true
															);
			}
			
			{
			#include "shaders/textured_passthrough/c/vs_textured_passthrough_array.bin.h"
			#include "shaders/textured_passthrough/c/fs_textured_passthrough_array.bin.h"

			static const bgfx::EmbeddedShader s_embeddedShaders[] = {
				BGFXH_EMBEDDED_SHADER(vs_textured_passthrough_array_bin),
				BGFXH_EMBEDDED_SHADER(fs_textured_passthrough_array_bin),
				
				BGFX_EMBEDDED_SHADER_END()
				};
			
			bgfx::RendererType::Enum type = bgfx::getRendererType();
			m_programTexturePassthroughArray = bgfx::createProgram(bgfx::createEmbeddedShader(s_embeddedShaders, type, "vs_textured_passthrough_array_bin")
															, bgfx::createEmbeddedShader(s_embeddedShaders, type, "fs_textured_passthrough_array_bin")
															, true
															);
			}
		#else
			m_programTexturePassthrough = bgfxh::loadProgram (bgfxh::shaderSearchPath + "vs_textured_passthrough", bgfxh::shaderSearchPath + "fs_textured_passthrough");
			m_programTexturePassthroughMonochromatic = bgfxh::loadProgram (bgfxh::shaderSearchPath + "vs_textured_passthrough_monochromatic", bgfxh::shaderSearchPath + "fs_textured_passthrough_monochromatic");
			m_programUntexturedPassthrough = bgfxh::loadProgram (bgfxh::shaderSearchPath + "vs_untextured_passthrough", bgfxh::shaderSearchPath + "fs_untextured_passthrough");
			m_programTexturePassthroughArray = bgfxh::loadProgram (bgfxh::shaderSearchPath + "vs_textured_passthrough_array", bgfxh::shaderSearchPath + "fs_textured_passthrough_array");
		#endif // BGFXH_EMBED_DEBUG_SHADERS
		
		BGFXH_ASSERT(bgfx::isValid(m_programTexturePassthrough), "m_programTexturePassthrough");
		BGFXH_ASSERT(bgfx::isValid(m_programTexturePassthroughMonochromatic), "m_programTexturePassthroughMonochromatic");
		BGFXH_ASSERT(bgfx::isValid(m_programUntexturedPassthrough), "m_programUntexturedPassthrough");
		BGFXH_ASSERT(bgfx::isValid(m_programTexturePassthroughArray), "m_programTexturePassthroughArray");
		
		// Names for programs are not supported in bgfx
		//if (bgfx::isValid(m_programTexturePassthrough)) bgfx::setName(m_programTexturePassthrough, "m_programTexturePassthrough");
		//if (bgfx::isValid(m_programTexturePassthroughMonochromatic)) bgfx::setName(m_programTexturePassthroughMonochromatic, "m_programTexturePassthroughMonochromatic");
		//if (bgfx::isValid(m_programUntexturedPassthrough)) bgfx::setName(m_programUntexturedPassthrough, "m_programUntexturedPassthrough");
		//if (bgfx::isValid(m_programTexturePassthroughArray)) bgfx::setName(m_programTexturePassthroughArray, "m_programTexturePassthroughArray");
		
		//std::cout << "Is valid? " << bgfx::isValid(m_programTexturePassthrough) << " " << bgfx::isValid(m_programTexturePassthroughMonochromatic) << " " << bgfx::isValid(m_programUntexturedPassthrough) << std::endl;
		//exit(1);
		}
}
namespace bgfxh
{
  bx::AllocatorI * internal_getDefaultAllocator ()
                                                       {
		static bx::DefaultAllocator s_allocator;
		return &s_allocator;
		}
}
namespace bgfxh
{
  void debugDrawTexture (bgfx::ViewId const viewId, bgfx::TextureHandle const texture, float const xOffset, float const yOffset, float const xSize, float const ySize, float const _targetFrameBufferWidth, float const _targetFrameBufferHeight)
                                                                                                                                                                                                                                                                      {
		if (!bgfx::isValid(texture)) return;
		bgfx::setTexture (SAMPLER_COLOR, s_texColor, texture);
		bgfx::setState(BGFX_STATE_WRITE_RGB|BGFX_STATE_WRITE_A);
		screenSpaceQuad (xOffset, yOffset, xSize, ySize, _targetFrameBufferWidth, _targetFrameBufferHeight);
		bgfx::submit (viewId, m_programTexturePassthrough);
		}
}
namespace bgfxh
{
  void debugDrawTextureArray (bgfx::ViewId const viewId, bgfx::TextureHandle const texture, unsigned int const layer, float const xOffset, float const yOffset, float const xSize, float const ySize, float const _targetFrameBufferWidth, float const _targetFrameBufferHeight)
                                                                                                                                                                                                                                                                                                     {
		if (!bgfx::isValid(texture)) return;
		bgfx::setTexture (SAMPLER_COLOR, s_texColor, texture);
		bgfx::setState(BGFX_STATE_WRITE_RGB|BGFX_STATE_WRITE_A);
		float v[4] = { float(layer), 0.f, 0.f, 0.f };
		bgfx::setUniform(u_bgfxhUtilUniform, v);
		screenSpaceQuad (xOffset, yOffset, xSize, ySize, _targetFrameBufferWidth, _targetFrameBufferHeight);
		bgfx::submit (viewId, m_programTexturePassthroughArray);
		}
}
namespace bgfxh
{
  void debugDrawFramebuffer (bgfx::ViewId const viewId, bgfx::FrameBufferHandle const framebuffer, float const xOffset, float const yOffset, float const xSize, float const ySize, float const _targetFrameBufferWidth, float const _targetFrameBufferHeight)
                                                                                                                                                                                                                                                                                  {
		debugDrawTexture (viewId, bgfx::getTexture(framebuffer, 0), xOffset, yOffset, xSize, ySize, _targetFrameBufferWidth, _targetFrameBufferHeight);
		}
}
namespace bgfxh
{
  void debugDrawTextureMono (bgfx::ViewId const viewId, bgfx::TextureHandle const texture, float const xOffset, float const yOffset, float const xSize, float const ySize, float const _targetFrameBufferWidth, float const _targetFrameBufferHeight)
                                                                                                                                                                                                                                                                          {
		if (!bgfx::isValid(texture)) return;
		bgfx::setTexture (SAMPLER_COLOR, s_texColor, texture);
		bgfx::setState(BGFX_STATE_WRITE_RGB|BGFX_STATE_WRITE_A);
		screenSpaceQuad (xOffset, yOffset, xSize, ySize, _targetFrameBufferWidth, _targetFrameBufferHeight);
		bgfx::submit (viewId, m_programTexturePassthroughMonochromatic);
		}
}
namespace bgfxh
{
  void debugDrawFramebufferMono (bgfx::ViewId const viewId, bgfx::FrameBufferHandle const framebuffer, float const xOffset, float const yOffset, float const xSize, float const ySize, float const _targetFrameBufferWidth, float const _targetFrameBufferHeight)
                                                                                                                                                                                                                                                                                      {
		debugDrawTextureMono (viewId, bgfx::getTexture(framebuffer, 0), xOffset, yOffset, xSize, ySize, _targetFrameBufferWidth, _targetFrameBufferHeight);
		}
}
namespace bgfxh
{
  void deInit ()
                       {
		destroyHandle (s_texColor);
		destroyHandle (m_programUntexturedPassthrough);
		destroyHandle (m_programTexturePassthrough);
		destroyHandle (m_programTexturePassthroughArray);
		destroyHandle (m_programTexturePassthroughMonochromatic);
		destroyHandle (u_bgfxhUtilUniform);
		}
}
namespace bgfxh
{
  bgfx::TextureHandle renderJob::getOutputTexture () const
                                                                      { /// Returns the output framebuffer as a texture handle. Use this to use the output of a filter as a sampler input to another
			bgfx::FrameBufferHandle ofb = getOutputFrameBuffer();
			if (!bgfx::isValid(ofb)) return BGFX_INVALID_HANDLE;
			return bgfx::getTexture(getOutputFrameBuffer(), 0);
			}
}
namespace bgfxh
{
  void frustum::setFromViewAndProjMatrix (float * mView, float * mProj)
                                                                             {
			float res[4][4];
			bx::mtxMul((float *) res, mView, mProj);
			
			bx::Plane & left =  planes[0];
			bx::Plane & right = planes[1];
			bx::Plane & top =   planes[2];
			bx::Plane & bottom = planes[3];
			left.normal   = bx::Vec3(res[0][3] + res[0][0], res[1][3] + res[1][0], res[2][3] + res[2][0]); left.dist   = (res[3][3] + res[3][0]);
			right.normal  = bx::Vec3(res[0][3] - res[0][0], res[1][3] - res[1][0], res[2][3] - res[2][0]); right.dist  = (res[3][3] - res[3][0]);
			top.normal    = bx::Vec3(res[0][3] - res[0][1], res[1][3] - res[1][1], res[2][3] - res[2][1]); top.dist    = (res[3][3] - res[3][1]);
			bottom.normal = bx::Vec3(res[0][3] + res[0][1], res[1][3] + res[1][1], res[2][3] + res[2][1]); bottom.dist = (res[3][3] + res[3][1]);
			
			// Normalize the planes
			for (unsigned int i = 0; i < 4; ++i) {
				float invLen = 1.0/length(planes[i].v.normal);
				planes[i].v.normal = bx::mul(planes[i].v.normal, invLen);
				planes[i].v.dist   *= invLen;
				}
			}
}
namespace bgfxh
{
  void PosTexCoord0Vertex::init ()
                                   {
			ms_decl.begin()
				.add(bgfx::Attrib::Position,  3, bgfx::AttribType::Float)
				.add(bgfx::Attrib::TexCoord0, 2, bgfx::AttribType::Float)
			.end();
			}
}
namespace bgfxh
{
  bgfx::VertexLayout PosTexCoord0Vertex::ms_decl;
}
namespace bgfxh
{
  void PosVertex::init ()
                                   {
			ms_decl.begin()
				.add(bgfx::Attrib::Position,  3, bgfx::AttribType::Float)
			.end();
			}
}
namespace bgfxh
{
  bgfx::VertexLayout PosVertex::ms_decl;
}
namespace bgfxh
{
  void initView (bgfx::ViewId const viewId, char const * tag, uint32_t const vw, uint32_t const vh, float const (view) [16], float const (proj) [16], bgfx::FrameBufferHandle const fh, bool const doClear, bool const forwardZ)
                                                                                                                                                                                                                                               {
		bgfx::setViewName(viewId, tag);
		bgfx::setViewRect(viewId, 0, 0, vw, vh);
		bgfx::setViewTransform(viewId, view, proj);
		bgfx::setViewFrameBuffer(viewId, fh);
		
		const uint16_t clearFlags = doClear ? (BGFX_CLEAR_COLOR | BGFX_CLEAR_DEPTH) : 0;
		const float clearDepth = (forwardZ ? 1.0f : 0.0f);
		const uint8_t clearStencil = 0;
		const uint32_t clearColour = 0x00000000;
		bgfx::setViewClear(viewId, clearFlags, clearColour, clearDepth, clearStencil);
		}
}
namespace bgfxh
{
  void initView2D (bgfx::ViewId const viewId, char const * tag, uint32_t const vw, uint32_t const vh, bgfx::FrameBufferHandle const fh, bool const doClear, bool const unitOrthoMatrix, bool const forwardZ)
                                                                                                                                                                                                                                        {
		float orthoProj[16];	// Ortho matrix for rendering screenspace quads
		if (unitOrthoMatrix)
			bx::mtxOrtho(orthoProj, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 100.0f, 0.0f, bgfx::getCaps()->homogeneousDepth); // flip bottom 0.0f and viewHeight if you don't like bottom left coordinates
		else
			bx::mtxOrtho(orthoProj, 0.0f, vw, vh, 0.0f, 0.0f, 100.0f, 0.0f, bgfx::getCaps()->homogeneousDepth);
		
		bgfx::setViewName(viewId, tag);
		bgfx::setViewRect(viewId, 0, 0, vw, vh);
		bgfx::setViewTransform(viewId, NULL, orthoProj);
		bgfx::setViewFrameBuffer(viewId, fh);
		
		const uint16_t clearFlags = doClear ? (BGFX_CLEAR_COLOR | BGFX_CLEAR_DEPTH) : 0;
		const float clearDepth = (forwardZ ? 1.0f : 0.0f);
		const uint8_t clearStencil = 0;
		const uint32_t clearColour = 0x00000000;
		bgfx::setViewClear(viewId, clearFlags, clearColour, clearDepth, clearStencil);
		}
}
namespace bgfxh
{
  void fullscreenQuad (float const _textureWidth, float const _textureHeight)
                                                                                   {
		/*
		* From the BGFX Examples, the following license applies to only this function:
		* Copyright 2011-2018 Branimir Karadzic. All rights reserved.
		* License: https://github.com/bkaradzic/bgfx#license-bsd-2-clause
		*/
		//const bgfx::RendererType::Enum renderer = bgfx::getRendererType();
		const float _texelHalf = 0.0f;//bgfx::RendererType::Direct3D9 == renderer ? 0.5f : 0.0f;
		const bool _originBottomLeft = bgfx::getCaps()->originBottomLeft;
		const float _width = 1.0f;
		const float _height = 1.0f;
		
		if (3 == bgfx::getAvailTransientVertexBuffer(3, bgfxh::PosTexCoord0Vertex::ms_decl) ) {
			bgfx::TransientVertexBuffer vb;
			bgfx::allocTransientVertexBuffer(&vb, 3, bgfxh::PosTexCoord0Vertex::ms_decl);
			bgfxh::PosTexCoord0Vertex* vertex = (bgfxh::PosTexCoord0Vertex*)vb.data;

			const float minx = -_width;
			const float maxx =  _width;
			const float miny = 0.0f;
			const float maxy = _height*2.0f;

			const float texelHalfW = _texelHalf/_textureWidth;
			const float texelHalfH = _texelHalf/_textureHeight;
			const float minu = -1.0f + texelHalfW;
			const float maxu =  1.0f + texelHalfH;

			const float zz = 0.0f;

			float minv = texelHalfH;
			float maxv = 2.0f + texelHalfH;

			if (_originBottomLeft) {
				float temp = minv;
				minv = maxv;
				maxv = temp;

				minv -= 1.0f;
				maxv -= 1.0f;
				}

			vertex[0].m_x = minx;
			vertex[0].m_y = miny;
			vertex[0].m_z = zz;
			vertex[0].m_u = minu;
			vertex[0].m_v = minv;

			vertex[1].m_x = maxx;
			vertex[1].m_y = miny;
			vertex[1].m_z = zz;
			vertex[1].m_u = maxu;
			vertex[1].m_v = minv;

			vertex[2].m_x = maxx;
			vertex[2].m_y = maxy;
			vertex[2].m_z = zz;
			vertex[2].m_u = maxu;
			vertex[2].m_v = maxv;

			bgfx::setVertexBuffer(0, &vb);
			}
		}
}
namespace bgfxh
{
  void screenSpaceQuad (float const xOffset, float const yOffset, float const xSize, float const ySize, float const _framebufferWidth, float const _framebufferHeight)
                                                                                                                                                                                        {
		/*
		* From the BGFX Examples, the following license applies to only this function:
		* Copyright 2011-2018 Branimir Karadzic. All rights reserved.
		* License: https://github.com/bkaradzic/bgfx#license-bsd-2-clause
		*/
		//const bgfx::RendererType::Enum renderer = bgfx::getRendererType();
		const float _texelHalf = 0.0f;//bgfx::RendererType::Direct3D9 == renderer ? 0.5f : 0.0f;
		const bool _originBottomLeft = bgfx::getCaps()->originBottomLeft;
		
		if (6 == bgfx::getAvailTransientVertexBuffer(6, bgfxh::PosTexCoord0Vertex::ms_decl) ) {
			bgfx::TransientVertexBuffer vb;
			bgfx::allocTransientVertexBuffer(&vb, 6, bgfxh::PosTexCoord0Vertex::ms_decl);
			bgfxh::PosTexCoord0Vertex* vertex = (bgfxh::PosTexCoord0Vertex*)vb.data;

			const float minx = xOffset;
			const float maxx = (xOffset + xSize);
			const float miny = yOffset;
			const float maxy = (yOffset + ySize);

			float texelHalfW = 0.f;
			float texelHalfH = 0.f;
			if (_framebufferWidth > 0.0f && _framebufferHeight > 0.0f) {
				texelHalfW = _texelHalf/_framebufferWidth;
				texelHalfH = _texelHalf/_framebufferHeight;
				}
			const float minu = 0.0f + texelHalfW;
			const float maxu = 1.0f + texelHalfH;

			const float zz = 0.0f;

			float minv = texelHalfH;
			float maxv = 1.0f + texelHalfH;

			if (_originBottomLeft) {
				float temp = minv;
				minv = maxv;
				maxv = temp;
				}

			vertex[0].m_x = minx;
			vertex[0].m_y = miny;
			vertex[0].m_z = zz;
			vertex[0].m_u = minu;
			vertex[0].m_v = minv;

			vertex[1].m_x = maxx;
			vertex[1].m_y = miny;
			vertex[1].m_z = zz;
			vertex[1].m_u = maxu;
			vertex[1].m_v = minv;

			vertex[2].m_x = maxx;
			vertex[2].m_y = maxy;
			vertex[2].m_z = zz;
			vertex[2].m_u = maxu;
			vertex[2].m_v = maxv;
			
			vertex[3].m_x = minx;
			vertex[3].m_y = miny;
			vertex[3].m_z = zz;
			vertex[3].m_u = minu;
			vertex[3].m_v = minv;

			vertex[4].m_x = maxx;
			vertex[4].m_y = maxy;
			vertex[4].m_z = zz;
			vertex[4].m_u = maxu;
			vertex[4].m_v = maxv;
			
			vertex[5].m_x = minx;
			vertex[5].m_y = maxy;
			vertex[5].m_z = zz;
			vertex[5].m_u = minu;
			vertex[5].m_v = maxv;


			bgfx::setVertexBuffer(0, &vb);
			}
		}
}
namespace bgfxh
{
  BGFXH_STRING fixPath (BGFXH_STRING const & in)
                                                       {
		/// Converts a POSIX path to a windows path and vice versa
		#ifdef __WIN32
			const char from = '/';
			const char to = '\\';
		#else
			const char from = '\\';
			const char to = '/';
		#endif
		BGFXH_STRING out = in;
		for (unsigned int i = 0; i < out.size(); ++i) {
			if (out[i] == from) out[i] = to;
			}
		return out;
		}
}
namespace bgfxh
{
  void readFileRawToString (BGFXH_STRING const & filename, BGFXH_STRING & buff)
                                                                                      {
		std::ifstream fs(fixPath(filename).c_str(), std::ios::in | std::ios::binary);
		if (!fs.is_open()) {
			BGFXH_WARN (false, "Could not open file ", filename );
			return;
			}
		fs.seekg (0, std::ios::end);
		const size_t LEN = fs.tellg();
		fs.seekg (0, std::ios::beg);
		
		buff.resize(LEN);
		fs.read((char *) &buff[0], LEN);
		fs.close();
		return;
		}
}
namespace bgfxh
{
  bgfx::Memory const * readFileRawToBgfxMemory (BGFXH_STRING const & filename)
                                                                                     {
		std::ifstream fs(fixPath(filename).c_str(), std::ios::in | std::ios::binary);
		if (!fs.is_open()) {
			BGFXH_WARN (false, "Could not open file ", filename );
			return NULL;
			}
		fs.seekg (0, std::ios::end);
		const size_t LEN = fs.tellg();
		fs.seekg (0, std::ios::beg);
		
		const bgfx::Memory * mem = bgfx::alloc(LEN);
		fs.read((char *) mem->data, LEN);
		fs.close();
		return mem;
		}
}
namespace bgfxh
{
  bgfx::ProgramHandle loadProgram (char const * vertexShaderFile, char const * fragementShaderFile)
                                                                                                          {
		const bgfx::Memory * vsShaderFileMem = readFileRawToBgfxMemory(vertexShaderFile); //bgfx will auto-dealloc this when done
		if (!vsShaderFileMem) {
			BGFXH_WARN (false, "vertex shader buffer is NULL");
			return BGFX_INVALID_HANDLE;
			}
		bgfx::ShaderHandle vsh = bgfx::createShader(vsShaderFileMem);
		bgfx::setName(vsh, vertexShaderFile);
		
		bgfx::ShaderHandle fsh = BGFX_INVALID_HANDLE;
		if (fragementShaderFile) {
			const bgfx::Memory * fsShaderFileMem = readFileRawToBgfxMemory(fragementShaderFile);
			fsh = bgfx::createShader(fsShaderFileMem);
			bgfx::setName(fsh, fragementShaderFile);
			}

		return bgfx::createProgram(vsh, fsh, true /* destroy shaders when program is destroyed */);
		}
}
namespace bgfxh
{
  bgfx::ProgramHandle loadProgram (BGFXH_STRING const & vertexShaderFile, BGFXH_STRING const & fragmentShaderFile)
                                                                                                                         {
		return loadProgram (vertexShaderFile.c_str(), fragmentShaderFile.c_str());
		}
}
#undef LZZ_INLINE
#endif //BGFXH_DOUBLE_GUARD_bgfxh
#endif //BGFXH_IMPL
