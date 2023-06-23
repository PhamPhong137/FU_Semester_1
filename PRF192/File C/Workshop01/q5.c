#include<stdio.h>
int main(){
int a,b;
int mu=1;
scanf("%d%d",&a,&b);
for(int i=1;i<=b;i++){
	mu*=a;
}
printf("\nOUTPUT:\n%d",mu);




return 0;
}