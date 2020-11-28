#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//핵심 소스코드의 설명을 주석으로 작성하면 평가에 큰 도움이 됩니다.
class Solution {
public:
    int solution(vector<int> votes) {
        int count = 0, max, i, index, temp;

        // 후보 0이 유일한 후보라면?
        if (votes.size() == 1) {
            return count;
        }

        temp = votes[0];
        votes.erase(votes.begin());

        while (true) {
            max = *max_element(votes.begin(), votes.end());
            vector<int>::iterator itr = find(votes.begin(), votes.end(), max);
            index = distance(votes.begin(), itr);

            if (temp > max) {
                return count;
            }
            else {
                votes[index]--;
                temp++;
                count++;
            }
            
        }
      
        return count;
    }
};

int main(void)
{
    Solution s;
    vector<int> test;
    test.push_back(5);
    test.push_back();
    test.push_back(7);
    test.push_back(3);
    test.push_back(8);
    cout<<s.solution(test);

    return 0;
}