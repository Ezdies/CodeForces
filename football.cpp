#include <iostream>
#include <algorithm>
#include <string>

int main(){
    std::string s;
    std::cin >> s;

    std::string firstString = "0000000";
    std::string secondString = "1111111";

    auto firstSearch = std::search(s.begin(), s.end(), firstString.begin(), firstString.end());
    auto secondSearch = std::search(s.begin(), s.end(), secondString.begin(), secondString.end());

    bool result = false;

    if(firstSearch != s.end() || secondSearch != s.end()){
        result = true;
    }

    if(result){
        std::cout << "YES" << "\n";
    }else{
        std::cout << "NO" << "\n";
    }
}