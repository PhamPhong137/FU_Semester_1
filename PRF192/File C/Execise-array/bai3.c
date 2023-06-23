#include<stdio.h>
#include<stdbool.h>
void Inputarray(int a[],int n){
   	for (int i=0;i<n;i++){
		printf("a[%d]= ",i);
			scanf("%d",&a[i]);
	}
}
bool Checkevennumber(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]%2==0&&a[i]<2004) return true;
	}
	return false;
}
main(){
	int n;
	int a[100];
	do{
	printf("Nhap n = ");
 	scanf("%d",&n);
 	}while(n<=0||n>100);
	
	Inputarray(a,n);

	if(Checkevennumber(a,n)){
		printf("true");
	}else{
		printf("false");
	}
	
	
	
	
	
	
	return 0;
}