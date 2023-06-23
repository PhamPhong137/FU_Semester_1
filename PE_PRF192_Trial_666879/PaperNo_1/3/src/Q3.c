#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char s[4];
int i, j;
char temp;
int length =4;
	for(i=0;i<length;i++)
		scanf(" %c", &s[i]);
		for(i=0;i<length-1;i++){
			for(j=i+1;j<length;j++){
				if(s[i] > s[j]){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
		}
	}
}
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0;i<length;i++){
		printf("%c ", s[i]);
	}
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}
