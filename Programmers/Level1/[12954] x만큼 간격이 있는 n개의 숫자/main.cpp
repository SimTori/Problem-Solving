#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for (int i = 0; i < n; i++) {
        answer.push_back(x * (i + 1));
    }

    return answer;
}

int main() {
    int x, n;

    cin >> x >> n;

    solution(x, n);
    return 0;
}