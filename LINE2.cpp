//#include <iostream>
//#include <stdio.h>
//#include <vector>
//
//// ���� ��ȣ�� ��Ÿ�� ball, �������� ����� ��� order
//std::vector<int> solution(std::vector<int> ball, std::vector<int> order)
//{
//	std::vector<int> waitQueue;
//	std::vector<int> answer;
//	int i, j, LorR = -1;
//	for (i = 0; i <= order.size()-1; i++) {
//		for (j = 0; j <= ball.size()-1; j++) {
//			if (order[i] == ball[j]) {		// ��ɾ�� �����Ǵ� ���� Ž��
//				if (j == ball.size()-1 || j == 0) {		// ť�� ó���� �������� ���?
//					answer.push_back(ball[j]);
//					ball.erase(ball.begin() + j);
//					if (!waitQueue.empty()) {			// ���ť�� ������� �ʴٸ�
//						if (waitQueue[0] == ball.size() - 1 || waitQueue[0] == ball[0]) {		// ���ť�� ���Ұ� ball�� �������̶��
//							
//							answer.push_back(waitQueue[0]);
//							//ball.erase(ball.begin() + waitQueue[0]);
//							waitQueue.pop_back();
//						}
//					}
//				}
//				else {									// ó���� �������� �ƴ϶��?
//					if (ball.size() / 2 < ball[j]) {
//						waitQueue.push_back(ball[j]);
//					}
//					else {
//						waitQueue.insert(waitQueue.begin(), ball[i]);
//					}
//					break;
//				}
//				break;
//			}
//		}
//	}
//
//	for (i = 0; i < answer.size(); i++) {
//		std::cout << answer[i] << std::endl;
//	}
//	
//	return answer;
//}
//
//int main(void)
//{
//
//	std::vector<int> ball = { 1,2,3,4,5,6 };
//	std::vector<int> order = { 6,2,5,1,4,3 };
//	//std::vector<int> ball = { 11,2,9,13,24 };
//	//std::vector<int> order = { 9,2,13,24,11 };
//	std::vector<int> test = { 3,5,1 };
//
//	//std::cout << test.front() << std::endl;
//	solution(ball, order);
//
//
//	return 0;
//}