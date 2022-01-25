/*modify the temp conversion program to print a heading above table */
#include <stdio.h>

int main(){
    float fahr, cels;
    int LOWER, UPPER, STEP;
    LOWER = 0;
    UPPER = 300;
    STEP = 20;

    fahr = LOWER; 
    printf("%-12s %-13s\n", "fahrenheit", "celsius");
    while(fahr <= UPPER){
        cels = (5.0/9.0) * (fahr-32.0);
        //after decimal defines number of digits after decimal
        //number before decimal defines Minimum field width
        printf("%6.0f %12.1f\n", fahr, cels);
        fahr = fahr + STEP;
      

    }


}