#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    uint32_t n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }

    for (uint32_t i = 2; i <= n; i += 2) {
        cout << i << ' ';
    }

    for (uint32_t i = 1; i <= n; i += 2) {
        cout << i << ' ';
    }

    return 0;
}
