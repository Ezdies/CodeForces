#include <iostream>
#include <algorithm>
#include <deque>
 
void solve(int n){
    int number;
    std::deque<int> numbers;
    for(int i = 0; i < n; i++){
        std::cin >> number;
        numbers.push_back(number);
    }
 
    std::sort(numbers.begin(), numbers.end());
    while (numbers.size() != 1)
    {
        numbers.pop_back();
        numbers.pop_front();
    }
    std::cout << numbers.front() << '\n';
}
 
int main(){
    int n;
    std::cin >> n;
 
    solve(n);
}