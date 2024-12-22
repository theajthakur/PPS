#include <stdio.h>
#include <time.h>

void main(){
    time_t tiim;
    time(&tiim);
    FILE* fptr;
    fptr=fopen("log.txt", "a");
    fprintf(fptr, "%s\n", ctime(&tiim));
    fclose(fptr);
}