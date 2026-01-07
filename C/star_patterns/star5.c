#include<stdio.h>//full pyramid
int main(){
    int i,j;
    for(i=5;i>0;i--){
        for(j=0;j<i-1;j++){
            printf(" ");
        }
        for(int j=5;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} 