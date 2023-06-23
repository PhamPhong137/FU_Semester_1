#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  long long int n1, n,p=1;
	int dec=0,i=1,j,d;

	scanf("%lld",&n);
	n1=n;
	for (j=n;j>0;j=j/10)
	{  
          d = j % 10;
            if(i==1)
                  p=p*1;
            else
                 p=p*2;

	   dec=dec+(d*p);
	   i++;
	}
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
printf("%o",dec);








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

