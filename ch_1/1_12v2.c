// one word per line. replace space with newline 


#include <stdio.h>

#define IN 1
#define OUT 0

//state records if in word

int main(){
    int c, state;
    state = OUT;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t'){
            state = OUT;
            putchar('\n');

        }
        else if (state != OUT){
            state = IN;
            putchar(c);
        }
        
    }
}
