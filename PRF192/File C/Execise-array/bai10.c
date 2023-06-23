#include<stdio.h>
void Inputarray(int a[],int n){
   	for (int i=0;i<n;i++){
		printf("a[%d]= ",i);
			scanf("%d",&a[i]);
	}
}
int searchindexfirstevennumber(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]%2==0) return i;
	}
	return -1;
}

main(){
	int n;
	int a[100];
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<0||n>100);
	Inputarray(a,n);
	int p=searchindexfirstevennumber(a,n);
	printf("%d",p);
	
	
	return 0;
	
}