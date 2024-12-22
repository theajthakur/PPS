#include<stdio.h>

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

void main(){
    int n=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("%d\n", fibonacci(i));
    }
}