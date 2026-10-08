#include <stdio.h>

int main() {
    
    int a = -1;
    int fd = 0; // first digit
    int sd = 0; // second digit
    int td = 0; // third digit
    int sum_of_digits = 0;

while (a < 0 || a < 100 || a > 999 ) {
        printf("Input a positive three digit number: ");
        scanf("%d", &a);
    
        if (a < 0) {
            printf("The number must be positive! \n");    
        }
        if (a > 0 && a < 100) {
            printf("The number must be three digit! \n");
        }

        if (a > 999) {
            printf("The number must be three digit! \n");
        
        }
    }
    
    fd = a % 10;
    sd = (a / 10) % 10;
    td = (a / 10) / 10;
    printf("The digits are %d %d %d \n", td, sd, fd);
    sum_of_digits = fd + sd + td;
    printf("Sum of digits is: %d \n", sum_of_digits);




    return 0;    
}
