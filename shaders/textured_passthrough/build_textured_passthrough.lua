local cs = loadfile("compile_shaders.lua") or loadfile("../compile_shaders.lua");
cs("src/textured_passthrough", arg[1], arg[2], arg[3]);
cs("src/textured_passthrough_monochromatic", "-vdef", "textured_passthrough", arg[1], arg[2], arg[3]);

