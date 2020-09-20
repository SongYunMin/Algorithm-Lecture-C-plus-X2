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
		tmp = i;					// i를 건드리면 안되기 때문에 tmp 저장
		j = 2;
		// 소인수 분해 방법 이용
		// 2에서 나누어 떨어지지 않으면 2의 배수인 4, 6 ... 도 나누어 떨어지지 않음
		while (1) {
			if (tmp % j == 0) {		// tmp 와 j가 나누어 떨어진다면
				tmp = tmp / j;		// 소인수 분해
				ch[j]++;			// 배열에 저장
			}
			else {
				j++;				// 나누어 떨어지지 않으면 j 증가
			}
			if (tmp == 1) break;	// tmp 가 1일때 까지 나눔
		}
	}

	// 출력
	printf("%d! = ", n);
	for (i = 2; i <= n; i++) {
		if (ch[i] != 0)printf("%d ", ch[i]);
	}
	// 이 문제는 N^2 이하로 수행하기 어려움

	return 0;
}