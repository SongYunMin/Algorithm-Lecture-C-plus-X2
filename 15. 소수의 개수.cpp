//#include <stdio.h>
//
//// 36�̶�� 36�� ������ ������ �ݺ��ϸ� �� 
//int main(void)
//{
//	int n, i, j, flag, cnt = 0;		// flag : �Ҽ����� �Ǻ�
//	scanf("%d", &n);
//	
//	for (i = 2; i <= n; i++) {
//		flag = 1;
//		for (j = 2; j * j <= i; j++) {		// ������ ����
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1) cnt++;
//	}
//
//	printf("%d\n", cnt);
//	return 0;
//}
//
//
//
//
//// �Ʒ� ����� 1�� �ð����� �� �� ����
////int main(void)
////{
////	int n, i, j, flag, cnt = 0;
////	scanf("%d", &n);
////	for (i = 2; i <= n; i++) {
////		flag = 1;
////		for (j = 2; j < i; j++) {
////			if (i % j == 0) {		// ����� �߰ߵ� ��� �� ���ʿ� ���� ������ ��
////				flag = 0;
////				break;
////			}
////		}
////		if (flag == 1) cnt++;
////	}
////	printf("%d\n", cnt);
////
////	return 0;
////}