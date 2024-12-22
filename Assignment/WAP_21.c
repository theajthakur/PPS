#include<stdio.h>
void main(){
    int arr1[3], arr2[3], sum[3]={0,0,0};
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Element %d of Set 1\n",i+1);
        scanf("%d",&arr1[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Element %d of Set 2\n",i+1);
        scanf("%d",&arr2[i]);
    }
    
    
    for (int i = 0; i < 3; i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }

    for (int i = 0; i < 3; i++){
        printf("\t%d\n", sum[i]);
    }
    
    
    
}