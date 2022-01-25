/*
print histogram of freq of different characters in its input


ascii table stores different characters that exist-- ascii number 

Store ascii number in index and increment value by frequency 

*/

#include <stdio.h>

#define IN        1
#define OUT       0


int main(){
    int ascii_array[127];
    char c;
    int nchar;
    int inspace = IN; /* a flag to know whether we are inside of outside the word */ 
    while((c = getchar()) != EOF){
        if(inspace == OUT){
            ++ascii_array[nchar];
            inspace = IN;
	        nchar = 0;
        }
        else{
            printf("%c \n", c);
            nchar = c - '0';
            printf("%d \n", nchar);
            inspace = OUT;

        } 
    }
}


