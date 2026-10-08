#include <stdio.h>

int main() {
    int n = 1;
    int sum = 0;
    while (n != 0) {
        printf("Input a number (type 0 if you want to leave): ");
        scanf("%d", &n);
        sum += n;
    }

    printf("Sum is: %d \n", sum);
    return 0;
}
