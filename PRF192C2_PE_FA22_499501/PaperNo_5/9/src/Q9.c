#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s[100];
  gets(s);
  int i;
  for(i=0;i<strlen(s);i++){
  	if(s[i]>'A'&&s[i]<'Z'){
  		s[i]+=32;
	  }
  }
 
  for(i=0;i<strlen(s);i++){
  	if(s[i]=='a'||s[i]=='e'||s[i]=='u'||s[i]=='i'||s[i]=='o'){
  		s[i]-=32;
	  }
  }
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%s",s);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
