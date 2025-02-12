#include <stdio.h>
void main(){
    printf("\n\n\n\n----------Welcome to File Handler----------\n");
    printf("-------------------------------------------\n\n");
    char fname[10], string[100];
    printf("Enter file Name: ");
    scanf("%s", fname);
    FILE *file;
    file=fopen(fname, "a+");
    scanf(" %[^\n]", string);
    fprintf(file, string, 100);
    printf("Updated content is: \n");
    char str;
    rewind(file);
    while(str!=EOF){
        str=fgetc(file);
        printf("%c", str);
    }
    fclose(file);
}