//#include <stdio.h>
//
//void D(int v)
//{
//	if (v > 7) return;
//	else {
//		// 출력문에 순서에 따라 전위, 중위, 후위 순회의 순서가 바뀐다.
//		printf("%d ", v);
//		D(v * 2);			// 왼쪽 노드
//		D(v * 2 + 1);		// 오른쪽 노드
//	}
//}
//
//int main(void)
//{
//	D(1);
//	return 0;
//}