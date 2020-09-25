#include <stdio.h>

int main(void)
{
	int n, tmp, i, cnt = 0, digit;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		tmp = i;
		while (tmp > 0) {
			digit = tmp % 10;			// tmp 를 1자리 수로 분리함
			if (digit == 3) cnt++;		// 3이면 cnt 증가
			tmp = tmp / 10;				// tmp를 나누어서 수 줄임
		}
	}
	
	printf("%d", cnt);

	return 0;
}