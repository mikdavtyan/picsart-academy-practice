#include <stdio.h>

int main () {
    
    float a = 0;
    float b = 0;
    float c = 0;
    float average = 0;
    
    printf("Enter 3 numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    
    average = (a + b + c) / 3;
    printf("average is: %.2f \n", average);






    return 0;
}
