#include <stdio.h>

int main() {
    
    int a = -1;
    int ld = 0; //last digit 
    while (a < 0) {
        
        printf("Input a positive number: ");
        scanf("%d", &a);

        if (a < 0) {
            printf("Not a positive number \n");
        }
    }
    
    ld = a % 10;
    printf("Last digit is : %d \n", ld);    

    return 0;
}
