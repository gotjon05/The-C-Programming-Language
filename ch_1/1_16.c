/*
revise longest line so it prints the length of arbitrary long input lines and as much as possible of text 

*/


#include <stdio.h>

#define MAXLINE 1000

int getlinex(char line[], int maxline);

int main() {
  int len;
  char line[MAXLINE];
  while ((len = getlinex(line, MAXLINE)) > 0) {
    printf("%5d: %s", len, line);
  }
}

int getlinex(char s[], int lim) {
  int c, i;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }
  if (c == '\n') {
    //increase index 
    s[i] = c;
    i++;
  }
  //mark end of string of characters 
  s[i] = '\0';
  return i;
}