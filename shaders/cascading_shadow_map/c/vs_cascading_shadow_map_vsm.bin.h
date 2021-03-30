static const uint8_t vs_cascading_shadow_map_vsm_bin_glsl[] = {
  0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0f, 0x75,  // VSH............u
  0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01,  // _modelViewProj..
  0x00, 0x00, 0x01, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74,  // ........attribut
  0x65, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f,  // e vec3 a_positio
  0x6e, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20,  // n;.uniform mat4 
  0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b,  // u_modelViewProj;
  0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a,  // .void main ().{.
  0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b,  //   vec4 tmpvar_1;
  0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20,  // .  tmpvar_1.w = 
  0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e,  // 1.0;.  tmpvar_1.
  0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e,  // xyz = a_position
  0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20,  // ;.  gl_Position 
  0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72,  // = (u_modelViewPr
  0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a,  // oj * tmpvar_1);.
  0x7d, 0x0a, 0x0a, 0x00 };                                                                        //  tmpvar_1);.}...
unsigned int vs_cascading_shadow_map_vsm_bin_glsl_size = 228;

BX_UNUSED(vs_cascading_shadow_map_vsm_bin_glsl)
BX_UNUSED(vs_cascading_shadow_map_vsm_bin_glsl_size)
static const uint8_t vs_cascading_shadow_map_vsm_bin_dx9[] = {
  0x56, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64,  // VSH........u_mod
  0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00,  // elViewProj......
  0x6c, 0x01, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x87, 0x3c, 0x16, 0xa4, 0x8d, 0x3d, 0x5b, 0xea,  // l...DXBC.<...=[.
  0x61, 0x5c, 0x10, 0x3b, 0xa1, 0xf8, 0xf8, 0xa1, 0x01, 0x00, 0x00, 0x00, 0x6c, 0x01, 0x00, 0x00,  // a..;........l...
  0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,  // ....,...`.......
  0x49, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,  // ISGN,...........
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,  //  ...............
  0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e,  // ........POSITION
  0x00, 0xab, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,  // ....OSGN,.......
  0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,  // .... ...........
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50,  // ............SV_P
  0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x53, 0x48, 0x44, 0x52, 0xd0, 0x00, 0x00, 0x00,  // OSITION.SHDR....
  0x40, 0x00, 0x01, 0x00, 0x34, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00,  // @...4...Y...F. .
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00,  // ........_...r...
  0x00, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,  // ....g.... ......
  0x01, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08,  // ....h.......8...
  0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,  // ........V.......
  0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a,  // F. .........2...
  0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,  // ........F. .....
  0x00, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00,  // ............F...
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,  // ....2...........
  0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xa6, 0x1a, 0x10, 0x00,  // F. .............
  0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,  // ....F...........
  0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,  // . ......F.......
  0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01,  // F. .........>...
  0x00, 0x01, 0x01, 0x00, 0x40, 0x00 };                                                            // ......>.......@.
unsigned int vs_cascading_shadow_map_vsm_bin_dx9_size = 406;

BX_UNUSED(vs_cascading_shadow_map_vsm_bin_dx9)
BX_UNUSED(vs_cascading_shadow_map_vsm_bin_dx9_size)
static const uint8_t vs_cascading_shadow_map_vsm_bin_dx11[] = {
  0x56, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64,  // VSH........u_mod
  0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00,  // elViewProj......
  0x6c, 0x01, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x87, 0x3c, 0x16, 0xa4, 0x8d, 0x3d, 0x5b, 0xea,  // l...DXBC.<...=[.
  0x61, 0x5c, 0x10, 0x3b, 0xa1, 0xf8, 0xf8, 0xa1, 0x01, 0x00, 0x00, 0x00, 0x6c, 0x01, 0x00, 0x00,  // a..;........l...
  0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,  // ....,...`.......
  0x49, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,  // ISGN,...........
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,  //  ...............
  0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e,  // ........POSITION
  0x00, 0xab, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,  // ....OSGN,.......
  0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,  // .... ...........
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50,  // ............SV_P
  0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x53, 0x48, 0x44, 0x52, 0xd0, 0x00, 0x00, 0x00,  // OSITION.SHDR....
  0x40, 0x00, 0x01, 0x00, 0x34, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00,  // @...4...Y...F. .
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00,  // ........_...r...
  0x00, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,  // ....g.... ......
  0x01, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08,  // ....h.......8...
  0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,  // ........V.......
  0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a,  // F. .........2...
  0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,  // ........F. .....
  0x00, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00,  // ............F...
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,  // ....2...........
  0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xa6, 0x1a, 0x10, 0x00,  // F. .............
  0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,  // ....F...........
  0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,  // . ......F.......
  0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01,  // F. .........>...
  0x00, 0x01, 0x01, 0x00, 0x40, 0x00 };                                                            // ......>.......@.
unsigned int vs_cascading_shadow_map_vsm_bin_dx11_size = 406;

BX_UNUSED(vs_cascading_shadow_map_vsm_bin_dx11)
BX_UNUSED(vs_cascading_shadow_map_vsm_bin_dx11_size)
static const uint8_t vs_cascading_shadow_map_vsm_bin_metal[] = {
  0x56, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64,  // VSH........u_mod
  0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00,  // elViewProj......
  0x20, 0x02, 0x00, 0x00, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70,  //  ...using namesp
  0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63,  // ace metal;.struc
  0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49,  // t xlatMtlShaderI
  0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20,  // nput {.  float3 
  0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74,  // a_position [[att
  0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a,  // ribute(0)]];.};.
  0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68,  // struct xlatMtlSh
  0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66,  // aderOutput {.  f
  0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f,  // loat4 gl_Positio
  0x6e, 0x20, 0x5b, 0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, 0x0a,  // n [[position]];.
  0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74,  // };.struct xlatMt
  0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b,  // lShaderUniform {
  0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f,  // .  float4x4 u_mo
  0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a,  // delViewProj;.};.
  0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68,  // vertex xlatMtlSh
  0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d,  // aderOutput xlatM
  0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53,  // tlMain (xlatMtlS
  0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f,  // haderInput _mtl_
  0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20,  // i [[stage_in]], 
  0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c,  // constant xlatMtl
  0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f,  // ShaderUniform& _
  0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30,  // mtl_u [[buffer(0
  0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c,  // )]]).{.  xlatMtl
  0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74,  // ShaderOutput _mt
  0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d,  // l_o;.  float4 tm
  0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d,  // pvar_1 = 0;.  tm
  0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a,  // pvar_1.w = 1.0;.
  0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d,  //   tmpvar_1.xyz =
  0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69,  //  _mtl_i.a_positi
  0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f,  // on;.  _mtl_o.gl_
  0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c,  // Position = (_mtl
  0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72,  // _u.u_modelViewPr
  0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a,  // oj * tmpvar_1);.
  0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b,  //   return _mtl_o;
  0x0a, 0x7d, 0x0a, 0x0a, 0x00 };                                                                  // urn _mtl_o;.}...
unsigned int vs_cascading_shadow_map_vsm_bin_metal_size = 581;

BX_UNUSED(vs_cascading_shadow_map_vsm_bin_metal)
BX_UNUSED(vs_cascading_shadow_map_vsm_bin_metal_size)
static const uint8_t vs_cascading_shadow_map_vsm_bin_spirv[] = {
  0x56, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64,  // VSH........u_mod
  0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00,  // elViewProj......
  0x68, 0x03, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00,  // h.....#.........
  0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00,  // d...............
  0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64,  // ........GLSL.std
  0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,  // .450............
  0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,  // ................
  0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00,  // main..../...2...
  0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00,  // ................
  0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00,  // ....main........
  0x1a, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x07, 0x00,  // ....$Global.....
  0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56,  // ........u_modelV
  0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x05, 0x00, 0x03, 0x00, 0x1c, 0x00, 0x00, 0x00,  // iewProj.........
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f,  // ......../...a_po
  0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0x32, 0x00, 0x00, 0x00,  // sition......2...
  0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75,  // @entryPointOutpu
  0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,  // t.gl_Position...
  0x48, 0x00, 0x04, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,  // H...............
  0x48, 0x00, 0x05, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,  // H...........#...
  0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ....H...........
  0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x1a, 0x00, 0x00, 0x00,  // ........G.......
  0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00,  // ....G......."...
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00,  // ....G.../.......
  0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x32, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,  // ....G...2.......
  0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00,  // ............!...
  0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00,  // ................
  0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,  //  ...............
  0x03, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,  // ................
  0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x11, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,  // ............ ...
  0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00,  // ....+...........
  0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,  // ....+...........
  0x00, 0x00, 0x80, 0x3f, 0x18, 0x00, 0x04, 0x00, 0x19, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,  // ...?............
  0x04, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,  // ................
  0x20, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00,  //  ...............
  0x3b, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,  // ;...............
  0x20, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,  //  ...............
  0x20, 0x00, 0x04, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,  //  ...............
  0x3b, 0x00, 0x04, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,  // ;......./.......
  0x20, 0x00, 0x04, 0x00, 0x31, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,  //  ...1...........
  0x3b, 0x00, 0x04, 0x00, 0x31, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,  // ;...1...2.......
  0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // 6...............
  0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00,  // ............=...
  0x07, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00,  // ....0.../...Q...
  0x06, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ....J...0.......
  0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,  // Q.......K...0...
  0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00,  // ....Q.......L...
  0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x09, 0x00, 0x00, 0x00,  // 0.......P.......
  0x4d, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00,  // M...J...K...L...
  0x14, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00,  // ....A.......N...
  0x1c, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x19, 0x00, 0x00, 0x00,  // ........=.......
  0x4f, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00,  // O...N...........
  0x50, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00,  // P...M...O...Q...
  0x06, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,  // ....a...P.......
  0x7f, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00,  // ........T...a...
  0x52, 0x00, 0x06, 0x00, 0x09, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00,  // R.......c...T...
  0x50, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x32, 0x00, 0x00, 0x00,  // P.......>...2...
  0x63, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00,  // c.......8.......
  0x40, 0x00 };                                                                                    // ......8.......@.
unsigned int vs_cascading_shadow_map_vsm_bin_spirv_size = 914;

BX_UNUSED(vs_cascading_shadow_map_vsm_bin_spirv)
BX_UNUSED(vs_cascading_shadow_map_vsm_bin_spirv_size)
static const uint8_t * vs_cascading_shadow_map_vsm_bin_esslandroid = NULL;
unsigned int vs_cascading_shadow_map_vsm_bin_esslandroid_size = 0;

BX_UNUSED(vs_cascading_shadow_map_vsm_bin_esslandroid)
BX_UNUSED(vs_cascading_shadow_map_vsm_bin_esslandroid_size)
static const uint8_t * vs_cascading_shadow_map_vsm_bin_pssl = NULL;
unsigned int vs_cascading_shadow_map_vsm_bin_pssl_size = 0;

BX_UNUSED(vs_cascading_shadow_map_vsm_bin_pssl)
BX_UNUSED(vs_cascading_shadow_map_vsm_bin_pssl_size)
static const uint8_t * vs_cascading_shadow_map_vsm_bin_esslnacl = NULL;
unsigned int vs_cascading_shadow_map_vsm_bin_esslnacl_size = 0;

BX_UNUSED(vs_cascading_shadow_map_vsm_bin_esslnacl)
BX_UNUSED(vs_cascading_shadow_map_vsm_bin_esslnacl_size)
