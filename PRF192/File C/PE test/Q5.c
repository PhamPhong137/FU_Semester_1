#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[10]; 
    int n;
	do{
	scanf("%d",&n);
	} while(n<=0||n>=10);
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]==a[j]&&a[i]%2!=0){
				for(int k=i;k<n-1;k++)
					a[k]=a[k+1];
					n--;
					i--;
			}
		}
	}
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
