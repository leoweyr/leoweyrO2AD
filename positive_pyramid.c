#include <stdio.h>

void SummonPyramid(int heigh){
    int feet = 2*heigh-1;
    for(int i=1;i<=heigh;i++){
        for(int space_left=0;space_left < (feet-(2*i-1))/2;space_left++){
            printf(" ");
        }
        for(int k=0;k < 2*i-1;k++){
            printf("*");
        }
        for(int space_right=0;space_right < (feet-(2*i-1))/2;space_right++){
            printf(" ");
        }
        printf("\n");
    }
}

int main(){
    int heigh;
    printf("Please input the heigh of pyramid: ");
    scanf("%d",&heigh);
    SummonPyramid(heigh);
    return 0;
}