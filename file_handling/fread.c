#include <stdio.h>

void main(){
    FILE* fptr;
    fptr=fopen("a.txt","r");
    char hi;
    while(hi!=EOF){
        printf("%c", hi);
        hi=fgetc(fptr);
    }
    fclose(fptr);
}