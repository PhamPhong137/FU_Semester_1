#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int a;
	scanf("%d",&a);
   	int n,i;
  	int check=0;
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for(i=0;i<=sqrt(a);i++){
		if(pow(2,i)==a){
			printf("%d",i);
			check=1;
		}
	}
	if(check==0){
		printf("%d is not a power of 2",a);
		}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
