#include<stdio.h>
#include<string.h>
int main(){
	char s1[100]="Today is Tuesday.";
	char s2[100]={'T','o','d','a','y'};
	char s3[100];
	char s4[100];
	scanf("%[^\n]",s4);
	scanf("%s", s3);
	
	printf("S1= %s\n",s1);
	printf("S2= %s\n",s2);
	printf("S3= %s\n",s3);
	printf("S4= %s\n",s4);
	
	int len = strlen(s4);
	printf("%d",len);
	strcpy(s3,s4);
	printf("\nS3= %s\n",s3);
	
	s3[1]='1';
	printf("S3= %s\n",s3);
	int i;
	for(i=0;i<len;i++){
		if(s4[i]>=65 && s4[i]<=90)
			s4[i]+=32;
	}
	printf("S4= %s\n",s4);
	
	
	
}