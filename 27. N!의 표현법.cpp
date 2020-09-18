#include <stdio.h>
#include <vector>

/*
input : 5

output : 5! = 3 1 1
*/

int main(void)
{
	int n, i, j, tmp;

	scanf("%d", &n);
	std::vector<int> ch(n+1);

	for (i = 2; i <= n; i++) {
		tmp = i;
		j = 2;
		// ���μ� ���� ��� �̿�
		// 2���� ������ �������� ������ 2�� ����� 4, 6 ... �� ������ �������� ����
		while (1) {
			if (tmp % j == 0) {
				tmp = tmp / j;
				ch[j]++;
			}
			else {
				j++;
			}
			if (tmp == 1) break;
		}
	}

	printf("%d! = ", n);
	for (i = 2; i <= n; i++) {
		if (ch[i] != 0)printf("%d ", ch[i]);
	}
	// �� ������ N^2 ���Ϸ� �����ϱ� �����

	return 0;
}