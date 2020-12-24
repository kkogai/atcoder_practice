#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    if (M != 0)
    {
        vector<int> a(M);
        vector<int> b;
        for (int i = 0; i < M; i++)
        {
            cin >> a.at(i);
        }
        sort(a.begin(), a.end());

        if (a[0] != 1 && a[0] != 2)
        {
            b.push_back(a[0] - 1);
        }

        for (int j = 1; j < M; j++)
        {
            int t = a[j] - a[j - 1] - 1;
            if (t != 0)
            {
                b.push_back(t);
            }
        }

        if (N - a[M - 1] != 0 && N - a[M - 1] != 1)
        {
            b.push_back(N - a[M - 1]);
        }

        if (b.empty())
        {
            cout << 0 << endl;
        }

        else
        {
            int min = *min_element(b.begin(), b.end());
            int count = 0;
            for (int i = 0; i < b.size(); i++)
            {
                count += (b[i] + (min - 1)) / min;
            }
            cout << count << endl;
        }
    }
    else
    {
        cout << 1 << endl;
    }
}