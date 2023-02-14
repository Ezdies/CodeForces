#include <iostream>

void solve(int n){
    for(int i = 1, counter = 1; counter < n; i += counter, counter++){
        std::cout << (i + counter) % n << " ";
    }
}

int main()
{
    int n;
    std::cin >> n;
    solve(n);
}