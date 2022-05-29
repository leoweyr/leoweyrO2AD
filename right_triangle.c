#include <stdio.h>

void SummonTriangle(int heigh){
    for(int i=0;i < heigh;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        for(int k=0;k<heigh-(i+1);k++){
            printf(" ");
        }
        printf("\n");
    }
}

int main(){
    int heigh;
    printf("Please input the heigh of triangle: ");
    scanf("%d",&heigh);
    SummonTriangle(heigh);
    return 0;
}