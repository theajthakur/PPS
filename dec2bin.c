#include <stdio.h>
#include <math.h>
void main(){
    long int decimal=0,  binary=0,  last=0,  rem=0, i=0;
    printf("Enter a Decimal To convert: ");
    scanf("%d", &decimal);
    while(!last){
        rem=decimal%2;
        decimal/=2;
        binary+=rem*pow(10, i);
        i++;
        if(decimal==0){
            last=1;
        }
    }
    printf("The Converted Binary is %d",binary);
}