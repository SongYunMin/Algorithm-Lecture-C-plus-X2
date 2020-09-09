#include <stdio.h>

int main(void)
{
	int n, i, j, index, temp, cnt = 0;
	int a[101];

	scanf("%d", &n);			// n
	
	for (i = 0; i < n; i++) {
		scanf("%d",&a[i]);	// 학생의 성적
	}

	// Selection Sort
	for (i = 0; i < n; i++) {
		index = i;
		for (j = i + 1; j < n; j++) {
			if (a[index] < a[j]) index = j;
		}
		temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}

	// 3등 구하기
	for (i = 1; i < n; i++) {
		if (a[i - 1] != a[i]) {
			cnt++;
			if (cnt == 2) {
				printf("%d", a[i]);
				break;
			}
		}
	}

	return 0;
}