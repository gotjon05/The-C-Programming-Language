/*
rewrite temp converstion to use function for conversion 


main gives f to conversion function
conversion function for making the conversion. Conversion function returns c 
main gives f and c to graph function for creating the graph 




*/
//far to cel
#include <stdio.h>

int convert_to_cels(int fahr);
int cels_array[11];


int main(){
    int high, low, step; 
    high = 300;
    step = 10;

    for(int i = 0; i < high; i += step){
        cels_array[i] = convert_to_cels(i);        
        printf("%d %d\n", i, cels_array[i]);
    }
}
int convert_to_cels(fahr){
    int cels;
    cels = (5.0/9.0) * (fahr-32.0);
    return cels;
}