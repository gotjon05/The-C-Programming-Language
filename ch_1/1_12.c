// one word per line. replace space with newline 


#include <stdio.h>

int main(){
    int c;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t'){
            putchar('\n');
        }
        else{
            putchar(c);
        }
    }

}



