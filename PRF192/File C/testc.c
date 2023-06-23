//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//
//int main() {
//  system("cls");
//  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//	int n;
//	int i;
//	int count[] = {0};
//	char s[21][1];
//	int maxtmp1,maxtmp2;
//	int max1=0,max2=0,maxpos1,maxpos2;
//	scanf("%d",&n);
//	if (n > 19)
//		exit(1);
//  	for (i = 0; i < n; i++){
//  		scanf("%s",&s[i]);
//	}
//  // Fixed Do not edit anything here.
//  printf("\nOUTPUT:\n");
//  //@STUDENT: WRITE YOUR OUTPUT HERE:
//	for( i = 0; s[i][0]; i++)
//		(count[s[i][0]])++;
//	for(i = 0; i < n; i++){
//		if(max1 < count[s[i][0]]){
//			max1 = count[s[i][0]];
//			s[19][0] = s[i][0];
//		}
//	}
//	for(i = 0; i < n; i++){
//		if(s[i][0] == s[19][0]){
//			maxpos1 = i;
//			break;}
//	}
//	for(i = 0; i < n; i++){
//		if((max2 < count[s[i][0]]) && (count[s[i][0]] <= max1) && (s[i][0] != s[maxpos1][0])){
//			max2 = count[s[i][0]];
//			s[20][0] = s[i][0];
//		}
//	}
//	for(i = 0; i < n; i++){
//		if(s[i][0] == s[20][0]){
//			maxpos2 = i;
//			break;}
//	}
//	if (maxpos1 > maxpos2){
//	for( i = 0; i < max2; i++){
//		printf("%c\n",s[maxpos2][0]);
//		}
//	for( i = 0; i < max1; i++){
//		printf("%c\n",s[maxpos1][0]);
//		}
//	}
//	else{
//		for( i = 0; i < max1; i++){
//		printf("%c\n",s[maxpos1][0]);
//		}
//	for( i = 0; i < max2; i++){
//		printf("%c\n",s[maxpos2][0]);
//	}
//	}
//  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
//  printf("\n");
//  system ("pause");
//  return(0);
//}



























#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n;
	scanf("%d",&n);
int i,a[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}  
int j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n-1;j++){
			if(a[j]<a[i]){
				int tmp=a[j];
					a[j]=a[i];
					a[i]=tmp;
			}
				
		}	
		
	}
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0;i<n;i++){
		if (a[i] % 2 !=0){
			printf("%d\n",a[i]);
		}
	}




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
