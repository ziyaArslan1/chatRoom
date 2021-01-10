#include <stdio.h>

#include "All.h"

void strTrimLF(char *arr, int len) {
	int i;
	for(i=0;i<len;i++) {
		if(arr[i] == '\n') {
			arr[i] = '\0';
			break;
		}
	}
}

void strOverWrites() {
	printf("\r%s", "> ");
	fflush(stdout);
}
