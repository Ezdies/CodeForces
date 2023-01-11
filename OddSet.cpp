#include <iostream>
#include <vector>

bool isPairSumOdd(const int a, const int b) {
    return (a + b) % 2 == 1;
}

void solve() {

    bool isSetOdd = true;
    int n, a;
    std::cin >> n;

    std::vector<int> numbers;

    for (int i = 0; i < 2 * n; i++) {
        std::cin >> a;
        numbers.push_back(a);
    }

    for (int i = 0; i < numbers.size(); i++) {
        if (i % 2 == 1) {
            std::cout << numbers[i] << " " << numbers[i + 1] << std::endl;
        }
        if (!isPairSumOdd(numbers[i], numbers[i + 1])) {
            isSetOdd = false;
            break;
        }
    }

    if (isSetOdd) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
    std::cout << std::endl;
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }
}

