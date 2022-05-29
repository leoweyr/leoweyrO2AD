# include <stdio.h>

int IsPrimeNumber(int number){
    int flag = 0;
    for(int i =2; i <= number/2;++i){
        if(number%i ==0){
            flag = 1;
        }
    }
    return flag;
}

int main(){
    int number,flag;
    printf("Please input a number: ");
    scanf("%d",&number);
    flag = IsPrimeNumber(number);
    if(flag == 0){
        printf("%d is a prime number!",number);
    } else{
        printf("%d is not a prime number...",number);
    }
}