#include <stdio.h>
 int main()
{
   int array[100], index, i, n, value;
   printf("Nhap so phan tu: ");
   scanf("%d", &n);
 
   printf("Nhap phan tu:\n");
        for (i= 0; i< n; i++)
      scanf("%d", &array[i]);
   printf("Mang da nhap:");
        for (i = 0; i < n; i++)
      printf("%d ", array[i]);

   printf("\nNhap vi tri chen phan tu: \n");
   scanf("%d", &index);
 
   printf("Nhap phan tu muon chen: \n");
   scanf("%d", &value);
   for (i= n - 1; i>= index-1; i--){
        array[i+1] = array[i];
        }
   array[index-1] = value;
    n++;
     printf("Mang sau khi chen:\n");
   for (i = 0; i < n; i++)
      printf("%d ", array[i]);
 
   return 0;
}