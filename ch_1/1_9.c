/* 
copy its input to its output 
replacing each string of one/more blanks by a single blank


while c = getchar:
    if c is blank:
        c = getchar until c is not blank
        print blank
    print c



*/

#include <stdio.h>

int main(){
    int c, spaces;
    spaces = 0;
    //get input
    while((c = getchar()) != EOF){
        if(c == ' '){
            ++spaces;
        
            //if input greater tan 
            if (spaces < 2)
            {
                putchar(c);
            }
            if (c != ' ')
                {
                    spaces = 0;
                    putchar(c);
                }



        }
    }
    printf("%c", c);
}