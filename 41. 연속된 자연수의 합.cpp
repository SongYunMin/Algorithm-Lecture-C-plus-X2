#include <iostream>
#include <vector>

int main(void)
{
	int n, b = 1, cnt = 0, tmp, i;
	std::cin >> n;
	tmp = n;
	n--;
	while (n > 0) {
		b++;
		n -= b;
		if (n % b == 0) {
			for (i = 1; i < b; i++) {
				std::cout << (n / b) + i << " + ";
			}
			std::cout << (n / b) + i << " = " << tmp << std::endl;
			cnt++;
		}
	}
	std::cout << cnt << std::endl;

	return 0;
}

/*
�� �˰����� ���� ���� ������, Ǫ�� ����� ���� 15��� ���� n�̶�� �����ϰ�, �ΰ��� �и��ϰ� �ʹٸ�
n�� 1�� 2�� ������,(12�� ��) �� ���� 2�� ���� �������� ���غ��� 0�̶�� 2�� ������ ���� 1�� 2�� ���Ѵ�
(1+6) = 7, (2+6) = 8
7 + 8 = 15
3��, 4���� ���������� ������ ������ �̿��ϸ� �ȴ�.
*/