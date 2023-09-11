#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    uint32_t n, z = 0;
    cin >> n;
    while (n != 0) {
        n /= 5;
        z += n;
    }
    cout << z;
    return 0;
}
