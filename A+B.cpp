#include <iostream>
#include <sstream>

void solve()
{
    std::string s;
    std::cin >> s;
    std::istringstream ss(s);

    int first, second;
    char plus;

    while (ss >> first >> plus >> second);

    std::cout << first + second << '\n';
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