//#include <iostream>
//#include <string>
//#include <vector>
//
///*
//1�� �����ڰ� ��� ���: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
//2�� �����ڰ� ��� ���: 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
//3�� �����ڰ� ��� ���: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...
//*/
////
//// Return : ������ ���� ���� ���� ���
//// Answers : ����
//std::vector<int> solution(std::vector<int> answers)
//{
//	std::vector<int> A_array{ 1,2,3,4,5 };
//	std::vector<int> B_array{ 2,1,2,3,2,4,2,5 };
//	std::vector<int> C_array{ 3,3,1,1,2,2,4,4,5,5 };
//	int A_len = 0, B_len = 0, C_len = 0;
//
//	std::vector<int> result;
//	int A_count = 0, B_count = 0, C_count = 0;
//
//	// ���交�� ���� / A�迭 ����
//	if (answers.size() % A_array.size() != 0) {
//		A_len = answers.size() / A_array.size() + 1;
//	}
//	else {
//		A_len = answers.size() / A_array.size();		// �� ������ ������
//	}
//	// ���交�� ���� / B�迭 ����
//	if (answers.size() % B_array.size() != 0) {
//		B_len = answers.size() / B_array.size() + 1;
//	}
//	else {
//		B_len = answers.size() / B_array.size();
//	}
//	// ���交�� ���� / C�迭 ����
//	if (answers.size() % C_array.size() != 0) {
//		C_len = answers.size() / C_array.size() + 1;
//	}
//	else {
//		C_len = answers.size() / C_array.size();
//	}
//
//	// �迭 �̾� ����
//	for (int i = 1; i < A_len; i++) {
//		A_array.insert(A_array.end(), A_array.begin(), A_array.end());
//	}
//	for (int i = 1; i < B_len; i++) {
//		B_array.insert(B_array.end(), B_array.begin(), B_array.end());
//	}
//	for (int i = 1; i < C_len; i++) {
//		C_array.insert(C_array.end(), C_array.begin(), C_array.end());
//	}
//
//	for (int i = 0; i < answers.size(); i++) {
//		if (answers[i] == A_array[i]) {
//			A_count++;
//		}
//	}
//
//	for (int i = 0; i < answers.size(); i++) {
//		if (answers[i] == B_array[i]) {
//			B_count++;
//		}
//	}
//
//	for (int i = 0; i < answers.size(); i++) {
//		if (answers[i] == C_array[i]) {
//			C_count++;
//		}
//	}
//
//
//	
//
//
//
//	return result;
//}
//
//
//int main(void)
//{
//	std::vector<int> test;
//	test.push_back(1);
//	test.push_back(2);
//	test.push_back(3);
//	test.push_back(4);
//	test.push_back(5);
//	solution(test);
//
//
//	return 0;
//}