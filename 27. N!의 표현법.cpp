#include <stdio.h>
#include <vector>

/*
input : 5

output : 5! = 3 1 1
*/

int main(void)
{
	int n, i, j, tmp;

	scanf("%d", &n);
	std::vector<int> ch(n+1);

	for (i = 2; i <= n; i++) {
		tmp = i;
		j = 2;
		// 소인수 분해 방법 이용
		// 2에서 나누어 떨어지지 않으면 2의 배수인 4, 6 ... 도 나누어 떨어지지 않음
		while (1) {
			if (tmp % j == 0) {
				tmp = tmp / j;
				ch[j]++;
			}
			else {
				j++;
			}
			if (tmp == 1) break;
		}
	}

	printf("%d! = ", n);
	for (i = 2; i <= n; i++) {
		if (ch[i] != 0)printf("%d ", ch[i]);
	}
	// 이 문제는 N^2 이하로 수행하기 어려움

	return 0;
}