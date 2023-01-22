#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <numeric>

bool isPalindrome(const std::string &s)
{
    return std::equal(s.begin(), s.begin() + s.size() / 2, s.rbegin());
}

void solve(const std::string &s)
{

    // auto newS = std::accumulate(s.begin(), s.end(), std::string(), [](std::string acc, const char c)
    //                             { return acc + std::string(2, c); });

    std::string newS = s + s;

    do
    {
        if (isPalindrome(newS))
        {
            std::cout << newS << '\n';
            break;
        }
    } while (std::next_permutation(newS.begin(), newS.end()));
}

int main()
{
    int t;
    std::cin >> t;
    std::string s;

    for (int i = 0; i < t; i++)
    {
        std::cin >> s;
        solve(s);
    }
}