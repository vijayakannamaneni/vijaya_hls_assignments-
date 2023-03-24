
#include <ap_fixed.h>
//typedef ap_fixed<16,8> fixed_type;

void operation(ap_fixed<11,6>a,ap_ufixed<12,11>b,char op,ap_fixed<16,11> &result );
int main()
{
       ap_fixed<11,6> a =22.96875;
      ap_ufixed<12,11>  b =512.5;
        char op='+';
     ap_fixed<16,11>   result;
        operation(a,b,op,result);
        std::cout<<"result : " << result << std::endl;
        return 0;
}




