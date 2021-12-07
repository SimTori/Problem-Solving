#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for (int i = 0; i < arr1.size(); i++) {
        vector<int> tmp;
        for (int j = 0; j < arr1[0].size(); j++) {
            tmp.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(tmp);
    }
    return answer;
}

int main(){
    vector<vector<int>> arr1 = {{1, 2}, {3, 4}};
    vector<vector<int>> arr2 = {{3, 4}, {5, 6}};
    solution(arr1, arr2);

    return 0;
}