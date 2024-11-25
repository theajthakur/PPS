#include <stdio.h>
#include <math.h>

int countDigits(int num){
    int i=0;
    while(num){
        num/=10;
        i++;
    }
    return i;
}

void main(){
    int num, rem, digit, sum, numT=0;
    printf("Enter a Number to Check whether it is Armstrong number or not: ");
    scanf("%d", &num);
    int count=countDigits(num);
    numT=num;
    while(num!=0){
        rem=num%10;
        sum+=pow(rem, count);
        num=(num-rem)/10;
    }
    if(numT==sum){
        printf("%d is an Armstrong Number", numT);
    }else{
        printf("%d is not an Armstrong Number as it is summing to %d",numT, sum );
    }
}
