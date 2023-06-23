#include<stdio.h>
void Inputarray(int a[],int n){
   	for (int i=0;i<n;i++){
		printf("a[%d]= ",i);
			scanf("%d",&a[i]);
	}
}
int searchlastevennumber(int a[],int n){
	for(int i=n-1;i>=0;i--){
		if(a[i]%2==0) return a[i];
	}
	return -1;
}

main(){
	int n;
	int a[100];
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<=0||n>100);
	Inputarray(a,n);
	int p=searchlastevennumber(a,n);
	printf("%d",p);
	
	
	
	
	
	
	
	
	return 0;
}