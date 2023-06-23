#include<stdio.h>
int main(){
//	int a=1;
//	//c1
//	do{
//		printf("%d\n",a);
//		a++;
//	}while(a<4);
//	//c2
//	while(a<4){
//		printf("%d\n",a);
//		a++;
//	}
//	//c3
//	for(;a<4;a++){
//		printf("%d\n",a);
//	}
	

int a;

//do{
//   printf("Nhap a:");
//	scanf("%d",&a);
//	if(a<1 || a>5)
//	printf("Moi ban nhap lai\n");
//}while(a<1 || a>5);
//printf("%d",a);
//


	
	printf("Nhap a:");
	scanf("%d",&a);	
while(a<1 || a>5){
	printf("Moi ban nhap lai\n");
	scanf("%d",&a);
}	
printf("%d",a);
	
	
	
	
	
	
	return 0;
}