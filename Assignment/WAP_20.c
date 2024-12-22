#include <stdio.h>
#include <conio.h>

void pattern(char ltr, int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == j) {
                printf("%c \n", ltr);
            } else {
                printf("%c ", ltr);
            }
        }
    }
}

void star_brick(int rows){
    int i,j,k,ran,tan=0;
    if(rows%2==0){
        printf("you entered %d but odd is required so showing for %d lines\n\n\n", rows--, rows);
    }
    rows=rows/2;
    for (i = 0; i < rows; i++)
    {
        ran=i*2+1;
        for (k=0; k<=(rows-i); k++)
        {
            printf(" ");
        }
        
        for(j=1; j<=ran; j++){
            printf("*");
        }
        printf("\n");
    }
    for (i = rows; i>=0; i--)
    {
        ran=i*2+1;
        for (k=0; k<=(rows-i); k++)
        {
            printf(" ");
        }
        
        for(j=1; j<=ran; j++){
            printf("*");
        }
        printf("\n");
    }
    
}

void numberPattern(int rows) {
    int il=0;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == j) {
                printf("%d \n", ++il);
            } else {
                printf("%d ", ++il);
            }
        }
    }
}

void rowNumberPattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == j) {
                printf("%d \n", i);
            } else {
                printf("%d ", i);
            }
        }
    }
}

void alphabetPattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        char ltr = 'A' + (i%26);
        for (int j = 1; j <= i; j++) {
            if (i == j) {
                printf("%c \n", ltr);
            } else {
                printf("%c ", ltr);
            }
        }
    }
}

int main() {
    int type, rows;
    printf("How many rows do you want?: ");
    scanf("%d", &rows);
    
    printf("\nSelect Pattern: \n");
    printf("1). Star\n2). Numbers\n3). Row Number\n4). Alphabets\n5). Brick Pattern\n");
    scanf("%d", &type);

    switch (type) {
        case 1:
            {
                char c;
                printf("Enter character for pattern: ");
                scanf(" %c", &c);
                pattern(c, rows);
                break;
            }
        case 2:
            numberPattern(rows);
            break;
        case 3:
            rowNumberPattern(rows);
            break;
        case 4:
            alphabetPattern(rows);
            break;
        case 5:
            star_brick(rows);
            break;
        default:
            printf("Invalid option. Happy Coding!\n");
    }
    getch();
    return 0;
}
