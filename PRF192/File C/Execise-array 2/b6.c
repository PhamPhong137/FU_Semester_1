//Tính tổng các giá trị có chữ số hàng chục là chữ số 5 có trong mảng các số nguyên
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
int socochusohangchuc(int n){
	int r;
	int p=n/10;
	r=p%10;
	return r;
}
void sum(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
	    if(socochusohangchuc(a[i])==5){
	    	sum+=a[i];
		}
	}
	printf("\nSum = %d",sum);
}
int main()
{
   	int a[100],n;
  	printf("Nhap so phan tu: ");
    scanf("%d", &n);
	inputArray(a,n);
	sum(a,n);
}












