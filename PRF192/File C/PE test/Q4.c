#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,j;
   int h;
   do{
   	scanf("%d",&h);
   }while(h<0||h>=20);
   
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 for(i=0;i<h;i++){
  		for(j=0;j<=i;j++){
  			printf("*");
  			}
  			printf("\n");
  		}
  







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
