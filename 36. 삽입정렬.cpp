//#include <stdio.h>
//
//int main(void)
//{
//	int a[100], n, tmp, i, j;
//
//	scanf("%d", &n);				// ������ ���� n �� n�� ���� �Է� ����
//	for (i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	// index�� 1����
//	for (i = 1; i < n; i++) {
//		tmp = a[i];							// tmp ������ i���� �ְ�
//		for (j = i - 1; j >= 0; j--) {		// 
//			// ���� j�� ���� �ٷ� �ڿ��ִ� ������ ũ�ٸ�,
//			if (a[j] > tmp) 
//				a[j + 1] = a[j];		// �ڿ� �� �ڸ��� ���� j�� ����
//			else break;					// �ƴϸ� �ݺ��� Ż��
//		}
//		a[j+1] = tmp;					// break�� �� ������ tmp�� ����
//	}
//
//
//	for (i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}