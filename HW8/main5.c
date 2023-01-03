

#include <stdio.h>

void printf_spaces(int r, int rows){
    int i;
    for(; rows <= 7; rows +=2){
        
    }
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



void print_top(){
    for(int rows =3; rows <=7; rows +=2){
        for (int i = 1; i <= rows; i++){
            printf("\n");
            printf_spaces(i,rows);
            printf_stars(i);
            printf("\n");
        }
    }
}

void print_truck(){
    for(int k =0; k <5;k++){
     printf("\n");
     printf_spaces(1,5);
     printf_stars(1);
     printf("\n");
    }
}



int main()
{
   print_top();
   print_truck();
    return 0;
}
