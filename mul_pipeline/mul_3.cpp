
#include "ap_int.h"
void multiplier2(ap_uint<32> a,ap_uint<32> b,ap_uint<32> &c)

{
    #pragma HLS PIPELINE II=4
    c=a*b;

}


