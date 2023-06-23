#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
     int arr[100], freq[100];
    int n, i, j, count;

    scanf("%d", &n);

    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }


    for(i=0; i<n; i++) {
		count = 1;
        for(j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0) {
            freq[i] = count;
        }
    }



  
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 	for(i=0;i<n;i++){
 		if(freq[i]!=0&&arr[i]%2!=0){
 			printf("%d\n",arr[i]);
		 }
	 }






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
