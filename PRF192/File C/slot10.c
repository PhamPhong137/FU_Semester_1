#include<stdio.h>
main(){
//	int x,y;
//	printf("Nhap y:");
//	scanf("%d",&y);
//	if(y>0){
//	 	x=1;
//	 	printf("x=%d",x);
//	}
		
	
	
//	float a;
//	printf("Nhap diem so:");
//	scanf("%f",&a);
//	if(a>=80&&a<=90){
//		a=a+5;
//	}
//	printf("Diem so la:%0.0f ",a);
//	
	
	
//bai1
//int ans=0;
//int i=1;
//int n=5;
//while(i<n){
//	if(i<n/2){
//		ans-=i;
//	}else{
//		ans+=i;
//	}
//	i++;
//}
//printf("%d",ans);

	
//int ans=0;
//int i=1;
//int n=5;
//do{
//	if(i<n/2){
//		ans-=i;
//	}else{
//		ans+=i;
//	}
//	i++;
//}while(i<n);
//printf("%d",ans);	
	
//bai2
int x=1,n=3;
for(int i=0;i<n;i++){
	if(i%2 ==0){
		x*=i+1;
	}else{
	x--;
	if(x==0)
		break;
	}
}
printf("%d",x);

	
//Bai3


//int x=1,n=3;
//for(int i=0;i<n;i++){
//	if(i%2 ==0){
//		x*=i+1;
//	}
//	x--;
//	if(x==0){
//		i=n;
//	}
//	}
//	printf("%d",x);

//Bai4


//int i,x=1,n=5;
//while(i<n,i++){
//	if(i %2==0){
//		x*=i+1;
//		continue;
//	}
//	x--;
//	if(x==0){
//		break;
//	}
//}



//int i,x=1,n=5;
//do{
//	if(i %2==0){
//		x*=i+1;
//		continue;
//	}
//	
//	if(x==0){
//		break;
//	}
//	
//}while(i<n,i++,x--);
//printf("%d",x);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}