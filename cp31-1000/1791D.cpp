#include <bits/stdc++.h>
using namespace std;
void cp()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    vector<bool> already(26, false);
    int count = 0;
    int ans = 0;

    for (int i = 0; i < n; i++){
        if (freq[s[i] - 'a'] == 0)
            count++;
        freq[s[i] - 'a']++;
    }

    for (int i = 1; i < n; i++) { // breaking at each point
        if (freq[s[i - 1] - 'a'] >= 2 && !already[s[i - 1] - 'a']){
            count++;
            already[s[i - 1] - 'a'] = true;
        }
        else if (freq[s[i - 1] - 'a'] == 1 && already[s[i - 1] - 'a']) count--;
            
        ans = max(ans, count);
        freq[s[i - 1] - 'a']--;
    }
    cout << ans << "\n";
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