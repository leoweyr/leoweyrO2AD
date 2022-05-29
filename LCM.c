#include <stdio.h>

int GetLCM(int number1,int number2){
    int i,gcd,lcm;
    for(i=1;i <= number1 && i <= number2;i++){
        if(number1%i ==0 && number2%i ==0){
            gcd = i;
        }
    }
    lcm = (number1*number2)/gcd;
    return lcm;
}

int main(){
    int number1,number2,lcm;
    printf("Please input two number: ");
    scanf("%d %d",&number1,&number2);
    lcm = GetLCM(number1,number2);
    printf("The LCM of %d and %d is %d",number1,number2,lcm);
    return 0;
}
