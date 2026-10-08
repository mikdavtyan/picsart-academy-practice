#include <stdio.h>

int main() {
   

    int n = -1;
    while (n < 0) {
        printf("Input a positive number: ");
        scanf("%d", &n);

        if (n < 0) {
            printf("Not a positive number! \n");    

        }
    }
    for (int i = 1; i <= n; i++) {
            printf("%d \n", i);
    }



    return 0;
}
