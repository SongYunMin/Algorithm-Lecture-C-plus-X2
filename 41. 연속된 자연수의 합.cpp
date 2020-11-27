#include <iostream>
#include <vector>

int main(void)
{
	int n, b = 1, cnt = 0, tmp, i;
	std::cin >> n;
	tmp = n;
	n--;
	while (n > 0) {
		b++;
		n -= b;
		if (n % b == 0) {
			for (i = 1; i < b; i++) {
				std::cout << (n / b) + i << " + ";
			}
			std::cout << (n / b) + i << " = " << tmp << std::endl;
			cnt++;
		}
	}
	std::cout << cnt << std::endl;

	return 0;
}

/*
이 알고리즘은 기초 수리 문제로, 푸는 방법은 만약 15라는 수가 n이라고 가정하고, 두개로 분리하고 싶다면
n을 1과 2를 빼본다,(12가 됨) 그 수를 2로 나눈 나머지를 구해보고 0이라면 2로 나누고 각각 1과 2에 더한다
(1+6) = 7, (2+6) = 8
7 + 8 = 15
3개, 4개도 마찬가지로 나머지 연산을 이용하면 된다.
*/