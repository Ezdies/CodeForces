#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void solve(const int n)
{
    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    int begin = 0;
    int end = n - 1;

    bool serejaTurn = true;

    int serejaPoints = 0;
    int dimaPoints = 0;

    while (begin < end)
    {
        if (numbers[begin] > numbers[end] && serejaTurn)
        {
            serejaPoints += numbers[begin];
            begin++;
            serejaTurn = !serejaTurn;
        }
        else if (numbers[begin] <= numbers[end] && serejaTurn)
        {
            serejaPoints += numbers[end];
            end--;
            serejaTurn = !serejaTurn;
        }

        if (numbers[begin] > numbers[end] && !serejaTurn)
        {
            dimaPoints += numbers[begin];
            begin++;
            serejaTurn = !serejaTurn;
        }
        else if (numbers[begin] <= numbers[end] && !serejaTurn)
        {
            dimaPoints += numbers[end];
            end--;
            serejaTurn = !serejaTurn;
        }
    }

    if (n % 2 == 1)
    {
        serejaPoints += std::max(numbers[begin], numbers[end]);
    }

    std::cout << serejaPoints << " " << dimaPoints << '\n';
}

int main()
{
    int n;
    std::cin >> n;
    solve(n);
}
