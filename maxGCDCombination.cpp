#include <iostream>
#include <numeric>
#include <algorithm>


void solve() {
    int n;
    std::cin >> n;

    int maxi = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            maxi = std::max(maxi, std::gcd(i, j));
        }
    }
    std::cout << maxi << '\n';

}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
