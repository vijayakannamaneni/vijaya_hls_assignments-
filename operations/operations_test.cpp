#include "hls_stream.h"
#include "ap_int.h"
hls::stream<ap_unit<8>> input_stream;
hls::stream<ap_unit<3>> control_stream;
hls::stream<ap_unit<8>> output_stream;
void alu(input_stream &in1,input_stream &in2,control_stream &ctrl,output_stream &out);
int main()
{
	input_stream in1_add,in2_add;
	control_stream ctrl_add;
	output_stream out_add;
	in1_add.write(0x02);
	in2_add.write(0x03);
	ctrl_add.write(0);
	alu(in1_add,in2_add,ctrl_add,out_add);
	ap_unit<8> res=out.read();
	std::cout <<"Result:"<<res<<std::endl;
 	return 0;
}
