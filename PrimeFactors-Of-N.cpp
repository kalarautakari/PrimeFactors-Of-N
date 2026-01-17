#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    if (n == 1 or n == 0)
    {
        cout << 0;
        return 0;
    }
    map<ll, ll> freq;
    for (ll count = 2; count*count <= n; count++) {
        if (n % count == 0)
        {
            ll exp = 0;
            while (n% count == 0) {
            exp++;
            n /= count;
        }
            freq[count] = exp;
        }
    }
    if (n > 1) {
        freq[n]++;
    }
    // remaining n = prime

    bool first = true;
    for (auto &i : freq)
    {
        if (!first)
        {
            cout << "x ";
        }
        if (i.second == 1)
        {
            cout << i.first << " ";
        }
        else
        {
            cout << i.first << "^" << i.second << " ";
        }
        first = false;
    }
}
