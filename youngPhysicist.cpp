#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    int n;
    int x, y, z;
    std::vector<std::vector<int>> totalVector;

    std::cin >> n;

    std::vector<int> xs;
    std::vector<int> ys;
    std::vector<int> zs;


    for (int i = 0; i < n; i++)
    {
        std::cin >> x >> y >> z;
        xs.push_back(x);
        ys.push_back(y);
        zs.push_back(z);
    }

    bool isTrue = false;

    if (std::accumulate(xs.begin(), xs.end(), 0) == 0 && 
    std::accumulate(ys.begin(), ys.end(), 0) == 0 &&
    std::accumulate(zs.begin(), zs.end(), 0) == 0)
    {
        isTrue = true;
    }

    if (isTrue)
    {
        std::cout << "YES" << '\n';
    }
    else
    {
        std::cout << "NO" << '\n';
    }
}