//#include <stdio.h>
//
//int main(void)
//{
//	// �ڸ��� : c �ڸ����� ���� : d
//	int n, sum = 0, c = 1, d = 9, res = 0;
//	scanf("%d", &n);
//	// 0 * 9 �� ����ϱ� ���ڸ����� ������ ���
//	while (sum + d < n) {
//		res = res + (c * d);
//		sum = sum + d;			// sum�� ó���� 9�� ��
//		c++;					// ���ڸ����� ��
//		d = d * 10;				// ���ڸ����� ����
//	}
//
//	res = res + ((n - sum) * c);
//	printf("%d", res);
//
//
//	return 0;
//}