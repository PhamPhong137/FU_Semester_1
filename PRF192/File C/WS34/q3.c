#include<stdio.h>
main(){
	int n,k=1;
	int m,i,j;
	do{
		scanf("%d",&n);
	}while(n>=20);
	
	for( i = 1; i <=n; i++){
		for( j = i;j<n;j++){
			printf("  ");
			}
			for( m = 1; m<=i;m++){
				printf("%d ",k);
				k++;
			}
			for( m = 1 ; m<i;m++){
				printf("%d ",k-2);
				k--;
			}
		
		printf("\n");
	}


	
	

                		

	
	
	
	
	
	






	
	return 0;
}
