#ifndef  _MODBUS_LIB_H_
#define  _MODBUS_LIB_H_

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;

unsigned int gen_crc_16(unsigned char *ptr,  unsigned char len);
int create_03_pkg(u8* buff,u8 addr,u16 start,u16 lens,u8* p_pkg_len);
int decode_03_response(u8* buff,u8 addr, u8 n,u16* p_w);
int read_03_resp_len(int n);

#endif