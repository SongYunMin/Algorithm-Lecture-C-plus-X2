//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int n, a[11], m, cnt;
//
//void DFS(int L, int sum)
//{
//	if (L == n + 1) {
//		if (sum == m) {		// ��ǥ ���� m�� ������?
//			cnt++;			// cnt ����
//		}
//	}
//	else {
//		DFS(L + 1, sum + a[L]);			// ���ϴ� ���
//		DFS(L + 1, sum - a[L]);			// ���� ���
//		DFS(L + 1, sum);				// �Ѵ� ���ϴ� ���
//	}
//}
//
//
//int main(void)
//{
//	int i;
//	std::cin >> n >> m;
//	for (i = 1; i <= n; i++) {
//		std::cin >> a[i];
//	}
//
//	DFS(1, 0);			// ������ 1, 12�� ����� ���� ���� sum�� 0���� ���
//	if (cnt == 0) {
//		std::cout << "-1" << std::endl;
//	}
//	else {
//		std::cout << cnt << std::endl;
//	}
//	return 0;
//}