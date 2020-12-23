#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int L;
    cin >> L;
    unsigned long long res = 1;
    for (int i = 1; i < 12; i++)
    {
        res = res * (L - i) / i;
    }
    cout << res << endl;
}