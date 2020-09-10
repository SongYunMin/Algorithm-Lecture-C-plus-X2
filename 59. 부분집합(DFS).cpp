#include <stdio.h>

int main(void)
{
	int n, i, j, index, temp;
	int a[101];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n-1; j++) {
			// 앞이 양수고 뒤에가 음수면 Swap
			if (a[j] > 0 && a[j + 1] < 0) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}

		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}