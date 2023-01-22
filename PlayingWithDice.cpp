#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

struct Counter
{
    int a, b, c;
};

void solve(const int a, const int b)
{

    if (a == b)
    {
        std::cout << "0 6 0\n";
        return;
    }

    Counter counter{};

    for (int x = 1; x <= 6; x++)
    {
        if (abs(a - x) < abs(b - x))
        {
            counter.a++;
        }
        else if (abs(a - x) > abs(b - x))
        {
            counter.b++;
        }
        else
        {
            counter.c++;
        }
    }

    std::cout << counter.a << " " << counter.c << " " << counter.b << std::endl;
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    solve(a, b);
}