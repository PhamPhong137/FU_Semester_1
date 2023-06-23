#include<stdio.h>
void Inputarray(float a[],int n){
   	for (int i=0;i<n;i++){
		printf("a[%d]= ",i);
			scanf("%f",&a[i]);
	}
}
float searchthefirstpositivenumber(float a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]>0){
			return a[i];
		}
	}
	return -1;
}
main(){
	int n;
	float a[100];
	do{
	printf("Nhap n = ");
	scanf("%d",&n);
	}while(n<=0||n>100);
	Inputarray(a,n);
	float p=(float)searchthefirstpositivenumber(a,n);
	printf("%f",p);
	
	
	
	
	
	
	
	
	
	return 0;
}