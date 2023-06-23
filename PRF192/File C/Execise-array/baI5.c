#include<stdio.h>
void Inputarray(float a[],int n){
   	for (int i=0;i<n;i++){
		printf("a[%d]= ",i);
			scanf("%f",&a[i]);
	}
}
float Sumnegativenumber(float a[],int n){
	float sum = 0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			sum = sum + a[i];
		}	
	}
	return sum;
}

main(){
	int n;
	float a[1000];
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
 	}while(n<=0||n>1000);
 	
	Inputarray(a,n);
	
	printf("Sumnegativenumber: %f",Sumnegativenumber(a,n));
}
	