//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main(void)
//{
//	// bp = Break Point
//	int n, k, pos = 0, bp = 0, cnt = 0, i;
//	std::cin >> n >> k;
//
//	std::vector<int> prince(n + 1);
//
//	while (1) {
//		pos++;
//		if (pos > n) pos = 1;			// ȸ���� ���� �迭 ���̸� �Ѿ�� 1�� ����
//		// 0�� ������(Out���� ���� ����)
//		if (prince[pos] == 0) {
//			cnt++;					
//			if (cnt == k) {				// ī��Ʈ�� k���� ������
//				prince[pos] = 1;		// �ش� ���ڴ� Out
//				cnt = 0;				// ī��Ʈ �ʱ�ȭ
//				bp++;					// Out�� ���� �� ����
//			}
//		}
//		if (bp == n - 1) break;
//	}
//
//	// ���� ���
//	for (i = 1; i <= n; i++) {
//		if (prince[i] == 0) {
//			printf("%d\n", i);
//			break;
//		}
//	}
//
//	return 0;
//}