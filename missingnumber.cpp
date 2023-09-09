// Problem: Missing Number
// Webpage: https://cses.fi/problemset/task/1083

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    unsigned long long int n;
    (void)scanf("%llu\n", &n);
    n = n * (n + 1) >> 1;

    string s;
    getline(cin, s);
    istringstream iss(s);
    unsigned int i;

    while (iss >> i) {
        n -= i;
    }

    cout << n << "\n";

    return 0;
}
