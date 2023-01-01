

#include <stdio.h>

int main()
{
    int i = 15;
    int count = 0;
    
    for ( count; i != 0; count++){
       i &= (i - 1) ;
    }
    printf("%d", count);

    return 0;
}
