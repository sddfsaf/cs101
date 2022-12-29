

#include <stdio.h>

int main()
{
    double pi = 4.0;
    int flag =1;
    int ipi = 0;
    int n =0;
    for(int i =3;i <= 1000000;i+=2){
        if(flag == 0){
            pi+= (4.0/i);
            flag++;
        }else{
            pi-= (4.0/i);
            flag--;
        }
        ipi =pi*100000;
        if(ipi ==314159){
            n = i;
            break;
        }
    }
    printf("%d %.5f",n,pi);
    

    return 0;
}
