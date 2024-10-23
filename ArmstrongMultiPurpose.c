#include <stdio.h>
#include <math.h>

int check_arm(int num){
    int original=0, rem=0, digit=0, sum=0, power=0;
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
        printf("%d is an Armstrong number\n", num);
    }
    return 0;
}

void main(){
    int num=0, opt=0;

    printf("1). Check a Number\n2). Check Numbers Upto a Limit\n");
    scanf("%d",&opt);
    printf("Enter the Number: ");
    scanf("%d",&num);
    switch (opt)
    {
    case 1:
        check_arm(num);
        break;
    
    case 2:
        for (int i = 1; i <= num; i++){
            check_arm(i);
        }
        break;

    default:
        printf("You Entered %d but chose an invalid Option %d\nPlease Try again with correct option\nHappy Coding.....", num, opt);
        break;
    }
}