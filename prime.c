#include <stdio.h>
void main(){
    int num;
    printf("Enter a number to check whether a number is Prime or not: ");
    scanf("%d", &num);
    int isPrime=1;
    int divisible=1;
    for (int i = 2; i < num; i++){
        if(num % i==0){
            isPrime=0;
            divisible=i;
            break;
        }
    }
    if(isPrime){
        printf("%d is a Prime Number", num);
    }else{
        printf("%d is not a Prime Number, divisible by %d", num, divisible);
    }   
}