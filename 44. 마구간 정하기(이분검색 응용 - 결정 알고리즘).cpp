//#include <iostream>
//#include <algorithm>
//int n;
//
//// size = 답이 되는지, a[] = 마구간 좌표
//int Count(int size, int a[])
//{
//	int i, cnt = 1, pos = a[1];
//	for (i = 2; i <= n; i++) {
//		// 첫번째 말이 들어간 좌표 - 두번째 말이 들어갈 좌표
//		if (a[i] - pos >= size) {		// 답으로 정한것 보다 크면
//			cnt++;						// 말을 넣는다.
//			pos = a[i];					// 포지션을 교체함(말의 위치 저장)
//		}
//	}
//	return cnt;
//}
//
//int main(void)
//{
//	int m, i, lt = 1, rt = 0, mid, res = 0;
//
//	std::cin >> n >> m;
//	
//	int* a = new int[n + 1];		// 동적으로 배열 잡음
//	for (i = 1; i <= n; i++) {
//		std::cin >> a[i];
//	}
//	std::sort(a + 1, a + n + 1);
//	rt = a[n];
//	// 이분 검색
//	while (lt <= rt) {				// 왼쪽이 오른쪽을 넘어가지 않게
//		mid = (lt + rt) / 2;		// 중간 값을 정하고
//		// 답으로 가능할 경우
//		if (Count(mid, a) >= m) {	// 리턴 값이 값이 m보다 클때
//			res = mid;				// 답 저장
//			lt = mid + 1;			// 오른쪽 다시 세팅
//
//		}
//		// 답이 가능하지 않을 경우
//		else {
//			rt = mid - 1;			// 왼쪽 다시 세팅
//		}
//	}
//
//	std::cout << res << std::endl;
//	delete[] a;
//	return 0;
//}