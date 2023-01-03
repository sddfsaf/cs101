

#include <stdio.h>

int main()
{
    int a =-999;
    int ad=0, at=0, ah=0, count =0;
    
    if(a >0){
        ad = a%10;
        at = a/10%10;
        ah = a/100;
    }else{
        ad = -a%10;
        at = -a/10%10;
        ah = a/100;
    }
    count =ad+at+ah;
    printf("%d",count);
    
    
    
    

    return 0;
}
