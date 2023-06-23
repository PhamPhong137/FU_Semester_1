#include<stdio.h>
#define PI 3.14
int main(){
int r;
do{
scanf("%d",&r);
}while(r<=0);
printf("\nOUTPUT:\n%0.2f",PI*2*r);




return 0;
}