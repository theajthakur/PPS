#include <stdio.h>

void main(){
    int num, rem, digit, sum, numT=0;
    printf("Enter a Number to Check whether it is Armstrong number or not: ");
    scanf("%d", &num);
    numT=num;
    while(num!=0){
        rem=num%10;
        sum+=rem*rem*rem;
        num=(num-rem)/10;
    }
    if(numT==sum){
        printf("%d is an Armstrong Number", numT);
    }else{
        printf("%d is not an Armstrong Number as it is summing to %d",numT, sum );
    }
}