#include<stdio.h>
#include<stdbool.h>
void Inputarray(int a[],int n){
   	for (int i=0;i<n;i++){
		printf("a[%d]= ",i);
			scanf("%d",&a[i]);
	}
}
bool perfectnumber(int n){
	int sum=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n) return true;
	return false;
}
int searchlastperfectnumber(int a[],int n){
	for(int i=n-1;i>=0;i--){
		if(perfectnumber(a[i])==true) return i;
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
	int p = searchlastperfectnumber(a,n);
	printf("%d",p);
	
	
	return 0;
}