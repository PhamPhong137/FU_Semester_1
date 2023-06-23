#include<stdio.h>
main(){
	int a[50];
	int n,x;
	int sum=0;
	int count=0;
	printf("Enter N = ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter X = ");
		scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i]>x){
			sum+=a[i];
			count++;
		}
	}	

	printf("%0.2f",(float)sum/count);
	
	
	
	
	
	






	
	return 0;
}