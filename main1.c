

#include <stdio.h>

int main()
{
    int i =10;
    if(i%5 ==0||i%3 == 0){
        if(i%15 == 0){
            printf("Love IU");
        }else if(i%3==0){
            printf("Love");
        }else{
            printf("IU");
        }
    }else{
       printf("%d",i);
    }

    return 0;
}
