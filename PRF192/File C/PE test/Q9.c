#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[100];
	gets(s);
  	int i;
  	int count=0;
  	int counttmp=0;
  	int p=0;
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0;i<strlen(s);i++){
		if(s[i]!=' '){
			counttmp++;
		}
		if(s[i]==' ' &&  counttmp>0){
			p++;
			count+=counttmp;
			counttmp=0;
		}
		if(p==3){
			break;
			
		}
	}
	printf("%d",count);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

