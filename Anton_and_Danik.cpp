#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    int anton = count(s.begin(), s.end(), 'A');
    int danik = count(s.begin(), s.end(), 'D');
    if (anton > danik)
        cout << "Anton";
    else if (danik > anton)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}
