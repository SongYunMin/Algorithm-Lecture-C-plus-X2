//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int n, a[11], total = 0;
//bool flag = false;
//
//void DFS(int L, int sum)
//{
//	// total���� ���� �Ѿ�� �̹� ������ �ƴϹǷ� return
//	if (sum > (total / 2)) return;
//	// flag ������ �̿��Ͽ� ���� �´��� �ƴ����� �Ǵ���
//	if (flag == true) return;
//	// Level�� n+1 ����� ��� ���� ����
//	if (L == n + 1) {
//		// DFS�� ��� �� == (��� ���Ҹ� ���� �� - DFS�� ��� ��)
//		if (sum == (total - sum)) {
//			flag = true;
//		}
//
//	}
//	else {
//		// ����Ʈ�� ������ �ؼ�
//		DFS(L + 1, sum + a[L]);		// ���Ҹ� ����Ѵٸ�? (����)
//		DFS(L + 1, sum);			// ���Ҹ� ������� �ʴ´ٸ�? (������)
//	}
//}
//
//int main(void)
//{
//	int i;
//	std::cin >> n;
//	// ���ҵ��� ���� ����
//	for (i = 1; i <= n; i++) {
//		std::cin >> a[i];
//		total += a[i];
//	}
//
//	DFS(1, 0);
//
//	if (flag) std::cout << "YES" << std::endl;
//	else std::cout << "NO" << std::endl;
//
//	return 0;
//}