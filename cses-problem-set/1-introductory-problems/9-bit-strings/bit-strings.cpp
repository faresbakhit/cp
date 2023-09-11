#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    uint32_t n, b = 1;
    cin >> n;

    for (uint32_t i = 0; i < n; i++) {
        b *= 2;
        b %= 1000000007;
    }

    cout << b;
    return 0;
}
