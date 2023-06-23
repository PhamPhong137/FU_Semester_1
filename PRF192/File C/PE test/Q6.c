#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[100];
	gets(s);
  	int count=0;
  	int i,j;
   	int check=0;
   	
   	for(i=0;i<strlen(s);i++){
		
		if(s[i]!=' '){
			check =1;
			}
	
		if(check==1){
			if(s[i]=='h'){
				for(j=i+1;j<strlen(s);j++){
					if((s[j]=='g' )&& ((s[j+1]==' ')|| (s[j+1] == NULL))){
						count++;
						check=0;
						break;
					}
					if (s[j]==' ')	{
						break;	
					}
				}
			}
			
		}
	}
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	
	printf("\n%d",count);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

