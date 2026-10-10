#include <stdio.h>

int main() {
    
    float hour = 0;
    float minute = 0;

    printf("Enter the hour: ");
    scanf("%f", &hour);
    
    minute = hour * 60;
    printf("%2.f hour is %2.f minutes \n", hour, minute);
    



    return 0;
}
