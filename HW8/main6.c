

#include <stdio.h>

int rows = 4;
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

void house_top(){
    for (int i = 1; i <= rows; i++){
       printf_spaces(i);
       printf_stars(i);
       printf("\n");
    }
}

void house(){
    for (int i = rows+2; i >0; --i){
        if (i ==1 ||i == rows+2){
            for ( int j =rows+2; j >=0;--j){
                printf("* ");
            }
        }else {
            printf("* ");
            for ( int j =rows; j >=0;--j){
                printf("  ");
            }
            printf("* ");
            printf("\n");
        }
        printf("\n");
    }
}


int main()
{
    house_top();
    house();

    return 0;
}
