#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>

int a[101], b[101], c[300];

int main(void)
{
	int n, m, i, p1 = 1, p2 = 1, p3 = 1;

	// A, B 배열 입력 받음
	std::cin >> n;
	for (i = 1; i <= n; i++) {
		std::cin >> a[i];
	}

	std::cin >> m;
	for (i = 1; i <= m; i++) {
		std::cin >> b[i];
	}

	while (p1 <= n && p2 <= m) {
		// a와 b배열의 포인터(index)의 값중 작은 값을 c배열에 넣는다
		if (a[p1] < b[p2]) {
			c[p3++] = a[p1++];
		}
		else {
			c[p3++] = b[p2++];
		}
	}
	// 남아있는 모든 값을 c에다가 넣는다
	while (p1 <= n) c[p3++] = a[p1++];
	while (p2 <= m) c[p3++] = b[p2++];


	for (i = 1; i < p3; i++) {
		std::cout << c[i] << " ";
	}

	return 0;
}

/*
A, B 배열을 C(합칠 배열)에 합친다.
처음에는 포인트를 가리키는 포인터 변수가 3개 필요함 
각 포인터는 배열들의 첫번째를 가리키고 있음
그리고 a포인터 b포인터중 작은 값을 C에다가 증가함
포인터(a, b)중 C에 삽입된 배열의 포인터는 index가 증가하고
증가한 포인터와 증가하지않은(b) 포인터 중 다시 비교하여 작은값을 넣는다
*/