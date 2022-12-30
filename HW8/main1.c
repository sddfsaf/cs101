
#include <stdio.h>

int rows =10;
void printf_spaces(int r){
    int i;
    for (i = r; i < rows; i++){
        printf("  ");
    }
}

void printf_stars(int r){
    int i;
    for (i = 2*r; i != 1; --i){
        printf("* ");
    }
}

int main()
{
   int j;
   for (int i = 1; i <= rows; i++){
       printf_spaces(i);
       printf_stars(i);
       printf("\n");
   }

    

    return 0;
}
