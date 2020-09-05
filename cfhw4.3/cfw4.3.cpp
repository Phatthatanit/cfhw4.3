#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int i, a, y;
void tri2() {
	for (i = 0; i <= y; i++) {
		for (a = 0; a <= i; a++) {
			printf("* ");
		}
		printf("\n");
	}
	for (i = 1; i <= y; i++) {
		for (a = y; a >= i; a--) {
			printf("* ");
		}
		printf("\n");
	}
}
int main() {
	scanf("%d", &y);
	if (y <= 0) {
		printf("Error");
	}
	else {
		tri2();
	}
	return 0;
}