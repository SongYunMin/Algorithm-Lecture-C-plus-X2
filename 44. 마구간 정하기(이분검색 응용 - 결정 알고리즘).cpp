//#include <iostream>
//#include <algorithm>
//int n;
//
//// size = ���� �Ǵ���, a[] = ������ ��ǥ
//int Count(int size, int a[])
//{
//	int i, cnt = 1, pos = a[1];
//	for (i = 2; i <= n; i++) {
//		// ù��° ���� �� ��ǥ - �ι�° ���� �� ��ǥ
//		if (a[i] - pos >= size) {		// ������ ���Ѱ� ���� ũ��
//			cnt++;						// ���� �ִ´�.
//			pos = a[i];					// �������� ��ü��(���� ��ġ ����)
//		}
//	}
//	return cnt;
//}
//
//int main(void)
//{
//	int m, i, lt = 1, rt = 0, mid, res = 0;
//
//	std::cin >> n >> m;
//	
//	int* a = new int[n + 1];		// �������� �迭 ����
//	for (i = 1; i <= n; i++) {
//		std::cin >> a[i];
//	}
//	std::sort(a + 1, a + n + 1);
//	rt = a[n];
//	// �̺� �˻�
//	while (lt <= rt) {				// ������ �������� �Ѿ�� �ʰ�
//		mid = (lt + rt) / 2;		// �߰� ���� ���ϰ�
//		// ������ ������ ���
//		if (Count(mid, a) >= m) {	// ���� ���� ���� m���� Ŭ��
//			res = mid;				// �� ����
//			lt = mid + 1;			// ������ �ٽ� ����
//
//		}
//		// ���� �������� ���� ���
//		else {
//			rt = mid - 1;			// ���� �ٽ� ����
//		}
//	}
//
//	std::cout << res << std::endl;
//	delete[] a;
//	return 0;
//}