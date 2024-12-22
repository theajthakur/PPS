#include<stdio.h>
#include<math.h>
void main(){
    long long int binary=0, decimal=0;
    int index=0;
    printf("Enter a Binary Number: ");
    scanf("%d",&binary);
    int isBinary=1;
    while(binary){
        int rem=binary%10;
        if(rem>1){
            printf("Invalid Binary Inputted!");
            isBinary=0;
            break;
        }
        binary/=10;
        decimal+=rem*pow(2,index++);
    }
    if(isBinary){
        printf("%d", decimal);
    }
}