//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main(void)
//{
//	// bp = Break Point
//	int n, k, pos = 0, bp = 0, cnt = 0, i;
//	std::cin >> n >> k;
//
//	std::vector<int> prince(n + 1);
//
//	while (1) {
//		pos++;
//		if (pos > n) pos = 1;			// 회전을 위해 배열 길이를 넘어가면 1로 변경
//		// 0을 만나면(Out되지 않은 왕자)
//		if (prince[pos] == 0) {
//			cnt++;					
//			if (cnt == k) {				// 카운트가 k값과 같으면
//				prince[pos] = 1;		// 해당 왕자는 Out
//				cnt = 0;				// 카운트 초기화
//				bp++;					// Out된 왕자 수 증가
//			}
//		}
//		if (bp == n - 1) break;
//	}
//
//	// 왕자 출력
//	for (i = 1; i <= n; i++) {
//		if (prince[i] == 0) {
//			printf("%d\n", i);
//			break;
//		}
//	}
//
//	return 0;
//}