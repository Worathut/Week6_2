#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void theMost();
int main() {
	printf("Enter number : ");
	theMost();
	return 0;
}
void theMost() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	int num[2] = { n1,n2 };
	int max = num[0];
	for (int i = 0; i < 2; i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}
	printf("The most valuable number is %d ", max);
}