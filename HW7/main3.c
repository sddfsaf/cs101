

#include <stdio.h>

int main()
{
    int n =12345;
    int t =0;
    int d =0;
    if(n >= 1000){
        t =n%10000/1000;
    }
    d=n%10;
    n -=d;
    n -=t*1000;
    n +=d*1000;
    n +=t;
    printf("%d",n);

    return 0;
}
