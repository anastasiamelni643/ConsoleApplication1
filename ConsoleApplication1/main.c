#include <stdio.h>
/* 1 задача */
/*int main() {
	int n, orign, revern = 0;
	printf("Print number: ");
	scanf_s("%d", &n);
	orign = n;
	while (n > 0) {
		revern = revern * 10 + (n % 10);
		n = n / 10;
	}
	if (orign == revern) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
	return 0;
}*/
/* 2 задача */
/*int main() {
	int nu;
	printf("Print number: ");
	scanf_s("%d", &nu);
	int steps = 0;
	int max = nu;
	while (nu != 1) {
		if (nu % 2 == 0) {
			nu = nu / 2;
		}
		else {
			nu = nu * 3 + 1;
		}
		steps++;
		if (nu > max) {
			max = nu;
		}
	}
	printf("Steps: %d\n", steps);
	printf("Max: %d\n", max);
	return 0;
}*/
/* 3 задача */
/*int main() {
	int n;
	printf("Print number: ");
	scanf_s("%d", &n);
	int mid = n / 2;
	for (int i = 0; i <= mid; i++) {
		for (int j = 0; j < mid - i; j++) {
			printf(" ");
		}
		printf("*");
		if (i > 0) {
			for (int j = 0; j < (i * 2) - 1; j++) {
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	for (int i = mid - 1; i >= 0; i--) {
		for (int j = 0; j < mid - i; j++) {
			printf(" ");
		}
		printf("*");
		if (i > 0) {
			for (int j = 0; j < (i * 2) - 1; j++) {
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/
/* 4 задача */
/*int main() {
	int matches = 21;
	int p;
	while (matches > 1) {
		printf("Matches left: %d\n", matches);
		printf("Your turn (1-3): ");
		scanf_s("%d", &p);
		matches -= p;
		if (matches > 1) {
			int cmoves = 4 - p;
			matches -= cmoves;
			printf("Computer turn: %d\n", cmoves);
		}
	}
	printf("You lose)\n");
	return 0;
}*/
/* 5 задача */
/*int main() {
	long long m;
	printf("Print number: ");
	scanf_s("%lld", &m);
	printf("Automorf numbers from 1 to %d: \n", m);
	for (int i = 1; i <= m; i++) {
		long long n = i;
		long long square = (long long) i * i;
		int autom = 1;
		while (n > 0) {
			if (n % 10 != square % 10) {
				autom = 0;
				break;
			}
			n = n / 10;
			square = square / 10;
		}
		if (autom) {
			printf("%d\n", i);
		}
	}
	return 0;
}*/