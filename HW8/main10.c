

#include <stdio.h>


int get_digit(int n){
    
}


int main(){
    int n = 1234;
    int sum = 0;
    int dn,tn,hn,thn,k;
    dn =n%10*1000;
    tn =n/10%10*100;
    hn =n/100%10*10;
    thn =n/1000;
    sum =dn+tn+hn+thn;
    printf("sum = %d", sum);

    return 0;
}
