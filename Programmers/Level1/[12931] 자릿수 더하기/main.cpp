#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    while (n){
        answer += n % 10;
        n /= 10;
    }

    return answer;
}

int main(){
    solution(13513);

    return 0;
}