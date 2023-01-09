#include <iostream>
#include <algorithm>

void solve()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int maxi = std::max(std::max(a, b), c);

    int tab[] = {a, b, c};
    const int size = 3;

    for (int i = 0; i < size; i++)
    {
        if (maxi == 0)
        {
            std::cout << "1 ";
        }
        else if (tab[i] != maxi)
        {
            std::cout << maxi - tab[i] + 1 << " ";
        }
        else
        {
            std::cout << "0 ";
        }
    }
    std::cout << '\n';
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