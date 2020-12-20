//#include <stdio.h>
//
//int n, ch[11];
//void DFS(int L)
//{
//	int i; 
//
//	// 종료 지점이라면
//	if (L == n + 1) {
//		for (i = 1; i <= n; i++) {
//			// 배열이 1인 경우만 출력 함
//			if (ch[i] == 1) printf("%d", i);
//		}
//		puts("");
//	}
//	// 종료 지점이 아니라면
//	else {
//		ch[L] = 1;			// 왼쪽 자식으로
//		DFS(L + 1);
//		ch[L] = 0;			// 오른쪽 자식으로
//		DFS(L + 1);
//	}
//	// n+1 개의 이진 트리를 그려서 이해하는 것이 좋음
//}
//
//int main(void)
//{
//	scanf("%d", &n);
//	DFS(1);				// 시작 레벨
//
//	return 0;
//}