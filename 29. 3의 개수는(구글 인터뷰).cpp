#include <stdio.h>

int main(void)
{
	int n, tmp, i, cnt = 0, digit;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		tmp = i;
		while (tmp > 0) {
			digit = tmp % 10;			// tmp �� 1�ڸ� ���� �и���
			if (digit == 3) cnt++;		// 3�̸� cnt ����
			tmp = tmp / 10;				// tmp�� ����� �� ����
		}
	}
	
	printf("%d", cnt);

	return 0;
}