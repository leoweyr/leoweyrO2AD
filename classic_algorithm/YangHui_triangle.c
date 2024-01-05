#include <stdio.h>

void SummonTriangle(int heigh){
    int coef;
    for(int i=0;i<heigh;i++){
        for(int space=1;space<=heigh-i;space++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            if(j ==0 || i==0){
                coef = 1;
            }else{
                coef = coef*(i-j+1)/j;
            }
            printf("%4d",coef);
        }
        printf("\n");
    }
}

int main(){
    int heigh;
    printf("Please input the heigh of YangHui triangle: ");
    scanf("%d",&heigh);
    SummonTriangle(heigh);
    return 0;
}