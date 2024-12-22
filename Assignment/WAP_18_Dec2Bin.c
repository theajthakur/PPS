// #include <stdio.h>
// #include <math.h>
// void main(){
//     long int decimal=0,  binary=0,  last=0,  rem=0, i=0;
//     printf("Enter a Decimal To convert: ");
//     scanf("%d", &decimal);
//     while(!last){
//         rem=decimal%2;
//         decimal/=2;
//         binary+=rem*pow(10, i);
//         i++;
//         if(decimal==0){
//             last=1;
//         }
//     }
//     printf("The Converted Binary is %d",binary);
// }

#include <stdio.h>

void main() {
    long int decimal = 0;
    char binary[65];
    int i = 0;

    printf("Enter a Decimal to convert: ");
    scanf("%ld", &decimal);
    if (decimal == 0) {
        printf("The Converted Binary is 0\n");
        return;
    }

    while (decimal > 0) {
        binary[i++] = (decimal % 2) + '0';
        decimal /= 2;
    }
    binary[i] = '\0';
    for (int j = 0; j < i / 2; j++) {
        char temp = binary[j];
        binary[j] = binary[i - j - 1];
        binary[i - j - 1] = temp;
    }

    printf("The Converted Binary is %s\n", binary);
}
