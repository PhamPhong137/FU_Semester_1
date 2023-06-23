#include<stdio.h>










main(){
 int a[100];
 int n;
 scanf("%d",&n);
 for(int i=0;i<n;i++){
 	printf("a[%d]= ",i);
 	scanf("%d",&a[i]); // scanf("%d",a+i);
 }
 int max=a[0];
 for(int i=1;i<n;i++){
 	if(a[i]>max){
 		max=a[i];
	 }
}
printf("Max= %d\n",max);
printf("Display even values: "); 
  for(int i=0;i<n;i++){
  	if(a[i]%2==0){
  		printf("%d ",a[i]);
	  }
}
	
	
	
	
	
	
	
	
	
	return 0;
}