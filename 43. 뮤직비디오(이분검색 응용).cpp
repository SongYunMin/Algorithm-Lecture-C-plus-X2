//#include <iostream>
//#include <algorithm> 
//int a[1001], n;
//
//int Count(int size)
//{
//	int i, cnt = 1, sum = 0;
//	for (i = 1; i <= n; i++) {
//		// DVD �Ѱ� �뷮
//		if (sum + a[i] > size) {
//			cnt++;
//			sum = a[i];
//		}
//		else {
//			sum = sum + a[i];
//		}
//	}
//	return cnt;
//}
//
//int main(void)
//{
//	int m, i, lt = 1, rt = 0, mid, res=0;
//
//	std::cin >> n >> m;
//
//	for (i = 1; i <= n; i++) {
//		std::cin >> a[i];
//		rt += a[i];			// ���������� �� �ð��� ����
//	}
//
//	// �̺� �˻�
//	while (lt <= rt) {
//		mid = (lt + rt) / 2;
//		// ������ ������ ���
//		if (Count(mid) <= m) {
//			res = mid;
//			rt = mid - 1;
//
//		}
//		// ���� �������� ���� ���
//		else {
//			lt = mid + 1;
//		}
//	}
//
//	std::cout << res << std::endl;
//
//	return 0;
//}
//
///*
//�̺а˻��� Ȱ���Ͽ� ������ ���� �����س���.
//
//*/