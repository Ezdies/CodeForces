#include <iostream>
#include <vector>
#include <algorithm>

void solve(const std::vector<int> &numbers){
    const int size = numbers.size();

    int currentHightest = numbers.front();
    int counter = 0;

    for(int i = 1; i < size; i++){
        if(numbers[i] >= currentHightest){
            currentHightest = numbers[i];
            counter++;
        }
    }
    std::cout << counter << '\n';
}

int main(){
    int n, a;
    std::cin >> n;
    std::vector<int> numbers;

    for(int i = 0; i < n; i++){
        std::cin >> a;
        numbers.push_back(a);
    }
    solve(numbers);
}