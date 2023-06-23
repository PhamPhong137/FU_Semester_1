#include <stdio.h>
void inputArray(int a[],int n){
	int i;
	for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
    }
   		printf("Mang da nhap:");
    for (i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
void xoaphantutrung(int a[],int n){
	int x;
	printf("\nNhap x: ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i]!=x){
			printf("%d ",a[i]);
		}
	}
}
int main()
{
   	int a[100],n;
  	printf("Nhap so phan tu: ");
    scanf("%d", &n);
	inputArray(a,n);
	xoaphantutrung(a,n);
}
   