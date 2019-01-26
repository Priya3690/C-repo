#include<stdio.h>
int main() {
	int Counter= 1, Count;
	printf("How many natural numbers you want to print?");
	scanf("%d", &Count);
	printf("The natural numbers up to %d are", Count);
	while (Counter <= Count) {
		printf (" %d", Counter);
		Counter = Counter + 1;
	}
	printf (".");
}
