#include<stdio.h>
void Inputarray(int a[],int n){
   	for (int i=0;i<n;i++){
		printf("a[%d]= ",i);
			scanf("%d",&a[i]);
	}
}
int searchmin(int a[],int n){
	int min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min)
		min=a[i];
	}
	return min;
}
void searchindexmin(int a[],int n){
	int p=searchmin(a,n);
	for(int i=0;i<n;i++){
		if(a[i]==p){
			printf("%d ",i);
		}
	}
}
int main(){
	int n;
	int a[100];
	do{
	printf("Nhap n = ");
	scanf("%d",&n);
	}while(n<=0||n>100);
	
	Inputarray(a,n);
	printf("The index min: ");
	searchindexmin(a,n);

	
	
	
	return 0;
}