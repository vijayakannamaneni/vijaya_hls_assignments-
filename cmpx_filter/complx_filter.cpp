#include <complex>
#define N 4

typedef std::complex<double >cmpx;

void fir_filter( cmpx x[N], cmpx h[N], cmpx y[N])
{
       cmpx acc;
    int size = N+N-1;
    for(int i=0;i<size;i++)
    {
    	acc=0;
        for(int j=0;j<N;j++)
        {

        	if(i-j>=0 && i-j< N){
            acc+=x[j]*h[i-j];
        	}
        }
        y[i]=acc;
}
}




