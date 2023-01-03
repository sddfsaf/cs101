

#include <stdio.h>

void round_func(float f){
    int a =f;
    int k =f*10;
    if(k%10 >=5){
        a++;
        printf("%d",a);
    }else{
        printf("%d",a);
    }
}




int main()
{
    float n =9.233344;
    round_func(n);

    return 0;
}
