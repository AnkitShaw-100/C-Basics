// Celsius to Farhenhiet
#include<stdio.h>

void main() 
{
    float c, f;  
    printf("\nEnter the temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;  
    printf("\n Temperature in Fahrenheit: %f", f);
    
}
