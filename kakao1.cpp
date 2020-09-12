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
//		// 대문자 - 1단계
//		if (answer[i] >= 65 && answer[i] <= 90) {
//			answer[i] -= -32;
//		}
//	}
//
//	// 소문자, 숫자, 마침표, 빼기, 밑줄이 아닌것 전부 삭제 - 2단계
//	for (i = 0; i <= answer.size() - 1; i++) {
//		if (answer[i] != '-' && answer[i] != '_' && answer[i] != '.' &&
//			!(answer[i] >= 97 && answer[i] <= 122) && !(answer[i] >= 48 && answer[i] <= 57))
//		{
//			// 참고 : https://jhnyang.tistory.com/116
//			answer.erase(answer.begin() + answer.find(answer[i]));
//			i--;
//		}
//	}
//
//	// 3단계 연속된 '.' 제거
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
//	// 4단계 처음과 끝 '.' 제거
//	if (answer[0] == '.') {
//		answer.erase(answer.begin() + 0);
//	}
//	if (answer.size() != 0) {
//		if (answer[answer.size() - 1] == '.') {
//			answer.erase(answer.end() - 1);
//		}
//	}
//
//	// 5단계 빈 문자열 체크 (size 0일때 예외처리)
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
//	// 6단계 15자 제한 및 마침표 제거
//	if (answer.size() > 15) {
//		answer.erase(15);
//		if (answer[14] == '.') {
//			answer.erase(answer.end() - 1);
//		}
//	}
//
//	// 7단계 2자 조건 
//	// 출처 : https://modoocode.com/307
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