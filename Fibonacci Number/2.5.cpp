#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll size(ll m) {
    ll a = 0, b = 1, c = a + b;
    for (ll i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
}

ll fib(ll n, ll m) {
    ll rem = n % size(m);

    ll a=0,b=1;

    ll res = rem;

    for (ll i = 1; i < rem; i++) {
        res = (a+b) % m;
        a = b;
        b = res;
    }

    return res % m;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << fib(n, m) << '\n';
}