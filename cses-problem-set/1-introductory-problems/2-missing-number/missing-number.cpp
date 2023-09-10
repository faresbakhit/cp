#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    uint64_t n;
    cin >> n;
    n = n * (n + 1) >> 1;

    uint32_t i;
    while (cin >> i) {
        n -= i;
    }

    cout << n;
    return 0;
}
