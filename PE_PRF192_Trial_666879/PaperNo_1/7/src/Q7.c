#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    char s[20];
    
	int n,i;
	do{
		gets(s);
	}while(strlen(s)<=5||strlen(s)>=20||strlen(s)%2==0);
  	int p=(strlen(s)-5)/2;
 
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=p;i<p+5;i++){
		printf("%c",s[i]);
	}





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
