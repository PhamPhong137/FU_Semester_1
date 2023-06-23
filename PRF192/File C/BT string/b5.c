#include<stdio.h>
#include<string.h>

int main() {
    char c;
    char s[100];
	scanf("%s", s);
    scanf("%*c%c", &c);
  
    int count = 0;
    
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == c) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}