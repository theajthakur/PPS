#include <stdio.h>

void main() {
    FILE *fptr;
    char filename[20], mode[] = "w", content[100];
    printf("Enter file name: ");
    scanf("%s", filename);
    fptr = fopen(filename, mode);
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    printf("Write Content: ");
    scanf("%s", content);
    fprintf(fptr, "%s", content);
    fclose(fptr);
    
    printf("Content written successfully.\n");
}
