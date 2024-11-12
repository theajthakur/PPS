#include <stdio.h>

void main(){
    int num, rem, digit, sum=0;
    printf("Enter a Number to get sum of its digit: ");
    scanf("%d", &num);
    while(num!=0){
        rem=num%10;
        sum+=rem;
        num=(num-rem)/10;
    }
    printf("%d", sum);
}