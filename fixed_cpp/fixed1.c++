
#include <ap_fixed.h>
//typedef ap_fixed<16,8> fixed_type;
void operation(ap_fixed<11,6>a,ap_ufixed<12,11>b,char op,ap_fixed<16,11> &result )

{
       switch(op){
        case '+' ://addition 
                  result = a+b;
                  break ;
        case '-' ://subtraction 
                  result = a-b ;
                  break ;
        default :
                  result=0;
                  break ;
       }
}



