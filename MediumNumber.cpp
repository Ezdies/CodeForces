#include <iostream>
#include <algorithm>

void solve()
{
    const int SIZE = 3;
    int tab[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        std::cin >> tab[i];
    }

    std::nth_element(tab, tab + SIZE / 2, tab + SIZE);
    int res = tab[SIZE / 2];
    std::cout << res << '\n';
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