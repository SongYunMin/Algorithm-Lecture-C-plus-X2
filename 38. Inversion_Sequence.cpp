#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

int main(void)
{
	int n, i, j, pos = 0;
	std::cin >> n;
	std::vector<int> InversionSequence(n + 1);
	std::vector<int> OriginalSequence(n + 1);

	// Inversion Sequence �Է�
	for (i = 1; i < n; i++) {
		std::cin >> InversionSequence[i];
	}

	// IS Vector�� �ڿ��� ó������ �ݺ���
	for (i = n; i >= 1; i--) {
		pos = i;	// ���� ��ġ
		// j�� IS[i]�� ������ �ִ� ������ �ݺ� ��
		for (j = 1; j <= InversionSequence[i]; j++) {
			OriginalSequence[pos] = OriginalSequence[pos + 1];
			pos++;
		}
		OriginalSequence[pos] = i;
	}

	// i���� ������ ��
	for (i = 1; i <= n; i++) {
		std::cout << OriginalSequence[i] << " ";
	}


	return 0;
}

/*
	�� �˰����� �ٽ��� IS�� ���� �̿��Ͽ� �ݺ��Ͽ� IS[i]�� ����ŭ
	������ ����� IS[i]�� ����ŭ �ݺ��� ������ �� index�� i���� �־��ָ� ��!
*/