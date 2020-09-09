//#include <stdio.h>
//
//// 36이라면 36의 제곱근 까지만 반복하면 됨 
//int main(void)
//{
//	int n, i, j, flag, cnt = 0;		// flag : 소수인지 판별
//	scanf("%d", &n);
//	
//	for (i = 2; i <= n; i++) {
//		flag = 1;
//		for (j = 2; j * j <= i; j++) {		// 제곱근 조건
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1) cnt++;
//	}
//
//	printf("%d\n", cnt);
//	return 0;
//}
//
//
//
//
//// 아래 방식은 1초 시간내에 할 수 없음
////int main(void)
////{
////	int n, i, j, flag, cnt = 0;
////	scanf("%d", &n);
////	for (i = 2; i <= n; i++) {
////		flag = 1;
////		for (j = 2; j < i; j++) {
////			if (i % j == 0) {		// 약수가 발견될 경우 더 돌필요 없이 끝내면 됨
////				flag = 0;
////				break;
////			}
////		}
////		if (flag == 1) cnt++;
////	}
////	printf("%d\n", cnt);
////
////	return 0;
////}