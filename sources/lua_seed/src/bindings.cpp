#include <sgtCommon.h>
#include <lua/ModuleProvider.h>


static const unsigned char buf_core_Object[]={
 27, 76, 74,  1,  0, 78, 64, 87, 58, 47, 67,108,111,117,100, 47, 80,114,111,106,
101, 99,116,115, 47,115,105,110,103,117,108, 97,114,105,116,121, 47,115,111,117,
114, 99,101,115, 47,108,117, 97, 95,115,101,101,100, 47,115,114, 99, 47, 46, 46,
 47,109,111,100,117,108,101,115, 47, 99,111,114,101, 47, 79, 98,106,101, 99,116,
 46,108,117, 97,127,  0,  3,  6,  2,  2,  0, 10, 58, 21,  5, 43,  3,  0,  0, 55,
  3,  0,  3, 16,  4,  0,  0, 12,  5,  2,  0, 84,  5,  1,128, 50,  5,  0,  0, 62,
  3,  3,  2, 43,  4,  1,  0, 58,  4,  1,  3, 72,  3,  2,  0,  0,192,  2,192, 12,
 95, 84, 82, 65, 67, 69, 95, 11,114, 97,119,110,101,119,  1,  1,  1,  1,  1,  1,
  1,  2,  2,  4,111,111,  0, 99,108, 97,115,115, 78, 97,109,101,  0,115,101,108,
102,  0,  0, 11,111,112,116,105,111,110,115,  0,  0, 11,105,110,115,116, 97,110,
 99,101,  0,  0, 11,111, 98,106,  0,  8,  3,  0, 77,  2,  3,  7,  0,  1,  0,  8,
 29, 28,  4, 14,  0,  1,  0, 84,  3,  5,128, 16,  4,  0,  0, 55,  3,  0,  0, 16,
  5,  2,  0, 67,  6,  3,  0, 61,  3,  2,  1, 71,  0,  1,  0, 10,116,104,114,111,
119,  1,  1,  2,  2,  2,  2,  2,  4,115,101,108,102,  0,  0,  9, 99,111,110,100,
  0,  0,  9,109,115,103,  0,  0,  9,  0,131,  1,  2,  3, 10,  0,  4,  0, 15, 35,
 34,  4, 16,  4,  0,  0, 55,  3,  0,  0, 16,  5,  1,  0, 62,  3,  3,  2, 14,  0,
  3,  0, 84,  3,  8,128, 16,  4,  0,  0, 55,  3,  1,  0, 37,  5,  2,  0, 16,  6,
  1,  0, 37,  7,  3,  0, 16,  8,  2,  0, 67,  9,  3,  0, 61,  3,  5,  1, 71,  0,
  1,  0,  7, 41, 32, 10, 40,118, 97,114, 61, 10,116,104,114,111,119, 15,105,115,
 70,117,110, 99,116,105,111,110,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,
  2,  2,  4,115,101,108,102,  0,  0, 16,118, 97,114,  0,  0, 16,109,115,103,  0,
  0, 16,  0,129,  1,  2,  3, 10,  0,  4,  0, 15, 35, 40,  4, 16,  4,  0,  0, 55,
  3,  0,  0, 16,  5,  1,  0, 62,  3,  3,  2, 14,  0,  3,  0, 84,  3,  8,128, 16,
  4,  0,  0, 55,  3,  1,  0, 37,  5,  2,  0, 16,  6,  1,  0, 37,  7,  3,  0, 16,
  8,  2,  0, 67,  9,  3,  0, 61,  3,  5,  1, 71,  0,  1,  0,  7, 41, 32, 10, 40,
118, 97,114, 61, 10,116,104,114,111,119, 13,105,115, 83,116,114,105,110,103,  1,
  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,  2,  2,  4,115,101,108,102,  0,  0,
 16,118, 97,114,  0,  0, 16,109,115,103,  0,  0, 16,  0,128,  1,  2,  3, 10,  0,
  4,  0, 15, 35, 46,  4, 16,  4,  0,  0, 55,  3,  0,  0, 16,  5,  1,  0, 62,  3,
  3,  2, 14,  0,  3,  0, 84,  3,  8,128, 16,  4,  0,  0, 55,  3,  1,  0, 37,  5,
  2,  0, 16,  6,  1,  0, 37,  7,  3,  0, 16,  8,  2,  0, 67,  9,  3,  0, 61,  3,
  5,  1, 71,  0,  1,  0,  7, 41, 32, 10, 40,118, 97,114, 61, 10,116,104,114,111,
119, 12,105,115, 84, 97, 98,108,101,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,
  2,  2,  2,  4,115,101,108,102,  0,  0, 16,118, 97,114,  0,  0, 16,109,115,103,
  0,  0, 16,  0,137,  1,  2,  3, 10,  0,  4,  0, 15, 35, 52,  4, 16,  4,  0,  0,
 55,  3,  0,  0, 16,  5,  1,  0, 62,  3,  3,  2, 14,  0,  3,  0, 84,  3,  8,128,
 16,  4,  0,  0, 55,  3,  1,  0, 37,  5,  2,  0, 16,  6,  1,  0, 37,  7,  3,  0,
 16,  8,  2,  0, 67,  9,  3,  0, 61,  3,  5,  1, 71,  0,  1,  0,  7, 41, 32, 10,
 40,118, 97,114, 61, 10,116,104,114,111,119, 21,105,115, 78,111,110, 69,109,112,
116,121, 83,116,114,105,110,103,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,
  2,  2,  4,115,101,108,102,  0,  0, 16,118, 97,114,  0,  0, 16,109,115,103,  0,
  0, 16,  0,134,  1,  2,  3, 10,  0,  4,  0, 15, 35, 58,  4, 16,  4,  0,  0, 55,
  3,  0,  0, 16,  5,  1,  0, 62,  3,  3,  2, 14,  0,  3,  0, 84,  3,  8,128, 16,
  4,  0,  0, 55,  3,  1,  0, 37,  5,  2,  0, 16,  6,  1,  0, 37,  7,  3,  0, 16,
  8,  2,  0, 67,  9,  3,  0, 61,  3,  5,  1, 71,  0,  1,  0,  7, 41, 32, 10, 40,
118, 97,114, 61, 10,116,104,114,111,119, 18,105,115, 69,109,112,116,121, 83,116,
114,105,110,103,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,  2,  2,  4,115,
101,108,102,  0,  0, 16,118, 97,114,  0,  0, 16,109,115,103,  0,  0, 16,  0,129,
  1,  2,  3, 10,  0,  4,  0, 15, 35, 64,  4, 16,  4,  0,  0, 55,  3,  0,  0, 16,
  5,  1,  0, 62,  3,  3,  2, 14,  0,  3,  0, 84,  3,  8,128, 16,  4,  0,  0, 55,
  3,  1,  0, 37,  5,  2,  0, 16,  6,  1,  0, 37,  7,  3,  0, 16,  8,  2,  0, 67,
  9,  3,  0, 61,  3,  5,  1, 71,  0,  1,  0,  7, 41, 32, 10, 40,118, 97,114, 61,
 10,116,104,114,111,119, 13,105,115, 78,117,109, 98,101,114,  1,  1,  1,  1,  1,
  1,  2,  2,  2,  2,  2,  2,  2,  2,  4,115,101,108,102,  0,  0, 16,118, 97,114,
  0,  0, 16,109,115,103,  0,  0, 16,  0,130,  1,  2,  3, 10,  0,  4,  0, 15, 35,
 70,  4, 16,  4,  0,  0, 55,  3,  0,  0, 16,  5,  1,  0, 62,  3,  3,  2, 14,  0,
  3,  0, 84,  3,  8,128, 16,  4,  0,  0, 55,  3,  1,  0, 37,  5,  2,  0, 16,  6,
  1,  0, 37,  7,  3,  0, 16,  8,  2,  0, 67,  9,  3,  0, 61,  3,  5,  1, 71,  0,
  1,  0,  7, 41, 32, 10, 40,118, 97,114, 61, 10,116,104,114,111,119, 14,105,115,
 73,110,116,101,103,101,114,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,  2,
  2,  4,115,101,108,102,  0,  0, 16,118, 97,114,  0,  0, 16,109,115,103,  0,  0,
 16,  0,126,  2,  3, 10,  0,  4,  0, 15, 35, 76,  4, 16,  4,  0,  0, 55,  3,  0,
  0, 16,  5,  1,  0, 62,  3,  3,  2, 14,  0,  3,  0, 84,  3,  8,128, 16,  4,  0,
  0, 55,  3,  1,  0, 37,  5,  2,  0, 16,  6,  1,  0, 37,  7,  3,  0, 16,  8,  2,
  0, 67,  9,  3,  0, 61,  3,  5,  1, 71,  0,  1,  0,  7, 41, 32, 10, 40,118, 97,
114, 61, 10,116,104,114,111,119, 10,105,115, 78,105,108,  1,  1,  1,  1,  1,  1,
  2,  2,  2,  2,  2,  2,  2,  2,  4,115,101,108,102,  0,  0, 16,118, 97,114,  0,
  0, 16,109,115,103,  0,  0, 16,  0, 67,  0,  2,  4,  1,  1,  0,  6, 23, 82,  2,
 43,  2,  0,  0, 55,  2,  0,  2, 12,  3,  1,  0, 84,  3,  1,128, 16,  3,  0,  0,
 64,  2,  2,  0,  0,192, 12, 99,108, 97,115,115,111,102,  1,  1,  1,  1,  1,  1,
111,111,  0,115,101,108,102,  0,  0,  7,111, 98,106,  0,  0,  7,  0, 86,  0,  2,
  6,  1,  2,  0,  7, 24, 86,  2, 43,  2,  0,  0, 55,  2,  0,  2, 16,  4,  0,  0,
 55,  3,  1,  0, 16,  5,  1,  0, 62,  3,  3,  0, 63,  2,  0,  0,  0,192, 15,103,
101,116, 67,108, 97,115,115, 79,102, 15, 97,108,108,109,101,109, 98,101,114,115,
  1,  1,  1,  1,  1,  1,  1,111,111,  0,115,101,108,102,  0,  0,  8,111, 98,106,
  0,  0,  8,  0,158,  1,  0,  3,  7,  1,  2,  0, 18, 55, 90,  3, 43,  3,  0,  0,
 55,  3,  0,  3, 12,  4,  2,  0, 84,  4,  1,128, 16,  4,  0,  0, 62,  3,  2,  2,
  4,  3,  1,  0, 84,  4,  8,128, 43,  4,  0,  0, 55,  4,  1,  4, 16,  5,  3,  0,
 16,  6,  1,  0, 62,  4,  3,  2, 84,  5,  3,128, 41,  4,  1,  0, 84,  5,  1,128,
 41,  4,  2,  0, 72,  4,  2,  0,  0,192, 15,115,117, 98, 99,108, 97,115,115,111,
102, 12, 99,108, 97,115,115,111,102,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,
  2,  2,  2,  2,  2,  2,  2,111,111,  0,115,101,108,102,  0,  0, 19, 99,108, 97,
115,115,  0,  0, 19,111, 98,106,  0,  0, 19,111, 98,106, 95, 99,108, 97,115,115,
  0,  7, 12,  0,144,  2,  0,  4, 13,  1,  7,  0, 28, 73, 95,  9, 14,  0,  1,  0,
 84,  4,  1,128, 71,  0,  1,  0, 43,  4,  0,  0, 55,  4,  0,  4, 16,  5,  1,  0,
 62,  4,  2,  2,  4,  4,  2,  0, 84,  5, 18,128, 14,  0,  3,  0, 84,  5,  7,128,
 43,  5,  0,  0, 55,  5,  1,  5, 16,  6,  4,  0, 16,  7,  2,  0, 62,  5,  3,  2,
 14,  0,  5,  0, 84,  5,  9,128, 16,  6,  0,  0, 55,  5,  2,  0, 37,  7,  3,  0,
 55,  8,  4,  2, 37,  9,  5,  0, 55, 10,  4,  4, 37, 11,  6,  0, 16, 12,  1,  0,
 62,  5,  8,  1, 71,  0,  1,  0,  0,192, 17, 32,102,111,114, 32,111, 98,106,101,
 99,116, 32, 14, 32, 97,110,100, 32,103,111,116, 32, 15, 67, 76, 65, 83, 83, 95,
 78, 65, 77, 69, 20, 69,120,112,101, 99,116,101,100, 32, 99,108, 97,115,115, 32,
 10,116,104,114,111,119, 15,115,117, 98, 99,108, 97,115,115,111,102, 12, 99,108,
 97,115,115,111,102,  1,  1,  2,  5,  5,  5,  5,  6,  6,  6,  6,  6,  6,  6,  6,
  6,  6,  6,  7,  7,  7,  7,  7,  7,  7,  7,  7,  9,111,111,  0,115,101,108,102,
  0,  0, 29,111, 98,106,  0,  0, 29, 98, 97,115,101,  0,  0, 29,115,116,114,105,
 99,116,  0,  0, 29,111, 98,106, 95, 99,108, 97,115,115,  0,  8, 21,  0,132,  1,
  2,  2,  6,  0,  3,  0, 12, 26,106,  4, 16,  3,  0,  0, 55,  2,  0,  0, 16,  4,
  1,  0, 67,  5,  2,  0, 61,  2,  2,  1, 16,  3,  0,  0, 55,  2,  1,  0, 62,  2,
  2,  1, 52,  2,  0,  0, 37,  3,  2,  0, 62,  2,  2,  1, 71,  0,  1,  0, 36, 83,
116,111,112,112,105,110,103, 32, 98,101, 99, 97,117,115,101, 32,101,114,114,111,
114, 32,111, 99, 99,117,114,101,100, 46, 14, 98, 97, 99,107,116,114, 97, 99,101,
 10,101,114,114,111,114,  1,  1,  1,  1,  1,  2,  2,  2,  3,  3,  3,  4,115,101,
108,102,  0,  0, 13,109,115,103,  0,  0, 13,  0,133,  1,  0,  2,  5,  0,  3,  0,
 10, 24,112,  3, 16,  3,  0,  0, 55,  2,  0,  0, 12,  4,  1,  0, 84,  4,  1,128,
 37,  4,  1,  0, 62,  2,  3,  1, 16,  3,  0,  0, 55,  2,  2,  0, 62,  2,  2,  1,
 71,  0,  1,  0, 14, 98, 97, 99,107,116,114, 97, 99,101, 48, 84,104,101, 32,102,
117,110, 99,116,105,111,110, 32, 99, 97,108,108,101,100, 32,105,115, 32,110,111,
116, 32,105,109,112,108,101,109,101,110,116,101,100, 32,121,101,116, 46,  9,119,
 97,114,110,  1,  1,  1,  1,  1,  1,  2,  2,  2,  3,115,101,108,102,  0,  0, 11,
109,115,103,  0,  0, 11,  0,165,  1,  0,  1,  4,  0,  4,  0, 11, 19,117,  4, 16,
  2,  0,  0, 55,  1,  0,  0, 37,  3,  1,  0, 62,  1,  3,  1, 16,  2,  0,  0, 55,
  1,  2,  0, 62,  1,  2,  1, 52,  1,  0,  0, 37,  2,  3,  0, 62,  1,  2,  1, 71,
  0,  1,  0, 36, 83,116,111,112,112,105,110,103, 32, 98,101, 99, 97,117,115,101,
 32,101,114,114,111,114, 32,111, 99, 99,117,114,101,100, 46, 14, 98, 97, 99,107,
116,114, 97, 99,101, 48, 84,104,101, 32,102,117,110, 99,116,105,111,110, 32, 99,
 97,108,108,101,100, 32,105,115, 32,110,111,116, 32,105,109,112,108,101,109,101,
110,116,101,100, 32,121,101,116, 46, 10,101,114,114,111,114,  1,  1,  1,  1,  2,
  2,  2,  3,  3,  3,  4,115,101,108,102,  0,  0, 12,  0,102,  0,  2,  6,  0,  3,
  0, 10, 24,123,  3, 16,  3,  0,  0, 55,  2,  0,  0, 37,  4,  1,  0, 16,  5,  1,
  0, 62,  2,  4,  1, 16,  3,  0,  0, 55,  2,  2,  0, 37,  4,  0,  0, 62,  2,  3,
  1, 71,  0,  1,  0, 14, 98, 97, 99,107,116,114, 97, 99,101, 17, 68,101,112,114,
101, 99, 97,116,101,100, 58, 32,  9,119, 97,114,110,  1,  1,  1,  1,  1,  2,  2,
  2,  2,  3,115,101,108,102,  0,  0, 11,109,115,103,  0,  0, 11,  0,115,  0,  2,
  6,  1,  3,  0, 12, 32,128,  1,  2, 43,  2,  0,  0, 12,  3,  1,  0, 84,  3,  1,
128, 37,  3,  0,  0, 54,  2,  3,  2, 43,  3,  0,  0, 16,  4,  0,  0, 52,  5,  1,
  0, 55,  5,  2,  5, 62,  5,  1,  0, 61,  2,  2,  1, 71,  0,  1,  0,  1,192, 14,
116,114, 97, 99,101, 98, 97, 99,107, 10,100,101, 98,117,103, 10,101,114,114,111,
114,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  2,108,111,103,  0,115,101,108,
102,  0,  0, 13,108,101,118,101,108,  0,  0, 13,  0, 77,  2,  2,  7,  2,  0,  0,
  8, 30,133,  1,  1, 43,  2,  0,  0, 43,  3,  1,  0, 54,  2,  3,  2, 43,  3,  0,
  0, 16,  4,  0,  0, 16,  5,  1,  0, 67,  6,  2,  0, 63,  2,  3,  0,  1,192,  7,
192,  1,  1,  1,  1,  1,  1,  1,  1,108,111,103,  0,107,  0,115,101,108,102,  0,
  0,  9,116,114, 97, 99,101,  0,  0,  9,  0, 90,  2,  2,  7,  2,  1,  0, 10, 32,
135,  1,  1, 43,  2,  0,  0, 43,  3,  1,  0, 37,  4,  0,  0, 36,  3,  4,  3, 54,
  2,  3,  2, 43,  3,  0,  0, 16,  4,  0,  0, 16,  5,  1,  0, 67,  6,  2,  0, 63,
  2,  3,  0,  1,192,  7,192,  7, 95,118,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
108,111,103,  0,107,  0,115,101,108,102,  0,  0, 11,116,114, 97, 99,101,  0,  0,
 11,  0, 97,  0,  1,  3,  0,  3,  0, 10, 18,139,  1,  6, 55,  1,  0,  0, 14,  0,
  1,  0, 84,  1,  5,128, 52,  1,  1,  0, 37,  2,  2,  0, 62,  1,  2,  2, 62,  1,
  1,  2, 58,  1,  0,  0, 55,  1,  0,  0, 72,  1,  2,  0, 12,115,116,100, 46, 77,
 97,112, 12,114,101,113,117,105,114,101, 16, 95,112,114,111,112,101,114,116,105,
101,115,  1,  1,  1,  2,  2,  2,  2,  2,  5,  5,115,101,108,102,  0,  0, 11,  0,
 80,  0,  2,  5,  0,  2,  0,  7, 23,147,  1,  2, 16,  3,  0,  0, 55,  2,  0,  0,
 62,  2,  2,  2, 16,  3,  2,  0, 55,  2,  1,  2, 16,  4,  1,  0, 64,  2,  3,  0,
  8,103,101,116, 18,103,101,116, 80,114,111,112,101,114,116,105,101,115,  1,  1,
  1,  1,  1,  1,  1,115,101,108,102,  0,  0,  8,112,110, 97,109,101,  0,  0,  8,
  0, 80,  0,  2,  5,  0,  2,  0,  7, 23,151,  1,  2, 16,  3,  0,  0, 55,  2,  0,
  0, 62,  2,  2,  2, 16,  3,  2,  0, 55,  2,  1,  2, 16,  4,  1,  0, 64,  2,  3,
  0,  8,104, 97,115, 18,103,101,116, 80,114,111,112,101,114,116,105,101,115,  1,
  1,  1,  1,  1,  1,  1,115,101,108,102,  0,  0,  8,112,110, 97,109,101,  0,  0,
  8,  0, 91,  0,  3,  7,  0,  2,  0,  8, 30,155,  1,  2, 16,  4,  0,  0, 55,  3,
  0,  0, 62,  3,  2,  2, 16,  4,  3,  0, 55,  3,  1,  3, 16,  5,  1,  0, 16,  6,
  2,  0, 64,  3,  4,  0,  8,115,101,116, 18,103,101,116, 80,114,111,112,101,114,
116,105,101,115,  1,  1,  1,  1,  1,  1,  1,  1,115,101,108,102,  0,  0,  9,112,
110, 97,109,101,  0,  0,  9,118, 97,108,  0,  0,  9,  0,104,  0,  1,  3,  0,  3,
  0,  9, 17,159,  1,  6, 55,  1,  0,  0, 14,  0,  1,  0, 84,  1,  4,128, 52,  1,
  1,  0, 37,  2,  2,  0, 62,  1,  2,  2, 58,  1,  0,  0, 55,  1,  0,  0, 72,  1,
  2,  0, 22, 98, 97,115,101, 46, 69,118,101,110,116, 77, 97,110, 97,103,101,114,
 12,114,101,113,117,105,114,101, 18, 95,101,118,101,110,116, 77, 97,110, 97,103,
101,114,  1,  1,  1,  2,  2,  2,  2,  5,  5,115,101,108,102,  0,  0, 10,  0,108,
  0,  1,  3,  0,  3,  0,  9, 17,167,  1,  6, 55,  1,  0,  0, 14,  0,  1,  0, 84,
  1,  4,128, 52,  1,  1,  0, 37,  2,  2,  0, 62,  1,  2,  2, 58,  1,  0,  0, 55,
  1,  0,  0, 72,  1,  2,  0, 25,103,117,105, 46,119,120, 46, 87,105,110,100,111,
119, 77, 97,110, 97,103,101,114, 12,114,101,113,117,105,114,101, 19, 95,119,105,
110,100,111,119, 77, 97,110, 97,103,101,114,  1,  1,  1,  2,  2,  2,  2,  5,  5,
115,101,108,102,  0,  0, 10,  0,255,  6,  3,  0, 11,  0, 63,  0, 81,131,  1,  0,
176,  1, 52,  0,  0,  0, 37,  1,  1,  0, 62,  0,  2,  2, 52,  1,  0,  0, 37,  2,
  2,  0, 62,  1,  2,  2, 37,  2,  3,  0, 55,  3,  4,  1, 37,  4,  5,  0, 16,  5,
  2,  0, 62,  3,  3,  1, 55,  3,  6,  0, 50,  4,  0,  0, 62,  3,  2,  2, 58,  2,
  7,  3, 49,  4,  9,  0, 58,  4,  8,  3, 49,  4, 11,  0, 58,  4, 10,  3, 49,  4,
 13,  0, 58,  4, 12,  3, 49,  4, 15,  0, 58,  4, 14,  3, 49,  4, 17,  0, 58,  4,
 16,  3, 49,  4, 19,  0, 58,  4, 18,  3, 49,  4, 21,  0, 58,  4, 20,  3, 49,  4,
 23,  0, 58,  4, 22,  3, 49,  4, 25,  0, 58,  4, 24,  3, 49,  4, 27,  0, 58,  4,
 26,  3, 49,  4, 29,  0, 58,  4, 28,  3, 49,  4, 31,  0, 58,  4, 30,  3, 49,  4,
 33,  0, 58,  4, 32,  3, 49,  4, 35,  0, 58,  4, 34,  3, 49,  4, 37,  0, 58,  4,
 36,  3, 49,  4, 39,  0, 58,  4, 38,  3, 49,  4, 41,  0, 58,  4, 40,  3, 49,  4,
 43,  0, 58,  4, 42,  3, 49,  4, 45,  0, 58,  4, 44,  3, 52,  4, 46,  0, 55,  5,
 47,  1, 62,  4,  2,  4, 68,  7,  8,128, 49,  9, 48,  0, 57,  9,  7,  3, 16,  9,
  7,  0, 37, 10, 49,  0, 36,  9, 10,  9, 49, 10, 50,  0, 57, 10,  9,  3, 48,  7,
  0,128, 66,  7,  3,  3, 78,  7,246,127, 49,  4, 52,  0, 58,  4, 51,  3, 49,  4,
 54,  0, 58,  4, 53,  3, 49,  4, 56,  0, 58,  4, 55,  3, 49,  4, 58,  0, 58,  4,
 57,  3, 49,  4, 60,  0, 58,  4, 59,  3, 49,  4, 62,  0, 58,  4, 61,  3, 48,  0,
  0,128, 72,  3,  2,  0,  0, 21,103,101,116, 87,105,110,100,111,119, 77, 97,110,
 97,103,101,114,  0, 20,103,101,116, 69,118,101,110,116, 77, 97,110, 97,103,101,
114,  0, 16,115,101,116, 80,114,111,112,101,114,116,121,  0, 16,104, 97,115, 80,
114,111,112,101,114,116,121,  0, 16,103,101,116, 80,114,111,112,101,114,116,121,
  0, 18,103,101,116, 80,114,111,112,101,114,116,105,101,115,  0,  7, 95,118,  0,
 11,108,101,118,101,108,115, 10,112, 97,105,114,115,  0, 14, 98, 97, 99,107,116,
114, 97, 99,101,  0, 15,100,101,112,114,101, 99, 97,116,101,100,  0, 12,110,111,
 95,105,109,112,108,  0, 17,115,111,102,116, 95,110,111, 95,105,109,112,108,  0,
 10,116,104,114,111,119,  0, 14, 99,104,101, 99,107, 84,121,112,101,  0, 17,105,
115, 73,110,115,116, 97,110, 99,101, 79,102,  0, 23,103,101,116, 65,108,108, 67,
108, 97,115,115, 77,101,109, 98,101,114,115,  0, 15,103,101,116, 67,108, 97,115,
115, 79,102,  0, 13, 99,104,101, 99,107, 78,105,108,  0, 17, 99,104,101, 99,107,
 73,110,116,101,103,101,114,  0, 16, 99,104,101, 99,107, 78,117,109, 98,101,114,
  0, 21, 99,104,101, 99,107, 69,109,112,116,121, 83,116,114,105,110,103,  0, 24,
 99,104,101, 99,107, 78,111,110, 69,109,112,116,121, 83,116,114,105,110,103,  0,
 15, 99,104,101, 99,107, 84, 97, 98,108,101,  0, 16, 99,104,101, 99,107, 83,116,
114,105,110,103,  0, 18, 99,104,101, 99,107, 70,117,110, 99,116,105,111,110,  0,
 10, 99,104,101, 99,107,  0, 11, 95, 95,105,110,105,116, 16, 95, 67, 76, 65, 83,
 83, 78, 65, 77, 69, 95, 10, 99,108, 97,115,115, 22, 71,101,110,101,114, 97,116,
105,110,103, 32, 99,108, 97,115,115, 32, 12,100,101, 98,117,103, 95,118, 16, 98,
 97,115,101, 46, 79, 98,106,101, 99,116,  8,108,111,103, 16,108,111,111,112, 46,
 99, 97, 99,104,101,100, 12,114,101,113,117,105,114,101,  2,  2,  2,  4,  4,  4,
 12, 13, 13, 13, 13, 16, 16, 16, 19, 26, 21, 32, 28, 38, 34, 44, 40, 50, 46, 56,
 52, 62, 58, 68, 64, 74, 70, 80, 76, 84, 82, 88, 86, 93, 90,104, 95,110,106,115,
112,121,117,126,123,130,128,132,132,132,132,134,134,135,135,135,136,136,136,132,
132,145,139,149,147,153,151,157,155,165,159,173,167,175,175,111,111,  0,  4, 78,
108,111,103,  0,  3, 75, 99,108, 97,115,115, 78, 97,109,101,  0,  1, 74, 79, 98,
106,101, 99,116,  0,  7, 67,  4, 42, 11,  5,  0, 11,  6,  0, 11,107,  0,  1,  7,
118,  0,  0,  7,  0,  0,
};

static const unsigned char buf_log[]={
 27, 76, 74,  1,  0, 70, 64, 87, 58, 47, 67,108,111,117,100, 47, 80,114,111,106,
101, 99,116,115, 47,115,105,110,103,117,108, 97,114,105,116,121, 47,115,111,117,
114, 99,101,115, 47,108,117, 97, 95,115,101,101,100, 47,115,114, 99, 47, 46, 46,
 47,109,111,100,117,108,101,115, 47,108,111,103, 46,108,117, 97, 61,  2,  0,  2,
  0,  2,  0,  4, 14,  0,  3, 52,  0,  0,  0, 37,  1,  1,  0, 62,  0,  2,  2, 72,
  0,  2,  0, 17,117,116,105,108,115, 46,115,103,116,108,111,103, 12,114,101,113,
117,105,114,101,  1,  1,  1,  2,108,111,103,103,101,114,  0,  4,  1,  0,  0,
};

class Loader_seed {
public:
	Loader_seed() {
		logDEBUG3("Now loading all modules for package 'seed'");

		sgtModuleProvider::registerModule("core.Object",sgt::String((const char*)buf_core_Object,sizeof(buf_core_Object)));
		sgtModuleProvider::registerModule("log",sgt::String((const char*)buf_log,sizeof(buf_log)));
	}
	
	~Loader_seed() {
		logDEBUG3("Unloading module loader for package 'seed'");
	}
};
	
static Loader_seed loader_object;

	