/*
Exercise 1-3. Modify the temperature conversion program to print a heading above the table. 
*/
#include <stdio.h>

int main(){
    int cel, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("This is a temperature conversion program\n\n");
    printf("Fahr\tCelsius\n");
    while (fahr <= upper){
        cel = 5*(fahr-32) / 9;
        printf("%d\t%d\n", fahr, cel);
        fahr = fahr + step;
    }
}