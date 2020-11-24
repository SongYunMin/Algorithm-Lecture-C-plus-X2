//#include <stdio.h>
//#include <algorithm>
//#include <vector>
//#include <iostream>
//
//int main(void)
//{
//	int n, m, i, p1 = 0, p2 = 0, p3 = 0;
//	
//	std::cin >> n;
//	std::vector<int> a(n);
//	for (i = 0; i < n; i++) {
//		std::cin >> a[i];
//	}
//	// a vector의 처음부터 끝까지 정렬
//	sort(a.begin(), a.end());
//
//	std::cin >> m;
//	std::vector<int> b(m), c(n + m);
//	for (i = 0; i < m; i++) {
//		std::cin >> b[i];
//	}
//	// b vector의 처음부터 끝까지 정렬
//	sort(b.begin(), b.end());
//
//	// 둘중 하나의 포인터가 끝난다면 교집합이 없으므로 종료
//	while (p1 < n && p2 < m) {
//		// 교집합이라면
//		if (a[p1] == b[p2]) {
//			c[p3++] = a[p1++];			// a든 b든 아무거나 넣음
//			p2++;						// 두개 포인터 동시에 증가해줘야 함
//		}
//		else if (a[p1] < b[p2]) p1++;	// 작은쪽을 증가시킴
//		else p2++;						
//	}
//
//	for (i = 0; i < p3; i++) {
//		std::cout << c[i] << " ";
//	}
//
//	return 0;
//}
//
///*
//투 포인트 알고리즘
//세개의 포인터를 만들어서 (A, B, C)세개 배열의 컨트롤에 사용한다.
//두개의 포인터를 비교해서 같은 값이 나온다면 C배열에 넣고 두개의 포인터 다 증가시킨다.
//다르다면 작은값인 포인터를 하나 증가시켜서 다음 값에 비교한다.
//A와 B중 하나가 끝나면 교집합은 없기 때문에 알고리즘을 끝낸다.
//*/