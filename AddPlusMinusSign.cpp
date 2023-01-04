#include <iostream>
#include <string>
#include <algorithm>

const int charToInt(const char c)
{
    return c - '0';
}

const int smallerAbsResult(int result, const int value)
{
    return std::min(result + value, std::abs(result - value));
}

const char plusOrMinus(int result, const int value)
{
    if (result + value <= std::abs(result - value))
    {
        return '+';
    }
    return '-';
}

void solve(const int n)
{
    std::string s;
    std::cin >> s;

    int result = charToInt(s.front());

    for (int i = 1; i < s.size(); i++)
    {
        int value = charToInt(s[i]);
        std::cout << plusOrMinus(result, value);
        result = smallerAbsResult(result, value);
    }
    std::cout << '\n';
}

int main()
{
    int t, n;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        std::cin >> n;
        solve(n);
    }
}