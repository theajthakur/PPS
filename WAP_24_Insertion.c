#include<stdio.h>

void showArray(int arr[], int num){
    for (int i = 0; i < num; i++){
        printf("%d\t", arr[i]);
    }
}

void main(){
    int arr[]={12, 1, 9, 6, 3, 6, 2, 8, 4};
    int n = 9;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    
    showArray(arr, n);
}
