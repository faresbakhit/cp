#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    uint32_t n;
    cin >> n;

    if ((n + (n & 1)) % 4) {
        cout << "NO";
        return 0;
    }

    cout << "YES" << '\n';

    if (n & 1) {
        uint32_t mid = (n + 1) >> 1;
        uint32_t pad = (n + 1) >> 2;

        cout << mid - 1 << '\n';

        for (uint32_t i = pad + 1; i < mid; i++) {
            cout << i << ' ';
        }
        for (uint32_t i = mid + 1; i < mid + pad + 1; i++) {
            cout << i << ' ';
        }

        cout << '\n'
             << mid << '\n';

        for (uint32_t i = 1; i < pad + 1; i++) {
            cout << i << ' ';
        }
        cout << mid << ' ';
        for (uint32_t i = mid + pad + 1; i < n + 1; i++) {
            cout << i << ' ';
        }
    } else {
        uint32_t mid = (n >> 1) + 1;
        uint32_t pad = (n >> 2);

        cout << mid - 1 << '\n';

        cout << 1 << ' ';
        for (uint32_t i = pad + 2; i < mid; i++) {
            cout << i << ' ';
        }
        for (uint32_t i = mid + 1; i < mid + pad + 1; i++) {
            cout << i << ' ';
        }

        cout << '\n'
             << mid - 1 << '\n';

        for (uint32_t i = 2; i < pad + 2; i++) {
            cout << i << ' ';
        }
        cout << mid << ' ';
        for (uint32_t i = mid + pad + 1; i < n + 1; i++) {
            cout << i << ' ';
        }
    }

    return 0;
}

/*

    - - 3                                              1 - - 4
    1 2 -                                              - 2 3 -
    1 2 3                                              1 2 3 4

    - - 3 - 5 6 -                                      1 - - 4 - 6 7 -
    1 2 - 4 - - 7                                      - 2 3 - 5 - - 8
    1 2 3 4 5 6 7                                      1 2 3 4 5 6 7 8

    - - - 4 5 - 7 8 9 -- --                            1 - - - 5 6 - 8 9 10 -- --
    1 2 3 - - 6 - - - 10 11                            - 2 3 4 - - 7 - - -- 11 12
    1 2 3 4 5 6 7 8 9 10 11                            1 2 3 4 5 6 7 8 9 10 11 12

    - - - - 5 6 7 - 9 10 11 12 -- -- --                - - - - 6 7 8 - 10 11 12 13 -- -- --
    1 2 3 4 - - - 8 - -- -- -- 13 14 15                2 3 4 5 - - - 9 -- -- -- -- 14 15 16
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15                2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

    - - - - - 6 7 8 9 -- 11 12 13 14 15 -- -- -- --    1 - - - - - 7 8 9 10 -- 12 13 14 15 16 -- -- -- --
    1 2 3 4 5 - - - - 10 -- -- -- -- -- 16 17 18 19    - 2 3 4 5 6 - - - -- 11 -- -- -- -- -- 17 18 19 20
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

*/
