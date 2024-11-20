#include <stdio.h>

void showArray(int arr[], int num){
    for(int i=0; i<num; i++){
        printf("%d \t", arr[i]);
    }
}

void main(){
    int n=10;
    int arr[10]={9,8,7,6,5,4,3,2,1,-1};
    for (int i = 0; i < (n); i++){
        for (int j = 0; j < (n-i); j++){
            if(arr[j]>arr[j+1]){
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    showArray(arr, n);
}