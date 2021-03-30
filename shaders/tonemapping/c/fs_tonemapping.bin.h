static const uint8_t fs_tonemapping_bin_glsl[] = {
  0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x73,  // FSH.o.><.......s
  0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x08,  // _texColor.......
  0x73, 0x5f, 0x74, 0x65, 0x78, 0x4c, 0x75, 0x6d, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x25, 0x02,  // s_texLum......%.
  0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76,  // ..varying vec2 v
  0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66,  // _texcoord0;.unif
  0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f,  // orm sampler2D s_
  0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72,  // texColor;.unifor
  0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65,  // m sampler2D s_te
  0x78, 0x4c, 0x75, 0x6d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20,  // xLum;.void main 
  0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x65, 0x78, 0x5f,  // ().{.  vec4 tex_
  0x31, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72,  // 1;.  vec4 tmpvar
  0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d,  // _2;.  tmpvar_2 =
  0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65,  //  texture2D (s_te
  0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f,  // xColor, v_texcoo
  0x72, 0x64, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x65, 0x78, 0x5f, 0x31, 0x2e, 0x77, 0x20,  // rd0);.  tex_1.w 
  0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x3b, 0x0a, 0x20, 0x20,  // = tmpvar_2.w;.  
  0x76, 0x65, 0x63, 0x33, 0x20, 0x5f, 0x72, 0x67, 0x62, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x5f,  // vec3 _rgb_3;.  _
  0x72, 0x67, 0x62, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f,  // rgb_3 = (tmpvar_
  0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x28, 0x30, 0x2e, 0x33, 0x20, 0x2b, 0x20, 0x28,  // 2.xyz * (0.3 + (
  0x30, 0x2e, 0x37, 0x20, 0x2f, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70,  // 0.7 / .    clamp
  0x20, 0x28, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f,  //  ((texture2D (s_
  0x74, 0x65, 0x78, 0x4c, 0x75, 0x6d, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f,  // texLum, v_texcoo
  0x72, 0x64, 0x30, 0x29, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x2c, 0x20, 0x30,  // rd0).x + 0.5), 0
  0x2e, 0x35, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, 0x29, 0x3b, 0x0a,  // .5, 1.0).  )));.
  0x20, 0x20, 0x74, 0x65, 0x78, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x70, 0x6f,  //   tex_1.xyz = po
  0x77, 0x20, 0x28, 0x61, 0x62, 0x73, 0x28, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x20, 0x28, 0x0a, 0x20,  // w (abs(clamp (. 
  0x20, 0x20, 0x20, 0x28, 0x28, 0x5f, 0x72, 0x67, 0x62, 0x5f, 0x33, 0x20, 0x2a, 0x20, 0x28, 0x28,  //    ((_rgb_3 * ((
  0x32, 0x2e, 0x35, 0x31, 0x20, 0x2a, 0x20, 0x5f, 0x72, 0x67, 0x62, 0x5f, 0x33, 0x29, 0x20, 0x2b,  // 2.51 * _rgb_3) +
  0x20, 0x30, 0x2e, 0x30, 0x33, 0x29, 0x29, 0x20, 0x2f, 0x20, 0x28, 0x28, 0x5f, 0x72, 0x67, 0x62,  //  0.03)) / ((_rgb
  0x5f, 0x33, 0x20, 0x2a, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x32, 0x2e,  // _3 * (.      (2.
  0x34, 0x33, 0x20, 0x2a, 0x20, 0x5f, 0x72, 0x67, 0x62, 0x5f, 0x33, 0x29, 0x0a, 0x20, 0x20, 0x20,  // 43 * _rgb_3).   
  0x20, 0x20, 0x2b, 0x20, 0x30, 0x2e, 0x35, 0x39, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x30, 0x2e, 0x31,  //   + 0.59)) + 0.1
  0x34, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30,  // 4)).  , 0.0, 1.0
  0x29, 0x29, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34,  // )), vec3(0.45454
  0x35, 0x34, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x2c, 0x20, 0x30,  // 54, 0.4545454, 0
  0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c,  // .4545454));.  gl
  0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78,  // _FragColor = tex
  0x5f, 0x31, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00 };                                                // or = tex_1;.}...
unsigned int fs_tonemapping_bin_glsl_size = 600;

BX_UNUSED(fs_tonemapping_bin_glsl)
BX_UNUSED(fs_tonemapping_bin_glsl_size)
static const uint8_t fs_tonemapping_bin_dx9[] = {
  0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x02, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78,  // FSH.o.><...s_tex
  0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x08, 0x73, 0x5f, 0x74, 0x65,  // Color0......s_te
  0x78, 0x4c, 0x75, 0x6d, 0x30, 0x01, 0x01, 0x00, 0x01, 0x00, 0x58, 0x03, 0x00, 0x00, 0x44, 0x58,  // xLum0.....X...DX
  0x42, 0x43, 0x3e, 0xc8, 0x6f, 0xc0, 0xef, 0x15, 0x0c, 0xb3, 0x52, 0xb5, 0x48, 0x96, 0x86, 0xbb,  // BC>.o.....R.H...
  0xf6, 0xd6, 0x01, 0x00, 0x00, 0x00, 0x58, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00,  // ......X.......,.
  0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00,  // ..........ISGNP.
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..........8.....
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00,  // ................
  0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,  // ..D.............
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53,  // ..........SV_POS
  0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab,  // ITION.TEXCOORD..
  0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00,  // ..OSGN,.........
  0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,  // .. .............
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52,  // ..........SV_TAR
  0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x98, 0x02, 0x00, 0x00, 0x40, 0x00,  // GET...SHDR....@.
  0x00, 0x00, 0xa6, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00,  // ......Z....`....
  0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x58, 0x18,  // ..Z....`......X.
  0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x58, 0x18,  // ...p......UU..X.
  0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10,  // ...p......UU..b.
  0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20,  // ..2.......e.... 
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x00, 0x45, 0x00,  // ......h.......E.
  0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00,  // ..........F.....
  0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x01, 0x00,  // ..F~.......`....
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,  // ................
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x34, 0x00,  // .......@.....?4.
  0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00,  // ................
  0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x33, 0x00, 0x00, 0x07, 0x12, 0x00,  // ...@.....?3.....
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40,  // ...............@
  0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x0e, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00,  // .....?..........
  0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x33, 0x33, 0x33, 0x3f, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00,  // ...@..333?......
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,  // ................
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x9a, 0x99, 0x99, 0x3e, 0x45, 0x00,  // .......@.....>E.
  0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00,  // ..........F.....
  0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00,  // ..F~.......`....
  0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,  // ..8...r.........
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00,  // ......F.......6.
  0x00, 0x05, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x01, 0x00,  // ... ......:.....
  0x00, 0x00, 0x32, 0x00, 0x00, 0x0f, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02,  // ..2...r.......F.
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xd7, 0xa3, 0x20, 0x40, 0xd7, 0xa3,  // .......@.... @..
  0x20, 0x40, 0xd7, 0xa3, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x8f, 0xc2,  //  @.. @.....@....
  0xf5, 0x3c, 0x8f, 0xc2, 0xf5, 0x3c, 0x8f, 0xc2, 0xf5, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00,  // .<...<...<....8.
  0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00,  // ..r.......F.....
  0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0f, 0x72, 0x00,  // ..F.......2...r.
  0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40,  // ......F........@
  0x00, 0x00, 0x1f, 0x85, 0x1b, 0x40, 0x1f, 0x85, 0x1b, 0x40, 0x1f, 0x85, 0x1b, 0x40, 0x00, 0x00,  // .....@...@...@..
  0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x3d, 0x0a, 0x17, 0x3f, 0x3d, 0x0a, 0x17, 0x3f, 0x3d, 0x0a,  // ...@..=..?=..?=.
  0x17, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0c, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00,  // .?....2...r.....
  0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x02, 0x00,  // ..F.......F.....
  0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x29, 0x5c, 0x0f, 0x3e, 0x29, 0x5c, 0x0f, 0x3e, 0x29, 0x5c,  // ...@..)..>)..>).
  0x0f, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x20, 0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00,  // .>..... ..r.....
  0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00,  // ..F.......F.....
  0x00, 0x00, 0x2f, 0x00, 0x00, 0x05, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02,  // ../...r.......F.
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00,  // ......8...r.....
  0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x2f, 0xba,  // ..F........@../.
  0xe8, 0x3e, 0x2f, 0xba, 0xe8, 0x3e, 0x2f, 0xba, 0xe8, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00,  // .>/..>/..>......
  0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00,  // ..r ......F.....
  0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00 };                                    // F.......>.......
unsigned int fs_tonemapping_bin_dx9_size = 906;

BX_UNUSED(fs_tonemapping_bin_dx9)
BX_UNUSED(fs_tonemapping_bin_dx9_size)
static const uint8_t fs_tonemapping_bin_dx11[] = {
  0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x02, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78,  // FSH.o.><...s_tex
  0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x08, 0x73, 0x5f, 0x74, 0x65,  // Color0......s_te
  0x78, 0x4c, 0x75, 0x6d, 0x30, 0x01, 0x01, 0x00, 0x01, 0x00, 0x58, 0x03, 0x00, 0x00, 0x44, 0x58,  // xLum0.....X...DX
  0x42, 0x43, 0x3e, 0xc8, 0x6f, 0xc0, 0xef, 0x15, 0x0c, 0xb3, 0x52, 0xb5, 0x48, 0x96, 0x86, 0xbb,  // BC>.o.....R.H...
  0xf6, 0xd6, 0x01, 0x00, 0x00, 0x00, 0x58, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00,  // ......X.......,.
  0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00,  // ..........ISGNP.
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..........8.....
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00,  // ................
  0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,  // ..D.............
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53,  // ..........SV_POS
  0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab,  // ITION.TEXCOORD..
  0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00,  // ..OSGN,.........
  0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,  // .. .............
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52,  // ..........SV_TAR
  0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x98, 0x02, 0x00, 0x00, 0x40, 0x00,  // GET...SHDR....@.
  0x00, 0x00, 0xa6, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00,  // ......Z....`....
  0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x58, 0x18,  // ..Z....`......X.
  0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x58, 0x18,  // ...p......UU..X.
  0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10,  // ...p......UU..b.
  0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20,  // ..2.......e.... 
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x00, 0x45, 0x00,  // ......h.......E.
  0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00,  // ..........F.....
  0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x01, 0x00,  // ..F~.......`....
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,  // ................
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x34, 0x00,  // .......@.....?4.
  0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00,  // ................
  0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x33, 0x00, 0x00, 0x07, 0x12, 0x00,  // ...@.....?3.....
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40,  // ...............@
  0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x0e, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00,  // .....?..........
  0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x33, 0x33, 0x33, 0x3f, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00,  // ...@..333?......
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,  // ................
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x9a, 0x99, 0x99, 0x3e, 0x45, 0x00,  // .......@.....>E.
  0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00,  // ..........F.....
  0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00,  // ..F~.......`....
  0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,  // ..8...r.........
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00,  // ......F.......6.
  0x00, 0x05, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x01, 0x00,  // ... ......:.....
  0x00, 0x00, 0x32, 0x00, 0x00, 0x0f, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02,  // ..2...r.......F.
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xd7, 0xa3, 0x20, 0x40, 0xd7, 0xa3,  // .......@.... @..
  0x20, 0x40, 0xd7, 0xa3, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x8f, 0xc2,  //  @.. @.....@....
  0xf5, 0x3c, 0x8f, 0xc2, 0xf5, 0x3c, 0x8f, 0xc2, 0xf5, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00,  // .<...<...<....8.
  0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00,  // ..r.......F.....
  0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0f, 0x72, 0x00,  // ..F.......2...r.
  0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40,  // ......F........@
  0x00, 0x00, 0x1f, 0x85, 0x1b, 0x40, 0x1f, 0x85, 0x1b, 0x40, 0x1f, 0x85, 0x1b, 0x40, 0x00, 0x00,  // .....@...@...@..
  0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x3d, 0x0a, 0x17, 0x3f, 0x3d, 0x0a, 0x17, 0x3f, 0x3d, 0x0a,  // ...@..=..?=..?=.
  0x17, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0c, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00,  // .?....2...r.....
  0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x02, 0x00,  // ..F.......F.....
  0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x29, 0x5c, 0x0f, 0x3e, 0x29, 0x5c, 0x0f, 0x3e, 0x29, 0x5c,  // ...@..)..>)..>).
  0x0f, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x20, 0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00,  // .>..... ..r.....
  0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00,  // ..F.......F.....
  0x00, 0x00, 0x2f, 0x00, 0x00, 0x05, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02,  // ../...r.......F.
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00,  // ......8...r.....
  0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x2f, 0xba,  // ..F........@../.
  0xe8, 0x3e, 0x2f, 0xba, 0xe8, 0x3e, 0x2f, 0xba, 0xe8, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00,  // .>/..>/..>......
  0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00,  // ..r ......F.....
  0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00 };                                    // F.......>.......
unsigned int fs_tonemapping_bin_dx11_size = 906;

BX_UNUSED(fs_tonemapping_bin_dx11)
BX_UNUSED(fs_tonemapping_bin_dx11_size)
static const uint8_t fs_tonemapping_bin_metal[] = {
  0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x2b, 0x04, 0x00, 0x00, 0x75, 0x73,  // FSH.o.><..+...us
  0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65,  // ing namespace me
  0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74,  // tal;.struct xlat
  0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b,  // MtlShaderInput {
  0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63,  // .  float2 v_texc
  0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74,  // oord0;.};.struct
  0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75,  //  xlatMtlShaderOu
  0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20,  // tput {.  float4 
  0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x7d, 0x3b,  // gl_FragColor;.};
  0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53,  // .struct xlatMtlS
  0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x7d,  // haderUniform {.}
  0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d,  // ;.fragment xlatM
  0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78,  // tlShaderOutput x
  0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74,  // latMtlMain (xlat
  0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f,  // MtlShaderInput _
  0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e,  // mtl_i [[stage_in
  0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61,  // ]], constant xla
  0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72,  // tMtlShaderUnifor
  0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66,  // m& _mtl_u [[buff
  0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x0a, 0x20, 0x20, 0x2c, 0x20, 0x20, 0x20, 0x74, 0x65,  // er(0)]].  ,   te
  0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x64, 0x3c, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73,  // xture2d<float> s
  0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74,  // _texColor [[text
  0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65,  // ure(0)]], sample
  0x72, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43,  // r _mtlsmp_s_texC
  0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x28, 0x30,  // olor [[sampler(0
  0x29, 0x5d, 0x5d, 0x0a, 0x20, 0x20, 0x2c, 0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72,  // )]].  ,   textur
  0x65, 0x32, 0x64, 0x3c, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78,  // e2d<float> s_tex
  0x4c, 0x75, 0x6d, 0x20, 0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x31, 0x29,  // Lum [[texture(1)
  0x5d, 0x5d, 0x2c, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x5f, 0x6d, 0x74, 0x6c,  // ]], sampler _mtl
  0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x4c, 0x75, 0x6d, 0x20, 0x5b, 0x5b, 0x73,  // smp_s_texLum [[s
  0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20,  // ampler(1)]]).{. 
  0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75,  //  xlatMtlShaderOu
  0x74, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66,  // tput _mtl_o;.  f
  0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, 0x65, 0x78, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b,  // loat4 tex_1 = 0;
  0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72,  // .  float4 tmpvar
  0x5f, 0x32, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72,  // _2 = 0;.  tmpvar
  0x5f, 0x32, 0x20, 0x3d, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e,  // _2 = s_texColor.
  0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73,  // sample(_mtlsmp_s
  0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61,  // _texColor, (floa
  0x74, 0x32, 0x29, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78,  // t2)(_mtl_i.v_tex
  0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x65, 0x78, 0x5f,  // coord0));.  tex_
  0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77,  // 1.w = tmpvar_2.w
  0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x72, 0x67, 0x62, 0x5f,  // ;.  float3 _rgb_
  0x33, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x72, 0x67, 0x62, 0x5f, 0x33, 0x20,  // 3 = 0;.  _rgb_3 
  0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20,  // = (tmpvar_2.xyz 
  0x2a, 0x20, 0x28, 0x30, 0x2e, 0x33, 0x20, 0x2b, 0x20, 0x28, 0x30, 0x2e, 0x37, 0x20, 0x2f, 0x20,  // * (0.3 + (0.7 / 
  0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x20, 0x28, 0x28, 0x73, 0x5f, 0x74,  // .    clamp ((s_t
  0x65, 0x78, 0x4c, 0x75, 0x6d, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x5f, 0x6d, 0x74,  // exLum.sample(_mt
  0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x4c, 0x75, 0x6d, 0x2c, 0x20, 0x28,  // lsmp_s_texLum, (
  0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x29, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76,  // float2)(_mtl_i.v
  0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x29, 0x2e, 0x78, 0x20, 0x2b,  // _texcoord0)).x +
  0x20, 0x30, 0x2e, 0x35, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x35, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29,  //  0.5), 0.5, 1.0)
  0x0a, 0x20, 0x20, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x65, 0x78, 0x5f, 0x31, 0x2e,  // .  )));.  tex_1.
  0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x61, 0x62, 0x73, 0x28, 0x63,  // xyz = pow (abs(c
  0x6c, 0x61, 0x6d, 0x70, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x28, 0x5f, 0x72, 0x67,  // lamp (.    ((_rg
  0x62, 0x5f, 0x33, 0x20, 0x2a, 0x20, 0x28, 0x28, 0x32, 0x2e, 0x35, 0x31, 0x20, 0x2a, 0x20, 0x5f,  // b_3 * ((2.51 * _
  0x72, 0x67, 0x62, 0x5f, 0x33, 0x29, 0x20, 0x2b, 0x20, 0x30, 0x2e, 0x30, 0x33, 0x29, 0x29, 0x20,  // rgb_3) + 0.03)) 
  0x2f, 0x20, 0x28, 0x28, 0x5f, 0x72, 0x67, 0x62, 0x5f, 0x33, 0x20, 0x2a, 0x20, 0x28, 0x0a, 0x20,  // / ((_rgb_3 * (. 
  0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x32, 0x2e, 0x34, 0x33, 0x20, 0x2a, 0x20, 0x5f, 0x72, 0x67,  //      (2.43 * _rg
  0x62, 0x5f, 0x33, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x30, 0x2e, 0x35, 0x39,  // b_3).     + 0.59
  0x29, 0x29, 0x20, 0x2b, 0x20, 0x30, 0x2e, 0x31, 0x34, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x2c, 0x20,  // )) + 0.14)).  , 
  0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61,  // 0.0, 1.0)), floa
  0x74, 0x33, 0x28, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x2c, 0x20, 0x30, 0x2e,  // t3(0.4545454, 0.
  0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34,  // 4545454, 0.45454
  0x35, 0x34, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67,  // 54));.  _mtl_o.g
  0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x65,  // l_FragColor = te
  0x78, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d,  // x_1;.  return _m
  0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00 };                                    // urn _mtl_o;.}...
unsigned int fs_tonemapping_bin_metal_size = 1082;

BX_UNUSED(fs_tonemapping_bin_metal)
BX_UNUSED(fs_tonemapping_bin_metal_size)
static const uint8_t fs_tonemapping_bin_spirv[] = {
  0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0xf4, 0x05, 0x00, 0x00, 0x03, 0x02,  // FSH.o.><........
  0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0x4f, 0x01, 0x00, 0x00, 0x00, 0x00,  // #.........O.....
  0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00,  // ................
  0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00,  // ..GLSL.std.450..
  0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00,  // ................
  0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00,  // ..........main..
  0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0xc1, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00,  // ................
  0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01,  // ................
  0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00,  // ..........main..
  0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x36, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43,  // ......6...s_texC
  0x6f, 0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00,  // olorTexture.....
  0x06, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x4c, 0x75, 0x6d, 0x54, 0x65,  // ..<...s_texLumTe
  0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x05, 0x00, 0x05, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x76, 0x5f,  // xture.........v_
  0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0xc1, 0x00,  // texcoord0.......
  0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30,  // ..bgfx_FragData0
  0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x36, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..G...6...".....
  0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x36, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..G...6...!.....
  0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..G...<...".....
  0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00,  // ..G...<...!.....
  0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..G.............
  0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xc1, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00,  // ..G.............
  0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00,  // ..........!.....
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x00, 0x16, 0x00,  // ................
  0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, 0x00, 0x09, 0x00, 0x08, 0x00,  // ...... .........
  0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ................
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00,  // ................
  0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x17, 0x00,  // ................
  0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x17, 0x00,  // ................
  0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00,  // .............. .
  0x04, 0x00, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3b, 0x00,  // ..5...........;.
  0x04, 0x00, 0x35, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x00,  // ..5...6.......;.
  0x04, 0x00, 0x35, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00,  // ..5...<.........
  0x03, 0x00, 0x48, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00,  // ..H.......+.....
  0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x2f, 0xba, 0xe8, 0x3e, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00,  // ..].../..>+.....
  0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0xd7, 0xa3, 0x20, 0x40, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00,  // ..d..... @+.....
  0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x8f, 0xc2, 0xf5, 0x3c, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00,  // ..f......<+.....
  0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x1f, 0x85, 0x1b, 0x40, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00,  // ..h......@+.....
  0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x3d, 0x0a, 0x17, 0x3f, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00,  // ..j...=..?+.....
  0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x29, 0x5c, 0x0f, 0x3e, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00,  // ..l...)..>+.....
  0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00,  // ..........+.....
  0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00,  // .........?+.....
  0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x9a, 0x99, 0x99, 0x3e, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00,  // .........>+.....
  0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x33, 0x33, 0x33, 0x3f, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00,  // ......333?+.....
  0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x00, 0x04, 0x00, 0xb7, 0x00,  // .........? .....
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0xb7, 0x00,  // ..........;.....
  0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0xc0, 0x00,  // .......... .....
  0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0xc0, 0x00,  // ..........;.....
  0x00, 0x00, 0xc1, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x06, 0x00, 0x14, 0x00,  // ..........,.....
  0x00, 0x00, 0x46, 0x01, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x66, 0x00,  // ..F...f...f...f.
  0x00, 0x00, 0x2c, 0x00, 0x06, 0x00, 0x14, 0x00, 0x00, 0x00, 0x47, 0x01, 0x00, 0x00, 0x6a, 0x00,  // ..,.......G...j.
  0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x06, 0x00, 0x14, 0x00,  // ..j...j...,.....
  0x00, 0x00, 0x48, 0x01, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x6c, 0x00,  // ..H...l...l...l.
  0x00, 0x00, 0x2c, 0x00, 0x06, 0x00, 0x14, 0x00, 0x00, 0x00, 0x49, 0x01, 0x00, 0x00, 0x81, 0x00,  // ..,.......I.....
  0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x06, 0x00, 0x14, 0x00,  // ..........,.....
  0x00, 0x00, 0x4a, 0x01, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x82, 0x00,  // ..J.............
  0x00, 0x00, 0x2c, 0x00, 0x06, 0x00, 0x14, 0x00, 0x00, 0x00, 0x4b, 0x01, 0x00, 0x00, 0x5d, 0x00,  // ..,.......K...].
  0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x03, 0x00, 0x06, 0x00,  // ..]...].........
  0x00, 0x00, 0x4e, 0x01, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00,  // ..N...6.........
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00,  // ................
  0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x36, 0x00,  // ..=.......7...6.
  0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x3c, 0x00,  // ..=.......=...<.
  0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0xb8, 0x00,  // ..=.............
  0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0x48, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x37, 0x00,  // ..V...H.......7.
  0x00, 0x00, 0x4e, 0x01, 0x00, 0x00, 0x57, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x06, 0x01,  // ..N...W.........
  0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0x48, 0x00,  // ..........V...H.
  0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x4e, 0x01, 0x00, 0x00, 0x57, 0x00,  // ......=...N...W.
  0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0e, 0x01, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0xb9, 0x00,  // ................
  0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xeb, 0x00, 0x00, 0x00, 0x0e, 0x01,  // ..Q.............
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x11, 0x01,  // ................
  0x00, 0x00, 0xeb, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x07, 0x00,  // ................
  0x00, 0x00, 0x12, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x11, 0x01,  // ..........+.....
  0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x88, 0x00, 0x05, 0x00, 0x07, 0x00,  // ................
  0x00, 0x00, 0x13, 0x01, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x12, 0x01, 0x00, 0x00, 0x81, 0x00,  // ................
  0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x14, 0x01, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x13, 0x01,  // ................
  0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x14, 0x00, 0x00, 0x00, 0xf1, 0x00, 0x00, 0x00, 0x06, 0x01,  // ..O.............
  0x00, 0x00, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00,  // ................
  0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, 0x14, 0x00, 0x00, 0x00, 0xf3, 0x00, 0x00, 0x00, 0xf1, 0x00,  // ................
  0x00, 0x00, 0x14, 0x01, 0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1e, 0x01,  // ................
  0x00, 0x00, 0xf3, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x81, 0x00, 0x05, 0x00, 0x14, 0x00,  // ......d.........
  0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x1e, 0x01, 0x00, 0x00, 0x46, 0x01, 0x00, 0x00, 0x85, 0x00,  // ..!.......F.....
  0x05, 0x00, 0x14, 0x00, 0x00, 0x00, 0x22, 0x01, 0x00, 0x00, 0xf3, 0x00, 0x00, 0x00, 0x21, 0x01,  // ......".......!.
  0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, 0x14, 0x00, 0x00, 0x00, 0x26, 0x01, 0x00, 0x00, 0xf3, 0x00,  // ..........&.....
  0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x81, 0x00, 0x05, 0x00, 0x14, 0x00, 0x00, 0x00, 0x29, 0x01,  // ..h...........).
  0x00, 0x00, 0x26, 0x01, 0x00, 0x00, 0x47, 0x01, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x14, 0x00,  // ..&...G.........
  0x00, 0x00, 0x2a, 0x01, 0x00, 0x00, 0xf3, 0x00, 0x00, 0x00, 0x29, 0x01, 0x00, 0x00, 0x81, 0x00,  // ..*.......).....
  0x05, 0x00, 0x14, 0x00, 0x00, 0x00, 0x2d, 0x01, 0x00, 0x00, 0x2a, 0x01, 0x00, 0x00, 0x48, 0x01,  // ......-...*...H.
  0x00, 0x00, 0x88, 0x00, 0x05, 0x00, 0x14, 0x00, 0x00, 0x00, 0x2e, 0x01, 0x00, 0x00, 0x22, 0x01,  // ..............".
  0x00, 0x00, 0x2d, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x14, 0x00, 0x00, 0x00, 0x31, 0x01,  // ..-...........1.
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x2e, 0x01, 0x00, 0x00, 0x49, 0x01,  // ......+.......I.
  0x00, 0x00, 0x4a, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x14, 0x00, 0x00, 0x00, 0x35, 0x01,  // ..J...........5.
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x31, 0x01, 0x00, 0x00, 0x0c, 0x00,  // ..........1.....
  0x07, 0x00, 0x14, 0x00, 0x00, 0x00, 0x37, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0x00,  // ......7.........
  0x00, 0x00, 0x35, 0x01, 0x00, 0x00, 0x4b, 0x01, 0x00, 0x00, 0x4f, 0x00, 0x09, 0x00, 0x0d, 0x00,  // ..5...K...O.....
  0x00, 0x00, 0xf7, 0x00, 0x00, 0x00, 0x06, 0x01, 0x00, 0x00, 0x37, 0x01, 0x00, 0x00, 0x04, 0x00,  // ..........7.....
  0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3e, 0x00,  // ..............>.
  0x03, 0x00, 0xc1, 0x00, 0x00, 0x00, 0xf7, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00,  // ..............8.
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00 };                                                            // ........8.......
unsigned int fs_tonemapping_bin_spirv_size = 1542;

BX_UNUSED(fs_tonemapping_bin_spirv)
BX_UNUSED(fs_tonemapping_bin_spirv_size)
static const uint8_t * fs_tonemapping_bin_esslandroid = NULL;
unsigned int fs_tonemapping_bin_esslandroid_size = 0;

BX_UNUSED(fs_tonemapping_bin_esslandroid)
BX_UNUSED(fs_tonemapping_bin_esslandroid_size)
static const uint8_t * fs_tonemapping_bin_pssl = NULL;
unsigned int fs_tonemapping_bin_pssl_size = 0;

BX_UNUSED(fs_tonemapping_bin_pssl)
BX_UNUSED(fs_tonemapping_bin_pssl_size)
static const uint8_t * fs_tonemapping_bin_esslnacl = NULL;
unsigned int fs_tonemapping_bin_esslnacl_size = 0;

BX_UNUSED(fs_tonemapping_bin_esslnacl)
BX_UNUSED(fs_tonemapping_bin_esslnacl_size)
