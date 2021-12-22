#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> arr;

    while (n > 0){
        arr.push_back(n % 10);
        n /= 10;
    }
    sort(arr.begin(), arr.end(), greater<int>());

    for (int i = 0; i < arr.size(); i++) {
        answer = answer * 10 + arr[i];
    }


    return answer;
}

int main(){
    solution(6841321);
    cout << 6841321 / 10 << endl;
    return 0;
}