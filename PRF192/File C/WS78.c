#include<stdio.h>
int main() {
	char s[100][20];
	char s1[20];
	int n;
	char t[20];
	char name;
	printf("Enter n : ");
    do{
		scanf("%d", &n);
		
		}while(n<0||n>100);
	
	printf("Enter the name in list : \n");
	for (int i = 0; i < n; i++) {
		printf("s[%d]= ",i);
		scanf("%s",s[i]);
	}
	
   	printf("1-Add a student\n");
	printf("2-Remove a student\n");
	printf("3-Search a student\n");
	printf("4-Print the list in ascending order\n");
	printf("Quit\n");
	printf("Choose menu: ");
    int p;
	scanf("%d", &p);
    switch (p) {	
		case 1:
			if(n==100){
				printf("The student is maximum");	
			}else{
				printf("Enter a name : ");
    			scanf("%s",&s[n]);
				n++;
				printf("After add a student:\n");
			for( int i=0;i<=n;i++){
				printf("%s ",s[i]);
			}
		}
		break;
    	
    	case 2:
			printf("Output index remove: ");
			int index;
			scanf("%d",&index);
			for(int i=index-1;i<n-1;i++){
				s[i][20]=s[i+1][20];
				n--;
			}
			printf("After remove name: \n");
			for( int i=0;i<=n;i++){
				printf("%s ",s[i]);
			}
		break;
   	 	case 3:
    		printf("Enter a student name : ");
    		scanf("%s", &s1);
    		
    		printf("The indexes of name is : ");
			for (int i = 0; i < n; i++) {
    			if(strcmp(s[i],s1)==0) {
    				printf("%d ", i);
				}
			}
    	break;
    	
    	case 4:
    		for (int i = 0; i < n-1; i++) {
      			for (int j = 0; j < n-1; j++) {
        			if (strcmp(s[j], s[j+1]) > 0) {
           			strcpy(t, s[j]);
            		strcpy(s[j], s[j+1]);
            		strcpy(s[j+1], t);
         		}	
      		}
   		}
    		for (int i = 0; i < n; i++) {
      			printf("%s ", s[i]);
   		}
    	break;
    
    	default:
        break;
	}
	
	
    return 0;
}


