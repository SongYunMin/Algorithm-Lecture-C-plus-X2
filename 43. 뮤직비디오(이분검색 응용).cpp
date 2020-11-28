//#include <iostream>
//#include <algorithm> 
//int a[1001], n;
//
//int Count(int size)
//{
//	int i, cnt = 1, sum = 0;
//	for (i = 1; i <= n; i++) {
//		// DVD 한개 용량
//		if (sum + a[i] > size) {
//			cnt++;
//			sum = a[i];
//		}
//		else {
//			sum = sum + a[i];
//		}
//	}
//	return cnt;
//}
//
//int main(void)
//{
//	int m, i, lt = 1, rt = 0, mid, res=0;
//
//	std::cin >> n >> m;
//
//	for (i = 1; i <= n; i++) {
//		std::cin >> a[i];
//		rt += a[i];			// 뮤직비디오의 총 시간을 저장
//	}
//
//	// 이분 검색
//	while (lt <= rt) {
//		mid = (lt + rt) / 2;
//		// 답으로 가능할 경우
//		if (Count(mid) <= m) {
//			res = mid;
//			rt = mid - 1;
//
//		}
//		// 답이 가능하지 않을 경우
//		else {
//			lt = mid + 1;
//		}
//	}
//
//	std::cout << res << std::endl;
//
//	return 0;
//}
//
///*
//이분검색을 활용하여 최적의 답을 도출해낸다.
//
//*/