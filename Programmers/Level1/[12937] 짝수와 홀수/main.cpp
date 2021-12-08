#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    return num % 2 == 0 ? "Even" : "Odd";
}

int main(){
    solution(4);
    return 0;
}