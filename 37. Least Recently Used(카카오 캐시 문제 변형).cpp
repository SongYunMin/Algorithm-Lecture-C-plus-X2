//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//
//int main(void)
//{
//	std::vector<int> arr(20);
//	int S, N, pos, i, j, a;
//
//	std::cin >> S >> N;
//
//	for (i = 1; i <= N; i++) {
//		std::cin >> a;
//		pos = -1;
//		// Hit And Miss 판단
//		for (j = 0; j < S; j++) {
//			if (arr[j] == a) {			// Queue에 데이터가 존재한다면
//				pos = j;
//			}
//		}
//		// Miss
//		if (pos == -1) {			// Queue에 데이터가 존재하지 않는다면
//			for (j = S - 1; j >= 1; j--) {
//				arr[j] = arr[j - 1];	// 하나씩 뒤로 땡김
//			}
//		}
//		// Hit
//		else {
//			for (j = pos; j >= 1; j--) {
//				arr[j] = arr[j - 1];
//			}
//		}
//		// 데이터를 땡겨놓고 맨 앞자리에 대상 데이터 삽입 함
//		arr[0] = a;
//	}
//
//	// Print
//	for (i = 0; i < S; i++) {
//		std::cout << arr[i] << " ";
//	}
//
//	return 0;
//}