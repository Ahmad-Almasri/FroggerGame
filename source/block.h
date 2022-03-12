/* GIMP RGBA C-Source image dump (block.c) */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  unsigned char	 pixel_data[47 * 47 * 2 + 1];
} BL = {
  47, 47, 2,
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\303\001\303\001\303\001\303\001\303\001\303\001\303\001\303"
  "\001\303\001\303\001\303\001\303\001\303\001\303\001\303\001\303\001\303\001\303\001\303\001\303"
  "\001\303\001\303\001\303\001\303\001\303\001\303\001\202\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\305\002\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\204\002\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005I\005\011\005\011\005\011\005\011\005\011"
  "\005\011\005\011\005\011\005\011\005\011\005\011\005\011\005\011\005\011\005\011\005\011\005\011\005\011\005\011\005"
  "\212\005\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004\303\001B\001B\001B\001B"
  "\001B\001B\001B\001B\001B\001B\001B\001B\001B\001B\001B\001B\001B\001\303\001h\004\212\005\212\005\305\002\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\204\002\212\005\212\005\250\004B\001h\004G\004G\004G\004G\004G\004G\004G\004G\004G\004G\004G\004G\004G\004"
  "G\004G\004\210\004B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310"
  "\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212"
  "\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204"
  "\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005"
  "\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005"
  "B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310"
  "\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212"
  "\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204"
  "\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005"
  "\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005"
  "B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310"
  "\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212"
  "\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204"
  "\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005I\005G\004\011\005\212\005\011\005B\001h\004\212\005\212\005"
  "\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005)\005\007\004\007\004\005\003`\000\244\002\212\005\011\005B\001h\004\212\005\212\005"
  "\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\351\004'\004'\004F\003\341\000$\002\212\005\011\005B\001h\004\212\005\212\005"
  "\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005G\004\011\005\212\005\011\005B\001h\004\212"
  "\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005"
  "\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005"
  "\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250"
  "\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212"
  "\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005"
  "\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004"
  "\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250\004B\001\310\004\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212\005\212\005\250"
  "\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\204\002\212"
  "\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\305\002\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\204\002\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005"
  "\305\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\341\000\341"
  "\000\341\000\341\000\341\000\341\000%\003\212\005\212\005\250\004B\001\310\004\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\011\005B\001h\004\212\005\212\005F\003\341\000\341\000\341\000\341\000\341\000\341\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\343\001\350\004\310\004\310\004\310\004\310\004\310\004\212\005"
  "\212\005\250\004B\001\310\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005B\001h\004\212\005\212\005\011\005\310\004"
  "\310\004\310\004\310\004\350\004\343\001\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\343\001j\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\250\004B\001\310\004\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\011\005"
  "B\001h\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\003\002\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\343\001j\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\310"
  "\004B\001\351\004\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\212\005\212\005)\005B\001\250\004\212\005\212\005\212\005\212\005\212\005\212"
  "\005\212\005\212\005\003\002\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\202\001\003\002\003\002\003\002\003\002"
  "\003\002\003\002\003\002\003\002\003\002B\001\303\001\003\002\003\002\003\002\003\002\003\002\003\002\003\002\003\002\003\002\003\002\003\002"
  "\003\002\003\002\003\002\003\002\003\002B\001\303\001\003\002\003\002\003\002\003\002\003\002\003\002\003\002\003\002\303\001\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000",
};

