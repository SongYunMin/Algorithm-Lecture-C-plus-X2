//#include <string>
//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//string solution(string new_id)
//{
//	int i, j;
//	string answer;
//	answer = new_id;
//
//	for (i = 0; i <= answer.size() - 1; i++) {
//		// �빮�� - 1�ܰ�
//		if (answer[i] >= 65 && answer[i] <= 90) {
//			answer[i] -= -32;
//		}
//	}
//
//	// �ҹ���, ����, ��ħǥ, ����, ������ �ƴѰ� ���� ���� - 2�ܰ�
//	for (i = 0; i <= answer.size() - 1; i++) {
//		if (answer[i] != '-' && answer[i] != '_' && answer[i] != '.' &&
//			!(answer[i] >= 97 && answer[i] <= 122) && !(answer[i] >= 48 && answer[i] <= 57))
//		{
//			// ���� : https://jhnyang.tistory.com/116
//			answer.erase(answer.begin() + answer.find(answer[i]));
//			i--;
//		}
//	}
//
//	// 3�ܰ� ���ӵ� '.' ����
//	for (i = 0; i < answer.size() - 1; i++) {
//		for (j = i; j < answer.size() - 1; j++) {
//			if ((answer[i] == '.' && answer[j] == '.') && 
//				(answer[j] == '.' && answer[j + 1] == '.')) {
//				int index = j;
//				answer.erase(answer.begin() + index);
//				j--;
//			}
//		}
//	}
//	// 4�ܰ� ó���� �� '.' ����
//	if (answer[0] == '.') {
//		answer.erase(answer.begin() + 0);
//	}
//	if (answer.size() != 0) {
//		if (answer[answer.size() - 1] == '.') {
//			answer.erase(answer.end() - 1);
//		}
//	}
//
//	// 5�ܰ� �� ���ڿ� üũ (size 0�϶� ����ó��)
//	if (answer.size() == 0) {
//		answer.append(" ");
//	}
//
//	i = 0;
//	do {
//		if (answer[i] == ' ') {
//			answer[i] = 'a';
//		}
//		i++;
//	} while (i < answer.size() - 1);
//
//
//
//	// 6�ܰ� 15�� ���� �� ��ħǥ ����
//	if (answer.size() > 15) {
//		answer.erase(15);
//		if (answer[14] == '.') {
//			answer.erase(answer.end() - 1);
//		}
//	}
//
//	// 7�ܰ� 2�� ���� 
//	// ��ó : https://modoocode.com/307
//	if (answer.size() <= 2) {
//		for (i = answer.size(); i < 3; i++) {
//			char buf = answer[answer.size() - 1];
//			answer += buf;
//		}
//	}
//
//	cout << answer << endl;
//
//	return answer;
//}
//
//int main(void)
//{
//	//std::string a = "q";
//	std::string a = "&$^!JEJQUuq...YE__RM!(@";
//	std::string b = "_34";
//
//	solution(a);
//
//	return 0;
//}