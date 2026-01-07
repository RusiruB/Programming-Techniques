#include<stdio.h> //Rhombus pattern 
int main(){
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<i;j++){
            printf(" ");  //print spaces
        }
        for(int j=1;j<=4;j++){
            printf("* ");  //print "* "
        }
        printf("\n ");
    }
   return 0;
}