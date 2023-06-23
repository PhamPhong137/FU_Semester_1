#include<stdio.h>
int main(){
	int a,b;
	int product=1;
do{
scanf("%d%d",&a,&b);
	
}while(a<=0||a>10||b<=0||b>10);
if(a>b){
	int temp=a;
	a=b;
	b=temp;
}
for(int i=a;i<=b;i++){
	if(i%2!=0){
		product*=i;
	}
}
printf("\nOUTPUT:\n%d",product);



return 0;
}