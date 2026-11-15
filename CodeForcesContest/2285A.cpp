#include <bits/stdc++.h>
using namespace std;

void cp() {
    int n;
    cin >> n;

    if (n <= 3) {
        cout << -1 << '\n';
        return;
    }

    vector<int> ans(n + 1, 0);
    ans[1] = 4;
    ans[2] = 3;
    ans[3] = 2;
    ans[4] = 1;

    for (int i = 5; i <= n; ++i) {
        ans[i] = i;
    }

    for (int i = 1; i < n; ++i) {
        cout << ans[i] << ' ';
    }
    cout << ans[n] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--) {
cp();
    }

    return 0;
}