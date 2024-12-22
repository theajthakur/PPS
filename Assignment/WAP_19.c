#include<stdio.h>
void main(){
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        sum+=arr[i];
    }
    printf("Sum is %d", sum);   
}