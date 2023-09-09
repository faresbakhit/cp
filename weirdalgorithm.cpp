// Problem: Weird Algorithm
// Webpage: https://cses.fi/problemset/task/1068

#include <iostream>

using namespace std;

int main(void)
{
    unsigned long long n;
    cin >> n;

    while (n != 1) {
        cout << n << " ";
        if (n & 1) {
            n = 3 * n + 1;
        } else {
            n >>= 2;
        }
    }

    cout << "1\n";

    return 0;
}
