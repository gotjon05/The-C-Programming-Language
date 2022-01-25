//print all input lines longer than 80


#include <stdio.h>
#define MINLINE 80
#define MAXLINE 1000

int getlinex(char line[], int minline);

int main(){
    char line[MAXLINE]; 
    int len; 
    while((len = getlinex(line, MAXLINE)) > 0){
        if(len > MINLINE){
            printf("%s\n", line);
        }
        else{
            printf("please print line more than 80 \n");
        }
    }

}

int getlinex(char s[], int lim){
    int i, c;
    for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i){
        //adding value to index i 
        s[i] = c;
    }
    if (c == '\n') {
        //increase index 
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}