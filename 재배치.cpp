#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <time.h>

int n, m;	// 재배치될 20학번 = n, 멘토 인원 = m
// 재배치
std::vector<std::string> Relocation(std::vector<std::string> studentCouncil, std::vector<int> num,
	std::vector<std::string> freahMan)
{
	std::vector<int> random_Num(m);
	std::cout << "재배치 될 학생을 배분합니다" << std::endl;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (random_Num[i] == random_Num[j]) {
				i--;
				break;
			}
		}
	}
}

int main(void)
{			
	std::cout << "재배치될 학생수와 기존 멘토인원을 입력하세요" << std::endl;
	std::cin >> n >> m;

	// Dynamic Allocation (Vector Container)
	std::vector<std::string> freshMan(n);				// 재배치 인원
	std::vector<std::string> studentCouncil(m);			// 학생회 인원
	std::vector<int> studentCouncil_Num(m);

	std::cout << "멘토 이름과 맡고있는 멘티 수를 입력하세요. (String, Integer)" << std::endl;
	for (int i = 0; i < m; i++) {
		std::cin >> studentCouncil[i] >> studentCouncil_Num[i];
	}

	std::cout << "멘토와 맡고있는 인원수는 아래와 같습니다." << std::endl;
	for (int i = 0; i < m; i++) {
		std::cout << "이름 : " << studentCouncil[i] << "  멘티 수 : " << studentCouncil_Num[i] << std::endl;
	}

	std::cout << std::endl;

	std::cout << "멘티 이름을 입력하여 주세요." << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << i << "번째 (총" << n << "명) ";
		std::cin >> freshMan[i];
	}

	std::cout << std::endl;

	std::cout << "재배치될 멘티는 다음과 같습니다." << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << "이름 : " << freshMan[i] << std::endl;
	}

	std::cout << std::endl;
	Relocation(studentCouncil, studentCouncil_Num, freshMan);	// 재배치

	return 0;
}