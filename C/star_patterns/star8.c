#include<stdio.h>//diamond pattern
int main(){
    int i,j;
    for(i=4;i>0;i--){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(int j=4;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=3;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }
        for(int j=3;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
}