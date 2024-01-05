# include <stdio.h>

int IsPrimeNumber(int number){
    for(int i =2; i <= number/2;i++){
        if(number%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int number,flag;
    printf("Please input a number: ");
    scanf("%d",&number);
    flag = IsPrimeNumber(number);
    if(flag == 1){
        printf("%d is a prime number!",number);
    } else{
        printf("%d is not a prime number...",number);
    }
}