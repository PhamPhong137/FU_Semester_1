#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a[6];
  int i,j;
  int temp;
  for(i=0;i<6;i++){
  	scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++){
  	for(j=i+1;j<6;j++){
  		if(a[i]>a[j]){
  			temp=a[i];
  			a[i]=a[j];
  			a[j]=temp;
		  }
	  }
  }
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<6;i++){
  	if(a[i]>0){
  		printf("%d\n",a[i]);
	  }
  }







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
