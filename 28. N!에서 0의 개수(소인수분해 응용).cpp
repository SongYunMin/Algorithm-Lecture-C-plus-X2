#include <stdio.h>

/*
���� :
10�� ������ �� �ڿ� 0�� ��� �ٱ� ������ 
���μ� ���ظ� �ؼ� 2�� 5�� ���� ������ �Ǵ��ؼ�(10�� ���)
���� ���� ��ŭ 0�� ���� �ȴ�.
*/
int main(void)
{
	int n, i, j, tmp, cnt1 = 0, cnt2 = 0;
	scanf("%d", &n);

	for (i = 2; i <= n ;  i++) {
		tmp = i;
		j = 2;
		while (1) {
			if (tmp % j == 0) {
				if (j == 2) cnt1++;			// 2��
				else if (j == 5) cnt2++;	// 5�� ����
				tmp = tmp / j;
			}
			else j++;
			if (tmp == 1)break;
		}
	}

	if (cnt1 < cnt2)printf("%d\n", cnt1);
	else printf("%d\n", cnt2);

	return 0;
}