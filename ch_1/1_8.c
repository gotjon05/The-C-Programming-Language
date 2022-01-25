/*

Line Counting: Count blanks, tabs and newlines 
I want the program to run until EOF, while counting 


*/

#include <stdio.h>
int main(){
    int c, tabs, spaces, newlines;

    tabs  = spaces = newlines = 0;
    //if no input fails, if nothing to do, nothing done
    while((c = getchar()) != EOF){
        if(c == '\t'){
            ++tabs;

        }
        else if (c == '\n')
        {
            ++newlines; 
        }
        else if (c == ' ')
        {
            ++spaces;
        }
        
    }

    printf("tabs: %d newlines: %d spaces: %d", tabs, newlines, spaces);
}
