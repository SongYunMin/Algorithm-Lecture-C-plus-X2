//#include <stdio.h>
//
//int main(void)
//{
//	int a[100], n, tmp, i, j;
//
//	scanf("%d", &n);				// 원소의 갯수 n 과 n개 원소 입력 받음
//	for (i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	// index는 1부터
//	for (i = 1; i < n; i++) {
//		tmp = a[i];							// tmp 변수에 i값을 넣고
//		for (j = i - 1; j >= 0; j--) {		// 
//			// 현재 j의 값이 바로 뒤에있는 값보다 크다면,
//			if (a[j] > tmp) 
//				a[j + 1] = a[j];		// 뒤에 값 자리에 현재 j값 삽입
//			else break;					// 아니면 반복문 탈출
//		}
//		a[j+1] = tmp;					// break된 뒷 지점에 tmp값 삽입
//	}
//
//
//	for (i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}