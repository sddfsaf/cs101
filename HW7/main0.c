

#include <stdio.h>

int main()
{
    int n =7;
    int k =6;
    for(int i=1;i<=n;--k){
        if(k >= i){
            printf(" ");
        }else{
            for(int j=1;j<=i;j++){
                printf("%d ",i);
            }
            i++;
            k=7;
            printf("\n");
        }
        
    }
    
    

    return 0;
}
