#include <bits/stdc++.h>
using namespace std;

void cp()
{
    int n, k;
    cin >> n >> k;

    int ans = k, even = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        ans = min(ans, (k - x % k) % k);

        if (x % 2 == 0)
            even++;
    }

    if (k == 4)
    {
        if (even >= 2)
            ans = 0;
        else if (even == 1)
            ans = min(ans, 1);
        else
            ans = min(ans, 2);
    }

    cout << ans << '\n';
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