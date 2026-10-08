#include <stdio.h>

int main() {
    int n = -1;
    int sum = 0;

    while (n < 0) {
        printf("Input a positive number: ");
        scanf("%d", &n);

        if (n < 0) {
            printf("Not positive! \n");
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%d \n", i);
        sum+=i;
    }
    printf("Sum is: %d \n", sum);

}
