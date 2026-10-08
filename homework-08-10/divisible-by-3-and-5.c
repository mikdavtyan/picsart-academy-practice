#include <stdio.h>

int main() {
    
    int a = 0;
    printf("Input a number: ");
    scanf("%d", &a);

    if ((a % 5 == 0) && (a % 3 == 0)) {
        printf("Yes, your number is divisible by both! \n");
    } else {
        printf("No, your number is not divisible by both! \n");
    }
    
    return 0;
}
