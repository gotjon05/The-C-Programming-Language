// print celsius to farh table 

#include <stdio.h>
int main(){
    int fahr, cels; 
    float LOWER, UPPER, STEP; 
    LOWER = 0;
    UPPER = 300;
    STEP = 10;
    cels = LOWER;
    printf("%-12s %-13s\n", "celsius", "fahrenheit");
    while(cels <= UPPER){
        fahr = (cels * 9/5) + 32;
        printf("%6d %12d\n", cels, fahr);
        cels = cels + STEP;
    }

}