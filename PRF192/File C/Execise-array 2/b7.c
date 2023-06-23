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
int chusodautien(int n){
	int r;
	while(n>0||n<0){
		r=n%10;
		n=n/10;
	}
	return r;
}
void sum(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		if(chusodautien(a[i])%2==0){
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