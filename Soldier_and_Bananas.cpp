#include <bits/stdc++.h>
using namespace std;
int main() {
    long long k, n, w;
    cin >> k >> n >> w;
    long long total = k * w * (w + 1) / 2;
    if (total > n)
        cout << total - n;
    else
        cout << 0;
    return 0;
}
