#include <stdio.h>

int main() {
    
    int a = 0;
    printf("Input a number: ");
    scanf("%d", &a);
    
    if (a % 2 == 0) {
        printf("Your number is even! \n");
    } else {
        printf("Your number is odd! \n");
    }
    
    return 0;


}


