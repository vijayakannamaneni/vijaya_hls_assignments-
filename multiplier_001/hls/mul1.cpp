
#include "ap_int.h"

void multiplier(ap_uint<8> a, ap_uint<8> b, ap_uint<16> &c) {
  c = a * b;
}
