//#include <stdio.h>
//
//
//// ���� ������ �Լ�
//int reverse(int x)
//{
//	int res = 0, tmp;
//	while (x > 0) {
//		tmp = x % 10;
//		res = res * 10 + tmp;
//		x = x / 10;
//	}
//	return res;
//}
//
//// ������ ���� �Ҽ����� Ȯ���ϴ� �Լ�
//bool isPrime(int x)
//{
//	int i;
//	bool flag = true;
//	for (i = 2; i < x; i++) {		// �Ҽ� Ȯ���� 2����
//		if (x % i == 0) {			// �Ҽ����� Ȯ��
//			flag = false;
//			break;
//		}
//	}
//	return flag;
//}
//
//int main(void)
//{
//	int n, num, i, tmp;
//	scanf("%d", &n);
//
//	// n ��ŭ �Է¹���
//	for (i = 1; i <= n; i++) {
//		scanf("%d", &num);
//		tmp = reverse(num);
//		if (isPrime(tmp)) printf("%d ", tmp);
//	}
//
//	return 0;
//}