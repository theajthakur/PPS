#include <stdio.h>

void main(){
    int arr[10]={6,3,9,8,5,8};
    int element=8;
    for (int i = 0; i < 6; i++){
        if(arr[i]==element){
            printf("Found Element %d at index %d\n", element, i);
        }
    }
    
}