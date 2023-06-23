#include<stdio.h>
void inputArray(float a[],int n){
   	for (int i=0;i<n;i++){
		printf("a[%d]= ",i);
			scanf("%f",&a[i]);
	}
}
float firstPositivenumber(float a[],int n){
	for( int i=0;i<n;i++){
		if(a[i]>0){
			return a[i];
		}
	
	}
	return -1;
}
float searchMinpositionnumber(float a[],int n){
	float min=firstPositivenumber(a,n);	
	if(min == -1) return -1;
	for(int i=0;i<n;i++){
		if(a[i]>0 && a[i]<min)
			min=a[i];
		}
	return min;
}
main(){
    int n;
	float a[100];
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<=0||n>100);
	inputArray(a,n);
	float t = searchMinpositionnumber(a,n);
	if(t==-1){
		printf("-1");
	}else{
		for(int i=0;i<n;i++){
			if(a[i]==t){
				printf("%d ",i);
			}
		}
	}
	
	return 0;
}