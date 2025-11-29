#include <bits/stdc++.h>
using namespace std;

int maxLenAP(int *a, int n, int d)
{
    //  key = starting element of an AP , value = lenght of AP
    unordered_map<int, int> m;

    int maxt = 1;

    for (int i = 0; i < n; i++)
    {
        m[a[i] - i * d]++;
    }

    for (auto &it : m)
        if (it.second > maxt)

            // calculating the lenght of longest AP.
            maxt = it.second;

    return maxt;
}
int main()
{
    int n = 10, d = 3;
    int a[10] = {1, 4, 2, 5, 20, 11, 56, 100, 20, 23};

    cout << maxLenAP(a, n, d) << endl;
    return 0;
}