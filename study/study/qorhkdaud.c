#include <stdio.h>
#include<stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

void main() {
	char str[101];
	char seps[] = " \t";
	char temp[16];
	char *tk, *token[100], *tmp;
	int i=0,j=0,k=1;
	gets(str);
	tk = strtok(str, seps);
	while (tk != NULL) {
		//puts(tk);
		token[i] = tk;
		i++;
		tk = strtok(NULL, seps);
	}
	//printf("%d", i);
	tmp = malloc(sizeof(token));

	for (j = 0; j < i; j++) {
		for (k = j+1; k < i; k++) {
			if (strlen(token[j]) > strlen(token[k])) {
				tmp = token[k];
				token[k] = token[j];
				token[j] = tmp;
			}
			else if (strlen(token[j]) == strlen(token[k])) {
				if (strcmp(token[j], token[k]) == 1) {
					tmp = token[k];
					token[k] = token[j];
					token[j] = tmp;
				}
			}
		}
	}

	for (j = 0; j < i; j++) {
		puts(token[j]);
	}

	//for (i = 0; (str[i] = getchar()) != '\n'; i++);

	system("pause");
}
