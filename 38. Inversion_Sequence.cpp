#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

int main(void)
{
	int N, i, j, pos = 0, count = 0, a = 1;
	std::cin >> N;
	std::vector<int> InversionSequence(N);
	std::vector<int> OriginalSequence(N);

	// ���� ���� ����
	for (i = 0; i < N; i++) {
		std::cin >> InversionSequence[i];
	}


	for (i = 0; i < N; i++) {
		std::cout << OriginalSequence[i] << " ";
	}

	return 0;
}