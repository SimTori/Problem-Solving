#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() == 1){
        arr[0] = -1;
        return arr;
    }

    int min = 0;

    for (int i = 0; i < arr.size(); i++){
        if (arr[min] > arr[i]){
            min = i;
        }
    }

    arr.erase(arr.begin() + min);

    return arr;
}

int main(){
    solution({ 4, 3, 2, 1});
    return 0;
}