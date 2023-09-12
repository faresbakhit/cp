#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    uint64_t ml = 0, cml = 0;

    uint64_t sl = s.length();
    for (uint64_t i = 0; i < sl; i++) {
        if (s[i] != s[i - 1]) {
            ml = max(cml, ml);
            cml = 0;
        }
        cml++;
    }

    cout << max(cml, ml);
    return 0;
}
