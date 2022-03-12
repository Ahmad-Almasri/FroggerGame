/* GIMP RGBA C-Source image dump (shortLog.c) */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  unsigned char	 pixel_data[83 * 36 * 2 + 1];
} sl = {
  83, 36, 2,
  "\000\000\000\000\000\000\000\000\000\000@\020\200\040\300\060\300\060\300\060\300\060\300\060\300\060"
  "\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300"
  "\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060"
  "\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300"
  "\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060"
  "\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300"
  "\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060"
  "\200\040@\020\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\200\040\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\300\060\000\000\000\000\000\000\000"
  "\000\000\000\040I\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a@Q\000\000\000\000\000\000\240(\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\300\060\000\000"
  "\000\000\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\040\010@\020\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200\040\240(\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\300\060\300\060\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\300\060\300\060\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\300\060\300"
  "\060\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\300\060\300\060\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\300\060\300\060\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\300\060\300\060\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\300i\001r\001r\001r\001r\001r\001r\001r"
  "\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r"
  "\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r"
  "\001r\001r\300i\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\300\060"
  "\300\060\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\001r\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\001r\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\300\060\300\060\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\001"
  "r\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\001r\200a\200a\200a\200a\200a\200a\200a\200a\200a"
  "\200a\200a\300\060\300\060\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\001r\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\001r\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\300\060\300\060\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\001r\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\001r\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\300\060\300\060\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\001r\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\001r\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\300\060\300\060\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\001r\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\001r\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\300\060\300\060\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\001r\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\001r\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\300\060\300\060\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\001r\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\001r\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\300\060\300\060\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\001r\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\001r\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\300\060\300\060\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\001r\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202"
  "\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\202\001r\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\300\060\300\060\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\300i\001r\001r\001r\001r\001r\001r\001r"
  "\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r"
  "\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r\001r"
  "\001r\001r\300i\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\300\060"
  "\300\060\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a"
  "\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\300\060\300\060\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\300\060\300\060\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\300\060\300\060\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\300\060\300\060\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\300"
  "\060\300\060\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\300\060`\030\200a\200a\200a\200a"
  "\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200\040\000\000\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a"
  "\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a@\020\000\000\340\070\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\040I\000\000\000\000\000\000`Y\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\040\010\000\000\000\000\000\000\000\000"
  "\000A\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200a\200"
  "a\200a\040I\040\010\000\000\000\000\000\000\000\000\000\000\000\000@\020\240(\300\060\300\060\300\060\300"
  "\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060"
  "\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300"
  "\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060"
  "\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300"
  "\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060"
  "\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300\060\300"
  "\060\300\060\300\060\300\060\300\060\240(@\020\000\000\000\000\000\000\000\000",
};

