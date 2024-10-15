#include <stdio.h>

void main(){
    int num, rev, rem=0;
    printf("Enter a Number to get its Reverse: ");
    scanf("%d",&num);

    // Reverse Using For Loop
    // while (num!=0)
    // {
    //     rem=num%10;
    //     rev=rev*10+rem;
    //     num=(num-rem)/10;
    // }

    // Reverse Using For Loop
    for(num; num>0; num=(num-num%10)/10)
    {
        rem=num%10;
        rev=rev*10+rem;
    }

    printf("%d",rev);
}