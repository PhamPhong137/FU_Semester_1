#include<stdio.h>
void sum(int n){
	int i;
	int s=0;
	for(i=1;i<n;i++){
		s+=i;

	}
	printf("Sum(%d)=%d\n",n,s);
}
int summ(int n){
	int i;
	int s=0;
	for(i=1;i<n;i++){
		s+=i;

	}
	return s;
}
void product(int n){
	int i;
	int p=1;
	for(i=1;i<n;i++){
		p*=i;
	
	}
	printf("Product(%d)= %d\n",n,p);
}

main(){
//function
int n=20; // n as variable

int s= summ(10);
printf("%d\n",s);
sum(10); // function call
product (10);	
}
	
	
	
	
