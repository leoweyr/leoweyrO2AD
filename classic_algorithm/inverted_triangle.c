#include <stdio.h>

int SummonTriangle(int heigh){
    for(int i=0;i < heigh;i++){
        for(int j=0;j<heigh-i;j++){
            printf("*");
        }
        for(int k=0;k<i;k++){
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