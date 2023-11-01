#include <iostream>
#include <algorithm>

const int size = 10000;

struct Resident
{
    int numberOfShares;
    int costOfShare;
};

void solve(Resident *residents, const int n, const int chanekCost)
{
    std::sort(residents, residents + n,
              [](const Resident &a, const Resident &b)
              {
                  return a.costOfShare < b.costOfShare;
              });

    int totalShares = 0;
    int cost = 0;

    for (int i = 0; i < n; i++)
    {
        if (residents[i].costOfShare > chanekCost)
        {
            cost += chanekCost;
            totalShares++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        while (totalShares < n && residents[i].numberOfShares > 0)
        {
            cost += residents[i].costOfShare;
            residents[i].numberOfShares--;
            totalShares++;
        }
    }

    std::cout << cost << std::endl;
}

void fillInput(Resident *residents, const int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> residents[i].numberOfShares;
    }

    for (int i = 0; i < n; i++)
    {
        std::cin >> residents[i].costOfShare;
    }
}

int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, chanekCost;
        std::cin >> n >> chanekCost;

        Resident residents[size];
        fillInput(residents, n);
        solve(residents, n, chanekCost);
    }

    return 0;
}
