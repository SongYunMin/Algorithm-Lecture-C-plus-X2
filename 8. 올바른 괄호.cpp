//#include <stdio.h>
//#include <iostream>
//
//// cnt�� �̿��Ͽ� ���°�ȣ�� ++ �ݴ°�ȣ�� -- �Ͽ� �ϴ� ��� (���� ��� X)
//// �������� cnt�� 0�� �Ǿ��ٰ� �ϴ��� ���鼭 �ݴ� ��ȣ�� �� �������� �ȵȴ�.
//// �ݴ� ��ȣ�� �������ٸ� ���� �Ұ����ϱ� ������ break.
//int main(void)
//{
//	char a[100];
//	int i, cnt = 0;
//	scanf("%s", &a);
//
//	for (i = 0; a[i] != '\0'; i++) {
//		if (a[i] == '(') cnt++;
//		else if (a[i] == ')') cnt--;
//		if (cnt < 0) break;
//	}
//
//	if (cnt == 0) printf("YES\n");
//	else printf("NO");
//
//	return 0;
//}