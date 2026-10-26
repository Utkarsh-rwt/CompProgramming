#include <bits/stdc++.h>
using namespace std;

int mextillk(vector<int> arr, int n, int k)
{
    vector<bool> seen(n + 1, false);

    for (int j = 0; j <= n - k; j++)
    {
        seen[arr[j]] = true;
    }

    int mex = 0;
    while (seen[mex])
    {
        mex++;
    }

    return mex;
}

void cp()
{
    int n, k;

    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (k == 1)
    {
        cout << -1 << "\n";
        return;
    }

    int ans = mextillk(arr, n, k);
    int indx1 = -1;
    int indx2 = -1;

    for (int x = 0; x <= n - k; x++)
    {
        for (int y = n - k + 1; y < n; y++)
        {

            vector<int> brr = arr;
            swap(brr[x], brr[y]);
            if (ans < mextillk(brr, n, k))
            {
                indx1 = x;
                indx2 = y;
                ans = mextillk(brr, n, k);
            }
        }
    }

    if (indx1 == -1)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << indx1 + 1 << " " << indx2 + 1 << "\n";
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