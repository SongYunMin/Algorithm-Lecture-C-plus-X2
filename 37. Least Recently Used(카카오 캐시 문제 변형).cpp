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
		// Hit or Miss �Ǵ�
		for (j = 0; j < s; j++) if (C[j] == a) pos = j;
		// Miss �� ��
		if (pos == -1) {
			for (j = s - 1; j >= 1; j--) C[j] = C[j - 1];
		}
		// Hit �� ��
		else {
			// �ڷ� �ϳ��� ���� (1������ �ݺ�)
			for (j = pos; j >= 1; j--) C[j] = C[j - 1];
		}
		C[0] = a;
	}

	for (i = 0; i < s; i++) {
		printf("%d", C[i]);
	}

	return 0;
}