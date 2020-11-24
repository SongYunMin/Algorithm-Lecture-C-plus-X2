#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>

int a[101], b[101], c[300];

int main(void)
{
	int n, m, i, p1 = 1, p2 = 1, p3 = 1;

	// A, B �迭 �Է� ����
	std::cin >> n;
	for (i = 1; i <= n; i++) {
		std::cin >> a[i];
	}

	std::cin >> m;
	for (i = 1; i <= m; i++) {
		std::cin >> b[i];
	}

	while (p1 <= n && p2 <= m) {
		// a�� b�迭�� ������(index)�� ���� ���� ���� c�迭�� �ִ´�
		if (a[p1] < b[p2]) {
			c[p3++] = a[p1++];
		}
		else {
			c[p3++] = b[p2++];
		}
	}
	// �����ִ� ��� ���� c���ٰ� �ִ´�
	while (p1 <= n) c[p3++] = a[p1++];
	while (p2 <= m) c[p3++] = b[p2++];


	for (i = 1; i < p3; i++) {
		std::cout << c[i] << " ";
	}

	return 0;
}

/*
A, B �迭�� C(��ĥ �迭)�� ��ģ��.
ó������ ����Ʈ�� ����Ű�� ������ ������ 3�� �ʿ��� 
�� �����ʹ� �迭���� ù��°�� ����Ű�� ����
�׸��� a������ b�������� ���� ���� C���ٰ� ������
������(a, b)�� C�� ���Ե� �迭�� �����ʹ� index�� �����ϰ�
������ �����Ϳ� ������������(b) ������ �� �ٽ� ���Ͽ� �������� �ִ´�
*/