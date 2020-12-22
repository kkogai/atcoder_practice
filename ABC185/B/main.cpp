#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M, T;
    cin >> N >> M >> T;
    vector<int> a(M);
    vector<int> b(M);
    for (int i = 0; i < M; i++)
    {
        cin >> a.at(i) >> b.at(i);
    }
    int NN = N;

    int j = 0;
    int c = 0;
    while (j < M)
    {
        if (j == 0)
        {
            N = N - a[j];
        }
        else{
            N = N - (a[j] - b[j - 1]);
        }

        if (N <= 0)
        {
            cout << "No" << endl;
            c = 1;
            break;
        }
        N = min(NN, N + (b[j] - a[j]));

        j++;
    }
    N = N - (T - b[M - 1]);
    if (N <= 0 && c == 0)
    {
        cout << "No" << endl;
    }
    else if (N > 0 && c == 0)
    {
        cout << "Yes" << endl;
    }
}