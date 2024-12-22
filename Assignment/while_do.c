#include <stdio.h>
void main(){
    int is_ready=1;
    int table=2;
    // while (is_ready)
    // {
    //     printf("%d\t", table);
    //     table+=table;
    //     if(table>20){
    //         is_ready=0;
    //     }
    // }
    do{
        printf("%d\t", table);
        table+=table;
        if(table>20){
            is_ready=0;
        }
    }
    while (is_ready);
}