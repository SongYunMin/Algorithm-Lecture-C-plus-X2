#include <stdio.h>

int main(void)
{
	int n, i, j, temp, index;
	int a[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n-1; i++) {
		index = i;
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[index]) index = j;
		}
		temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}


	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}


	return 0;
}