#include <stdio.h>
#include <string.h>

int main()
{
	int len,i;
	char str[20];
	printf("Enter your name :\n");
	fgets(str, 20, stdin);
	printf("\nYour name : %s", str);
	len = strlen(str) - 1;
	printf("Length of your name : %d\n",len);
	printf("Your name in reverse :");
	for(i = len;i>=0;i--){
		printf("%c",str[i]);
		}
	printf("\n");
	printf("\n");
	return 0;
}

