

#include <stdio.h>

void get_binary(int n){
    int x[8] ,xc[8];
    for ( int v=1; v<=7; v++){
        x[0] = n%2;
		xc[0] = n/2;
		x[v] = xc[v-1]%2;
		xc[v]= xc[v-1]/2;
    }
    
    for ( int v=7; v>=0; --v){
        printf("%d", x[v]);
    }
}


int main()
{
    int n = 6;
    get_binary(n);

    return 0;
}
