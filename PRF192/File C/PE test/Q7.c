#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	char s[100];
  	int n,i;
	char result;
	int first,second;

	int count[256]={0};
	do{
  		scanf("%d",&n);
	  }while(n<0||n>=20);
  
  	for (i=0;i<n;i++){
  		scanf("%s",&s[i]);
  		}
  	for(i=0;i<n;i++){
  		(count[s[i]])++;
	   }
	  
	for(i=0;i<n;i++){
  		if(count[s[i]] > count[s[first]]){
  			second = first;
  			first = i;
		}
		if((count[s[i]] > count[s[second]])&& s[i]!= s[first]){
			second = i;
		}
		
	}
	  
	   // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

printf("%c\n%c",s[first],s[second]);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

