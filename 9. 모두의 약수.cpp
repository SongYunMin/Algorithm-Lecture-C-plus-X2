//#include <stdio.h>
//#include <iostream>
//
//// 1초안에 수행되어야 함
//int cnt[50001];
//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	// 배열에다가 count함 복잡도 매우 감소함.
//	for (i = 1; i <= n; i++) {
//		for (j = i; j <= n; j = j + i) {
//			cnt[j]++;
//		}
//	}
//
//	for (i = 1; i <= n; i++) {
//		printf("%d ", cnt[i]);
//	}
//
//	return 0;
//}
//
//// 아래 방법으로 하면 시간 초과 됨 N^2 Algorithm
////int main(void)
////{
////	int N;
////	int count = 0;
////	scanf("%d", &N);
////
////	for (int i = 1; i <= N; i++) {
////		for (int j = 1; j < N; j++) {
////			if (i % j == 0) {
////				count++;
////			}
////		}
////		printf("%d ", count);
////		count = 0;
////	}
////
////	
////	return 0;
////}