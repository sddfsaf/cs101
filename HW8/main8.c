

#include <stdio.h>

int rows =4;
void printf_spaces(int r, int k){
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
   for (int i = rows-1; i >= 1; --i){
       printf_spaces(i+1,rows-1);
       printf_stars(i+1);
       printf("\n");
   }for (int i = 1; i <= rows; i++){
       printf_spaces(i, rows);
       printf_stars(i);
       printf("\n");
   }

    

    return 0;
}
