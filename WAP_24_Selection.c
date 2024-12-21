#include<stdio.h>

void showArray(int arr[], int num){
    for (int i = 0; i < num; i++){
        printf("%d\t", arr[i]);
    }
}

void main(){
    int index;
    int arr[]={5,2,9,1,3};
    for (int i = 0; i < 5; i++){
        int min=arr[i];
        for (int j = i; j < 5; j++){
            if(min>arr[j]){
                min=arr[j];
                index=j;
            }
        }
        if(index!=i){
            arr[index]=arr[i];
            arr[i]=min;
        }
    }
    showArray(arr, 5);
}