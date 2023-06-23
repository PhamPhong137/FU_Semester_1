#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i;
	scanf("%d",&n);
	int check=0;
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(n<2){
		printf("%d is not a prime number",n);
	}
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			printf("%d is not a prime number",n);
			check=1;
		}
	}
	if(check==0){
		printf("0x%X",n);
		}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
