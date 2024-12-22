#include <stdio.h>

void main(){
    FILE* fptr;
    fptr = fopen("test.txt", "r+");
    char str;
    while(str!=EOF){
        printf("%c", str);
        str=fgetc(fptr);
    }
    char nd[100];
    scanf("%s", &nd);
    fputs(nd, fptr);
    fclose(fptr);
    printf("File Updated!");
}