#include <iostream>
#include <string>
#include <algorithm>

bool isEqual(const std::string &s)
{
    return std::equal(s.begin(), s.begin() + s.size() / 2, s.begin() + s.size() / 2, s.end());
}

void solve()
{
    std::string s;
    std::cin >> s;

    if (isEqual(s))
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