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

	// Inversion Sequence 입력
	for (i = 1; i < n; i++) {
		std::cin >> InversionSequence[i];
	}

	// IS Vector의 뒤에서 처음까지 반복함
	for (i = n; i >= 1; i--) {
		pos = i;	// 시작 위치
		// j가 IS[i]가 가지고 있는 값까지 반복 함
		for (j = 1; j <= InversionSequence[i]; j++) {
			OriginalSequence[pos] = OriginalSequence[pos + 1];
			pos++;
		}
		OriginalSequence[pos] = i;
	}

	// i부터 찍어줘야 함
	for (i = 1; i <= n; i++) {
		std::cout << OriginalSequence[i] << " ";
	}


	return 0;
}

/*
	이 알고리즘의 핵심은 IS의 값을 이용하여 반복하여 IS[i]의 값만큼
	앞으로 떙기고 IS[i]의 값만큼 반복이 끝나면 그 index에 i값을 넣어주면 됨!
*/