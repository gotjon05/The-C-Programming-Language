/*
copy input to output
replace each tab by \t, each backspace by \b and each backslash by \\
*/

#include <stdio.h>

int main(){
    int c;
     while((c = getchar()) != EOF){
         if(c == '\t'){
            putchar("t");
         }
        if(c == '\b'){
            putchar("b");
        }
        //getting issues adding backslash
        if(c == 0x5c){
            putchar('\\');
        }
     
    }


}