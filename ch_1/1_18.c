/* remove trailing blank and tabs from each line of input and delete entirely blank lines

Definition: Trailing whitespace is any spaces or tabs after the last non-whitespace character on the line until the newline.


i will remove trailinjg blanks and tabs by moving null pointer before the trailing blanks tabs. ex.  str[i] = '\0';


To identify trailing spaces, i need to find null pointer and check if last space is not blank
To identify trailing tabs, i need to find null pointer and check if four previous spaces are not blank 
*/

#include <stdio.h>
#define MAXLINE 1000


int main(){
    int c, i;
    char linex[MAXLINE];
    
    while((c = getchar()) != EOF && c != '\0'){
        linex[i] = c;
        if(c == '\0' && --linex[i] == ' '){
            printf("%s", c);
            ++i;
        }


    }
}












