#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void solve()
{
    int n;
    std::cin >> n;

    std::string first, second;

    std::cin >> first >> second;

    for (int i = 0; i < n; i++)
    {
        if (first[i] == 'G')
        {
            first[i] = 'B';
        }

        if (second[i] == 'G')
        {
            second[i] = 'B';
        }
    }

    if (first == second)
    {
        std::cout << "YES" << '\n';
    }
    else
    {
        std::cout << "NO" << '\n';
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