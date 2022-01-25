#include <stdio.h>

int main(){
   char input[] = "testing this now ";
    int c;
    int alphabet[26];
   
    for(int a = 0; a < 26; a++){ // it's from 0 to 25 :)))) :)
          alphabet[a] = 0;
    }
    
  int i = 0;
  while(input[i] != '\0'){
    c =  input[i];
    if (c != ' ' && c != '\n' && c != '\t'){ 
      
      int asciiOfC = (int)c;// <------- we now know ascii of each character, right? yeah

      if (66 <=asciiOfC && asciiOfC <= 91) {
        alphabet[asciiOfC-65]++;
      } else if (97<=asciiOfC && asciiOfC <= 112) {
          alphabet[asciiOfC-97]++;
      }
        // HELL YEAAAAA
     
    } 
    i++;
  }
  // let's print alphabet at the end
  for (int letter = 0; letter < 26; letter++) {
    printf("%c: %d\n",letter+65, alphabet[letter]);
  } 
  
  return 0;
}
