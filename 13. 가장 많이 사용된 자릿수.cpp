//#include <stdio.h>
//
//int ch[10];
//int main(void)
//{
//	int i, digit, max = -247000000, res = 0;
//	char a[101];
//
//	scanf("%s", &a);
//
//	for (i = 0; a[i] != '\0'; i++) {
//		digit = a[i] - 48;				// 48�� ���־�� ��¥ ���ڰ� ��
//		ch[digit]++;					// ���ڸ� ī��Ʈ ��
//	}
//
//	// ch[i]�� ���� ������ ū���� ��µǰ� �Ϸ��� > �� �ƴ϶� ��ȣ�� >= �� �־���
//	for (i = 0; i <= 9; i++) {
//		if (ch[i] >= max) {
//			max = ch[i];
//			res = i;					// ���� ���� 'i' �� �־���� ��
//		}
//	}
//	
//	printf("%d\n", res);
//
//	return 0;
//}