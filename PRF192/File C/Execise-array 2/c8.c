#include <stdio.h>
void inputArray(float a[],int n){
	int i;
	for (i = 0; i < n; i++){
		scanf("%f", &a[i]);
    }
   		printf("Mang da nhap:");
    for (i = 0; i < n; i++){
		printf("%f ", a[i]);
	}
}
void avepositivenumber(float a[],int n){
	int count=0;
	float sum=0;
	float ave;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			count++;
			sum+=a[i];
		}
	}
	if(count ==0){
		printf("\nDon't have positive number");
	}else{
	ave=sum/count;
	printf("\nave= %f",ave);
	}
	
}
int main()
{
   	float a[100];
	   int n;
  	printf("Nhap so phan tu: ");
    scanf("%d", &n);
	inputArray(a,n);
	avepositivenumber(a,n);
}











