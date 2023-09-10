#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    uint32_t nm = 0, n = 0;
    uint64_t m = 0;
    cin >> nm >> nm;
    while (cin >> n) {
        if (nm > n) {
            m += nm - n;
            n = nm;
        }
        nm = n;
    }
    cout << m;
    return 0;
}
