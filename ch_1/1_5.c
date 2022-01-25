// modify table in reverse order from 300 to 0

#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 10

int main(){
    float cels, fahr;

    fahr = UPPER;
    printf("%-12s %-13s\n", "fahrenheit", "celsius");
    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
        cels = (5.0/9.0) * (fahr-32.0);
        printf("%6.0f %12.1f\n", fahr, cels);
    }
    
}