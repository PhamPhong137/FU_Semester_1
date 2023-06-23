//Tính trung bình nhân các giá trị dương có trong mảng một chiều các số thực
#include <stdio.h>
#include<math.h>
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
void averProduct(float a[], int n){
	int count=0;
	float sum=1;
	float p;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			count++;
			sum*=a[i];
		}
	}

	if(count==0){
		printf("Don't have positive number");
	}else{
		p=pow(sum,(float)1/count);
			printf("\n%f",p);
	}
}
int main()
{
   	float a[100];
	int n;
  	printf("Nhap so phan tu: ");
    scanf("%d", &n);
	inputArray(a,n);
	averProduct(a,n);
}















