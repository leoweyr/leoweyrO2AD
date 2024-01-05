#include <stdio.h>

void swap(int *a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    const int arraySize = 5;
    int array[arraySize];
    int element;
    printf("Please input %d number: ",arraySize);
    for(int i=0;i < arraySize;i++){
        scanf("%d",&element);
        array[i] = element;
    }
    for(int i=0;i<arraySize;i++){
        for(int j=0;j<arraySize-i;j++){
            if(array[j] > array[j+1]){
                swap(&array[j],&array[j+1]);
            }
        }
    }
    printf("The array has been sort: ");
    for(int j=0;j<arraySize;j++){
        printf("%d ",array[j]);
    }
    return 0;
}