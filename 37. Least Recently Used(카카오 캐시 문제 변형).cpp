#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int C[20];

int main(void)
{
	int s, n, a, i, j, pos;
	scanf("%d %d", &s, &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &a);
		pos = -1;
		// Hit or Miss 판단
		for (j = 0; j < s; j++) if (C[j] == a) pos = j;
		// Miss 일 때
		if (pos == -1) {
			for (j = s - 1; j >= 1; j--) C[j] = C[j - 1];
		}
		// Hit 일 때
		else {
			// 뒤로 하나씩 땡김 (1까지만 반복)
			for (j = pos; j >= 1; j--) C[j] = C[j - 1];
		}
		C[0] = a;
	}

	for (i = 0; i < s; i++) {
		printf("%d", C[i]);
	}

	return 0;
}