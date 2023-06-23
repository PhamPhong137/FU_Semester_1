#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int a,b,i;
  	int temp;
  	int p=1;
  	do{
  		scanf("%d%d",&a,&b);
	  }while(a<=0||a>10||b<=0||b>10);
	  if(a>b){
	  	temp=a;
	  	a=b;
	  	b=temp;
	  	}
  for(i=a;i<=b;i++){
  	if(i%2==0){
  		p*=i;
	  }
  }
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d",p);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
