#include<stdio.h>
void Inputarray(float a[],int n){
   	for (int i=0;i<n;i++){
		printf("a[%d]= ",i);
			scanf("%f",&a[i]);
	}
}

float searchminpositivenumber(float a[],int n){
	float min;
	int i;
	int count=0;
	for( i=0;i<n;i++){
		if(a[i]>0){
			count++;
			min=a[i];
			break;
		}
	}
	if(count!=0){
		
		for( i=i+1;i<n;i++){
			if(a[i]>0 && a[i]<min){
				min=a[i];
			}
		}
		return min;
	}	
	return -1;
}
main(){
	int n;
	float a[100];
	do{
	printf("Nhap n = ");
	scanf("%d",&n);
	}while(n<=0||n>100);
	Inputarray(a,n);
	int p = searchminpositionnumber(a,n);
	printf("%d",p);
	
	
	
	
	
	
	
	
	return 0;
}