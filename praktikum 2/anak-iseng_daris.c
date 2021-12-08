#include<stdio.h>
#include<string.h>
 
int main(){
 
	char key[30], s[50], temp, junk;
	int i, n, j;
	scanf("%s", key);
	scanf("%d", &n);
 
	for (i = 0; i < n; i++){
		scanf("%c",&junk);
		scanf("%[^\n]", s);
		for (j = 0; j < strlen(s); j++){
			if (s[j] == ' '){
				printf(" ");
				continue;
			}
			temp = key[s[j] - 'a'];
			printf("%c", temp);
		}
		printf("\n");
	}
	return 0;
}