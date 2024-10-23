#include <stdio.h>
#include <math.h>
void main(){
    int original=0, num=0, rem=0, digit=0, sum=0, power=0;
    printf("Enter a Number to get sum of its digit: ");
    scanf("%d", &num);
    original=num;
    while(num!=0){
        rem=num%10;
        num=(num-rem)/10;
        power++;
    }
    num=original;
    while(original!=0){
        rem=original%10;
        original=(original-rem)/10;
        sum+=pow(rem, power);
    }

    if(sum==num){
        printf("%d is an Armstrong number", num);
    }else{
        printf("%d is not an Armstrong number as it summing to: %d", num, sum);
    }
}