#include<stdio.h>
#include<string.h>
#include<math.h>

void name(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='a' && s[i]<='z')
			s[i]-=32;
		}
}
int main(){


	char s1[100];
	char s2[100];
	
	scanf("%s%s",s1,s2);
	
	name(s1);
	name(s2);
	
	if(strcmp(s1,s2)==0){
		printf("two people have the same name");
	}else{
		printf("two people don't have same name");
	}
    return 0;
}
