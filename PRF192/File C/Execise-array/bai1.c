#include<stdio.h>
void Inputarray(float a[],int n){
   	for (int i=0;i<n;i++){
		printf("a[%d]= ",i);
			scanf("%f",&a[i]);
	}
}
float searchmaxinarray(float a[],int n){
	float max = a[0];
		for(int i=0;i<n;i++){
			if(a[i]>max){
				max=a[i];
		}
	}
	return max;
}
int main(){
	float a[100];
	int n;
	do{
	printf("Nhap n: ");
	scanf("%d",&n);
	}while(n<=0||n>100);
	Inputarray(a,n);
	printf("Max = %f",searchmaxinarray(a,n));
		
	
	return 0;
}