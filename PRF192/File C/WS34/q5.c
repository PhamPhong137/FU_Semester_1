#include<stdio.h>
main(){
	int a[10]; 
    int n,i,j,k;
	do{
	scanf("%d",&n);
	} while(n<=0||n>=10);
	for( i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	for( i=0;i<n;i++){
		for( j=0;j<i;j++){
			if(a[i]==a[j]&&a[i]%2!=0){
				for( k=i;k<n-1;k++)
					a[k]=a[k+1];
					n--;
					i--;
			}
		}
	}
	printf("OUTPUT:\n");
	for( i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	
	
	
	
	
	






	
	return 0;
}
