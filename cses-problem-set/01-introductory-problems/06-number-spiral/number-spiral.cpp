#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool f;
    uint32_t t;
    uint64_t y, x;

    cin >> t;
    for (uint32_t i = 0; i < t; i++) {
        cin >> y >> x;

        if (y > x) {
            f = y & 1;
        } else {
            f = !(x & 1);
            swap(y, x);
        }

        cout << (y == x
                ? y * (y - 1) + 1
                : y * y + 2 * f * (x - y) - x + 1)
             << '\n';
    }

    return 0;
}
