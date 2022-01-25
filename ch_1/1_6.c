    // verify the expression getchar() != EOF is 0 or 1 

#include <stdio.h>

int main(){

    int c;
    //without parenthesis around assignmnt with conditon 
    //prints 0 and 1
    while(c = getchar() != EOF){
        printf("%d\n", c);
    }
}