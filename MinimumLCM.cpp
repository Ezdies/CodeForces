#include <iostream>
#include <numeric>
#include <limits>

using ll = long long;

void solve()
{
    ll n;
    std::cin >> n;

    ll minA;
    ll minB;

    ll mini = std::numeric_limits<ll>::max();

    for (int a = 1, b = n - 1; a < n / 2 + 1; a++, b--)
    {
        ll res = std::lcm(a, b);
        if (res < mini)
        {
            mini = res;
            minA = a;
            minB = b;
        }
    }
    std::cout << minA << " " << minB << '\n';
}

int main()
{

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }
}