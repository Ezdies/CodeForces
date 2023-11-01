#include <iostream>
#include <cmath>

int main() {
    int n, m, a;
    std::cin >> n >> m >> a;

    double x, y;

    x = ceil(static_cast<double>(n) / a);
    y = ceil(static_cast<double>(m) / a);

    std::cout << static_cast<long long>(x * y) << '\n';
}
