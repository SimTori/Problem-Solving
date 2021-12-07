#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int answer = 0;
    long number = (long)num;
    while (answer < 500){
        if (number == 1)
            return answer;
        number % 2 == 0 ? number/=2 : number*3+1;
        answer++;
    }
    return -1;
}

int main(){
    solution(626331);
    return 0;
}