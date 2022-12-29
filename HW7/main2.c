

#include <stdio.h>

int main(){
    
    for(int y=1,x=1; y<=9 ;x++){
        printf("%d*%d=%d\t",x,y,x*y);
        if(x<9){
            x=x;
            }else{
                (x=0);
                y++;
                printf("\n");
            }    
        }
    return 0;
}
