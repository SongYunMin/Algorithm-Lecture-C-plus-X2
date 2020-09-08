#include <stdio.h>

// 각 자릿수의 합을 구한 다음 return
int digit_sum(int x)
{
	int tmp, sum = 0;
	while (x > 0) {
		tmp = x % 10;		// 125 라면 5
		sum += tmp;
		x = x / 10;
	}
	return sum;
}

int main(void)
{
	int n, num, i, sum, max = -2147000000, res;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		sum = digit_sum(num);
		if (sum > max) {
			max = sum;
			res = num;
		}
		else if (sum == max) {
			if (num > res) {
				res = num;
			}
		}

	}

	printf("%d\n", res);
	return 0;
}