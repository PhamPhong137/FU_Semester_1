#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i;
	int a[20];
	int check=0;
	do{
		scanf("%d",&n);
  	}while(n<0||n>=20);
  	for(i=0;i<n;i++){
  		scanf("%d",&a[i]);	
		}
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0;i<n;i++){
  		if(a[i]!=a[n-i-1]){
  			check=1;
		}
	}
	
	if(check==1){
		printf("0");
	}else{
		printf("1");
	}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
