//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main(void)
//{
//	int n, i, key, lt = 0, rt, mid, tmp;
//
//	std::cin >> n >> key;
//	std::vector<int> a;
//
//	// 배열 입력
//	for (i = 0; i < n; i++) {
//		std::cin >> tmp;
//		a.push_back(tmp);
//	}
//
//	// 정렬
//	sort(a.begin(), a.end());
//
//
//	rt = n - 1;
//	while (lt <= rt) {
//		mid = (lt + rt) / 2;
//		// 바로 찾았다면
//		if (a[mid] == key) {
//			std::cout << mid + 1;
//			return 0;
//		}
//		// 찾으려는 값이 중간값보다 작다면
//		else if (a[mid] > key)rt = mid - 1;
//		// 찾으려는 값이 중간값보다 크다면
//		else lt = mid + 1;
//	}
//
//	// 탐색 실패
//	return -1;
//}
/*
이분 검색은 배열의 양끝을 가리키는 두개의 변수가 필요함 (왼쪽, 오른쪽)
그리고 중간부분을 가리키는 중간변수가 필요하다. 중간변수는 (왼쪽 + 오른쪽) / 2 로구한다.
중간 변수(중간 인덱스)가 key와 같은지 아닌지를 비교하고 같으면 탐색이 종료되고
같지 않으면 중간값이 key보다 큰지 아닌지를 비교하여 왼쪽으로 자를지 오른쪽으로 자를지 비교한다.
자르고 난후 왼쪽 변수든 오른쪽 변수든 (중간 -1), (중간+1) 값을 대입하여 반복한다.
*/