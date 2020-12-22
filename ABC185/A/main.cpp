#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N = 4;
    vector<int> vec(N);
    for (int i = 0; i < N; i++){
        cin >> vec.at(i);
    }
    cout << *std::min_element(vec.begin(), vec.end()) << endl;
}
