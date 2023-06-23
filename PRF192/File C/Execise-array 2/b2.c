// xoa cac phan tu co chi so k trong mang
#include <stdio.h>
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
void deletevalue(int a[],int n){
	int index;
	printf("\nNhap vi tri muon xoa: \n");
    scanf("%d", &index);
    for(int i=index;i<n-1;i++){
   		a[i]=a[i+1];
    	}
		n--;
	 printf("Mang sau khi xoa:\n");
    for (int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
    
}
main(){
	int a[100],n;
  	printf("Nhap so phan tu: ");
    scanf("%d", &n);
	inputArray(a,n);
	deletevalue(a,n);
}