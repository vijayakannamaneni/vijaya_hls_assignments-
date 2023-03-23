#include "hls_stream.h"
#include "ap_int.h"
typedef hls::stream<ap_unit<8>> input_stream;
typedef hls::stream<ap_unit<3>> control_stream;
typedef hls::stream<ap_unit<8>> output_stream;

void alu(input_stream &in1,input_stream &in2,control_stream &ctrl,output_stream &out)
{
	ap_unit<8> a,b,result;
	ap_unit<8> op_ctrl;
        op_ctrl=ctrl.read();
	a=in1.read();
	b=in2.read();
        #pragma HLS INTERFACE axis port=in1
	#pragma HLS INTERFACE axis port=in2
	#pragma HLS INTERFACE axis port =ctrl
	#pragma HLS INTERFACE axis port=out 
	#pragma HLS PIPELINE 
	switch(op_ctrl){
		case 0://addition
			result=a+b;
			break;
		case 1://subtraction 
			result=a-b;
			break;
		case 2: //multiplication 
			result=a*b;
			break;
		case 3 ://division 
			result=a/b;
		 	break;
		case 4: //AND 
			result=a & b;
			break;
		case 5://OR
			result =a |b;
			break;
		case 6: //XOR 
			result =a^b;
			break;
		default:
			result=0;
			break ;
		}
       out.write(result);
    }

		
