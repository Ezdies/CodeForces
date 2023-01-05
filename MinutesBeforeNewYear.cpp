#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void solve(){
    int hh, mm;
    std::cin >> hh >> mm;
    const int hours = 24;
    const int minutes = 60;
    int result = (hours - hh - 1) * 60 + minutes - mm;

    std::cout << result << '\n';
}

int main(){
    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        solve();
    }
}