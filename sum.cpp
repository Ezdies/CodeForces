#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

bool isSum(const int *tab)
{
    return tab[0] + tab[1] == tab[2];
}

void solve()
{
    const int n = 3;

    int tab[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> tab[i];
    }

    std::sort(tab, tab + n);
    if (isSum(tab))
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }
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