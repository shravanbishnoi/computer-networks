/*
Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. 
*/
#include <stdio.h>

int main(){
    int fahr, cel;
    int lower, upper, step;

    lower = -17;
    upper = 148;
    step = 11;

    cel = lower;
    printf("this is a celsius to fahr temperature conversion table program\n");
    printf("Celcius\tFahr\n");
    while (cel <= upper){
        fahr = ((cel * 9) / 5) + 32;
        printf("%d\t%d\n", cel, fahr);
        cel += step;
    }
}