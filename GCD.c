#include <stdio.h>

int GetGDC(int number1, int number2){
    int i,gcd;
    for(i=1;i <= number1 && i <=number2;i++){
        if(number1%i == 0 && number2%i ==0){
            gcd = i;
        }
    }
    return gcd;
}
int main(){
    int number1,number2,gcd;
    printf("Plese input two number: ");
    scanf("%d %d",&number1,&number2);
    gcd = GetGDC(number1,number2);
    printf("The GCD of %d and %d is %d",number1,number2,gcd);
    return 0;
}
