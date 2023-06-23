#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[5][20];

	int i,j;
	for(i=0;i<5;i++){
		scanf("%s",s[i]);
	}
  	for ( i = 0; i < 4; i++) {
      			for ( j = 0; j < 4-i; j++) {
        			if (strcmp(s[j], s[j+1]) > 0) {
           				strcpy(s[5], s[j+1]);
            			strcpy(s[j+1], s[j]);
            			strcpy(s[j],s[5]);
         		}	
      		}
   		}
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 	for(i=0;i<5;i++){
 		printf("%s ",s[i]);
	 }







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
