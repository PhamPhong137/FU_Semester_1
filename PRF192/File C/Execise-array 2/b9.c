//Tính trung bình cộng các giá trị lớn hơn giá trị x trong mảng một chiều các số thực.
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
void aver(float a[],int n){
	float aver;
	int x;
	int count = 0;
	float sum=0;
	printf("\nNhap x: ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i]>x){
			count++;
			sum+=a[i];
		}
	}
	if(count == 0){
		printf("\nDon't have value more than x");
	}else{
		aver=sum/count;
		printf("%f",aver);
	}
}
int main()
{
   	float a[100];
	int n;
  	printf("Nhap so phan tu: ");
    scanf("%d", &n);
	inputArray(a,n);
	aver(a,n);
}











