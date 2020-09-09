//#include <stdio.h>
//
//
//// 수를 뒤집는 함수
//int reverse(int x)
//{
//	int res = 0, tmp;
//	while (x > 0) {
//		tmp = x % 10;
//		res = res * 10 + tmp;
//		x = x / 10;
//	}
//	return res;
//}
//
//// 뒤집은 수가 소수인지 확인하는 함수
//bool isPrime(int x)
//{
//	int i;
//	bool flag = true;
//	for (i = 2; i < x; i++) {		// 소수 확인은 2부터
//		if (x % i == 0) {			// 소수인지 확인
//			flag = false;
//			break;
//		}
//	}
//	return flag;
//}
//
//int main(void)
//{
//	int n, num, i, tmp;
//	scanf("%d", &n);
//
//	// n 만큼 입력받음
//	for (i = 1; i <= n; i++) {
//		scanf("%d", &num);
//		tmp = reverse(num);
//		if (isPrime(tmp)) printf("%d ", tmp);
//	}
//
//	return 0;
//}