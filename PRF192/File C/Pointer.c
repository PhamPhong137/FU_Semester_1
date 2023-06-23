//#include<stdio.h>
//main(){
//	int a=5,b=6;
//	printf("address:%u , value: %d\n",&a,a);
//	printf("address:%u , value: %d\n",&b,b);


//int n=7,m=8;
//int* p1= &n, *p2=&m;
//*p1 +=12-m+ (*p2);
//printf("%d",*p1);
//*p2 = m + n- 2*(*p1);
//printf("%d\n",*p2);
//printf("%d", m+n); 


//int n=7, m=8;
//int* p1= &n, *p2=&m;
//*p1 +=5 + 3*(*p2) – n ;
//*p2 = 5*(*p1) – 4*m + 2*n;
//printf("%d %d",m,n);


//#include<stdio.h>
//void swap1(int x,int y){
//	int t=x;
//	x=y;
//	y=t;
//}
//int main(){
//	int a=5,b=7;
//	printf("a=%d,b=%d\n",a,b);
//	swap1(a,b);
//	printf("a=%d,b=%d",a,b);
//	return 0;
//}

//#include<stdio.h>
//void swap2(int *px,int *py){
//	int t=*px;
//	*px=*py;
//	*py=t;
//}
//int main(){
//	int a=5,b=7;
//	printf("a=%d,b=%d\n",a,b);
//	swap2(&a,&b);
//	printf("a=%d,b=%d",a,b);
//	return 0;
//}

#include <stdio.h>
int main()
{  
	int n2= 10;
   int n1= 6;
   int n0= 5;
   printf("n2=%d, n1=%d, n0= %d\n", n2, n1, n0);
   int* p = &n1;
   *p=9;
   p++;
   *p=15;
   p--;
   p--;
   *p=-3;
   printf("n2=%d, n1=%d, n0=%d\n", n2, n1, n0);
  
   return 0;
}











