#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char * str) {

  char * p1 = str;
  int n =0;
  if(*p1 == '\0'){        //initialize n to zero if there are no characters
    n = 0;}
  else {
    while(*p1 != '\0'){ //Loop to know the number of characters
    n++;
    p1++;}
  }
  p1-=1;              //now p1 is pointing to the last character
  if(n != 1 || n!= 0){
    if(n%2 != 0){       // Condition to check if the number of characters are even
      while(p1 != str){
	char t = *p1;
        *p1 = *str;
        *str = t;
        p1--;
        str++;}
    }
  else{                      // when n is odd
    while(str != p1+1){
      char t = *p1;
      *p1 = *str;
      *str = t;
      p1--;
      str++;}
  }
  }
}

int main(void) {
  char str0[] = "";
  char str1[] = "123";
  char str2[] = "abcd";
  char str3[] = "Captain's log, Stardate 42523.7";
  char str4[] = "Hello, my name is Inigo Montoya.";
  char str5[] = "You can be my wingman anyday!";
  char str6[] = "Executor Selendis! Unleash the full power of your forces! There may be no tomorrow!";
  char * array[] = {str0, str1, str2, str3, str4, str5, str6};
  for (int i = 0; i < 7; i++) {
    reverse(array[i]);
    printf("%s\n", array[i]);
  }
  return EXIT_SUCCESS;
}
