#include <stdio.h>
void main(){
    int length=10;
    int a[length];
    int sum=0;
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    printf("%d", sum);
}