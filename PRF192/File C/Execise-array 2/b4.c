//Hãy thêm một giá trị x vào trong mảng tăng dần mà vẫn giữ nguyên tính đơn điệu tăng của mảng
#include<stdio.h>
void inputArray(int a[],int n){
	int i;
	for (i= 0; i< n; i++){
		scanf("%d", &a[i]);
    }
   	printf("Mang da nhap:");
    for (i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}
void sortarray(int a[],int n){
	for (int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nSau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void themgiatri(int a[],int n){
	sortarray(a,n);
	int x,p;
	printf("\nNhap x: ");
	scanf("%d",&x);
	for(int i=n-1;i>=0;i--){
	    if(a[i]<=x){
			p=i+1;
			break;
		}else
		    p=0;
	}
	for(int i=n;i>p;i--){
		a[i]=a[i-1];
	}
	a[p]=x;
	for (int i=0;i<=n;i++){
		printf("%d ",a[i]);
	}
}
//void themgiatri(int a[], int n) {
//	int i;
//	int x;
//	printf("Nhap x= ");
//	scanf("%d", &x);
//	for (i = n - 1; i >= 0; i--) {
//		if (x<arr[i]) {
//			arr[i+1] = arr[i];
//			arr[i]=x;
//		}
//	}	
//	n++;
//    print("Mang safu khi them la : ");
//    for (i = 0; i < n; i++) {
//    	printf("%d ", a[i]);
//    }
//}
main(){
	float a[100];
	int n;
  	printf("Nhap so phan tu: ");
    scanf("%d", &n);
	inputArray(a,n);
	sortarray(a,n);
	themgiatri(a,n);
}