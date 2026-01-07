#include<stdio.h>//Hourglass pattern
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf(" ");//print space 
        }
        for(int j=5;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=4;i++){
        for(j=4;j>=i;j--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;

    

   
}    