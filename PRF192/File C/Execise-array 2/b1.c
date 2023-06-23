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
void insertValue(int a[],int n){
	int index,value,i;
	printf("\nNhap vi tri chen phan tu: \n");
    scanf("%d", &index);
 
    printf("Nhap phan tu muon chen: \n");
    scanf("%d", &value);
	 for (i= n - 1; i>= index-1; i--){
        a[i+1] = a[i];
        }
   a[index] = value;
    n++;
     printf("Mang sau khi chen:\n");
   for (i = 0; i < n; i++)
      printf("%d ", a[i]);
 
}
int main()
{
   	int a[100],n;
  	printf("Nhap so phan tu: ");
    scanf("%d", &n);
	inputArray(a,n);
   
    insertValue(a,n);
 
   return 0;
}