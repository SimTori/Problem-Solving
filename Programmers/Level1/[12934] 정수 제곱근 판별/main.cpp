#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    auto tmp = sqrt(n);

    answer = tmp - int(tmp) == 0 ? pow(++tmp, 2) : -1;

    return answer;
}

int main(){
    cout << solution(121) << endl;
    return 0;
}