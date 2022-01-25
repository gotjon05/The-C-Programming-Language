/*
https://stackoverflow.com/questions/5322056/how-to-convert-an-ascii-character-into-an-int-in-c/37736710

https://www.asciitable.com/

*/
#include <stdio.h>

int main(){
    int ascii_array[127];
    char ascii_char[127];
    for(int i = 0; i < 127; ++i){
        ascii_array[i] = 0;
    }
    char c;
    int nchar;
    while((c = getchar()) != EOF){
            
            nchar = c - '0';
            // character '0' has the ASCII code of 48
            nchar = nchar + 48;
            ++ascii_array[nchar];  
    }

    for(int i = 1; i < 127; i++){
        //printf("%d: %c %d\n", i, i, ascii_array[i]);
   
        printf("%c %2d| ", i, i);
        for(int j = 0; j < ascii_array[i]; ++j){
	        putchar('*');
        }
        putchar('\n');
   
    }
    

  




}