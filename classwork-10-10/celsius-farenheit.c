#include <stdio.h>

int main() {
    
    float celsius = 0;
    float farenheit = 0;
    printf("please enter temperature (in Celsius):  ");
    scanf("%f", &celsius);
    farenheit = (celsius * 9.0 / 5) + 32;
    printf("Temperature in farenheit: %.3f \n ", farenheit);







    return 0;

}
