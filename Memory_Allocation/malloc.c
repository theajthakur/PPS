#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int count){
    for (int i = 0; i < count; i++){
        printf("%d\t", arr[i]);
    }
}

void main(){
    int *ptr;
    int csize=0;
    printf("Enter size of Array: ");
    scanf("%d",&csize);
    ptr=(int*)malloc(csize*sizeof(int));
    for (int i = 0; i < csize; i++){
        printf("Enter Number %d: ", i+1);
        scanf("%d", &ptr[i]);
    }
    print_array(ptr, csize);
    free(ptr);
}