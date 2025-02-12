#include<stdio.h>

int main(){
    int k,n,w=0;
    // k Price of First
    // n Number of Dollar
    // w Unit of Banana

    scanf("%d %d %d", & k, &n, &w);
    int totalPrice=0;
    for (int i = 1; i <= w; i++){
        totalPrice+=k*i;
    }
    int remain=totalPrice-n;
    if(n>totalPrice){
        remain=0;
    }
    printf("%d", remain);
    

    return 0;
}