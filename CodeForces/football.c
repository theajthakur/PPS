#include <stdio.h>
#include <string.h>
int main(){
    char kaha[100];
    scanf("%s", kaha);
    int st=0;
    char prev=kaha[0];
    for (int i = 0; i < strlen(kaha); i++){
        if(kaha[i]==prev){
            st++;
            if(st>=7){
                break;
            }
        }else{
            st=1;
            prev=kaha[i];
        }
    }
    if(st>=7){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}