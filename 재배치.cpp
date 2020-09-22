#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <time.h>

int n, m;	// ���ġ�� 20�й� = n, ���� �ο� = m
// ���ġ
std::vector<std::string> Relocation(std::vector<std::string> studentCouncil, std::vector<int> num,
	std::vector<std::string> freahMan)
{
	std::vector<int> random_Num(m);
	std::cout << "���ġ �� �л��� ����մϴ�" << std::endl;
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
	std::cout << "���ġ�� �л����� ���� �����ο��� �Է��ϼ���" << std::endl;
	std::cin >> n >> m;

	// Dynamic Allocation (Vector Container)
	std::vector<std::string> freshMan(n);				// ���ġ �ο�
	std::vector<std::string> studentCouncil(m);			// �л�ȸ �ο�
	std::vector<int> studentCouncil_Num(m);

	std::cout << "���� �̸��� �ð��ִ� ��Ƽ ���� �Է��ϼ���. (String, Integer)" << std::endl;
	for (int i = 0; i < m; i++) {
		std::cin >> studentCouncil[i] >> studentCouncil_Num[i];
	}

	std::cout << "����� �ð��ִ� �ο����� �Ʒ��� �����ϴ�." << std::endl;
	for (int i = 0; i < m; i++) {
		std::cout << "�̸� : " << studentCouncil[i] << "  ��Ƽ �� : " << studentCouncil_Num[i] << std::endl;
	}

	std::cout << std::endl;

	std::cout << "��Ƽ �̸��� �Է��Ͽ� �ּ���." << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << i << "��° (��" << n << "��) ";
		std::cin >> freshMan[i];
	}

	std::cout << std::endl;

	std::cout << "���ġ�� ��Ƽ�� ������ �����ϴ�." << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << "�̸� : " << freshMan[i] << std::endl;
	}

	std::cout << std::endl;
	Relocation(studentCouncil, studentCouncil_Num, freshMan);	// ���ġ

	return 0;
}