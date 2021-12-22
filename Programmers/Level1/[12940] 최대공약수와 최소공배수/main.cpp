#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a = n;
    int b = m;

    while (b > 0){
        int tmp = b;
        b = a % b;
        a = tmp;
    }

    int c = ((n * m) / a);

    answer.push_back(a);
    answer.push_back(c);
    return answer;
}

int main(){
    solution(3, 12);

    return 0;
}