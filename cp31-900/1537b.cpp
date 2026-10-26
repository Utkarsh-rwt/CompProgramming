#include <bits/stdc++.h>
using namespace std;

void cp()
{

    long n, m, i, j;
    cin >> n >> m >> i >> j;

    // four corners distance
    vector<pair<long long, long long>> dis(4);

    dis[0] = {(abs(i - 1) + abs(j - m)), 1};
    dis[1] = {(abs(i - n) + abs(j - m)), 2};
    dis[2] = {(abs(i - n) + abs(j - 1)), 3};
    dis[3] = {(abs(i - 1) + abs(j - 1)), 4};

    sort(dis.begin(), dis.end());

    if (dis[3].second == 1)
    {
        cout << 1 << " " << m;
        cout << " ";
        cout << n << " " << 1 << "\n";
    }

    if (dis[3].second == 2)
    {
        cout << n << " " << m;
        cout << " ";
        cout << 1 << " " << 1 << "\n";
    }

    if (dis[3].second == 3)
    {
        cout << n << " " << 1;
        cout << " ";
        cout << 1 << " " << m << "\n";
    }

    if (dis[3].second == 4)
    {
        cout << 1 << " " << 1;
        cout << " ";
        cout << n << " " << m << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        cp();
    }

    return 0;
}