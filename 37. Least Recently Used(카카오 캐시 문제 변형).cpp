//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//
//int main(void)
//{
//	std::vector<int> arr(20);
//	int S, N, pos, i, j, a;
//
//	std::cin >> S >> N;
//
//	for (i = 1; i <= N; i++) {
//		std::cin >> a;
//		pos = -1;
//		// Hit And Miss �Ǵ�
//		for (j = 0; j < S; j++) {
//			if (arr[j] == a) {			// Queue�� �����Ͱ� �����Ѵٸ�
//				pos = j;
//			}
//		}
//		// Miss
//		if (pos == -1) {			// Queue�� �����Ͱ� �������� �ʴ´ٸ�
//			for (j = S - 1; j >= 1; j--) {
//				arr[j] = arr[j - 1];	// �ϳ��� �ڷ� ����
//			}
//		}
//		// Hit
//		else {
//			for (j = pos; j >= 1; j--) {
//				arr[j] = arr[j - 1];
//			}
//		}
//		// �����͸� ���ܳ��� �� ���ڸ��� ��� ������ ���� ��
//		arr[0] = a;
//	}
//
//	// Print
//	for (i = 0; i < S; i++) {
//		std::cout << arr[i] << " ";
//	}
//
//	return 0;
//}