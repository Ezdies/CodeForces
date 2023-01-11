#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void solve(){
    std::string s;
    std::cin >> s;

    std::transform(s.begin(), s.end(), s.begin(), 
    [](char &c){return std::tolower(c);});

    if(s == "yes"){
        std::cout << "YES\n";
    }else{
        std::cout << "NO\n";
    }
}

int main(){
    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        solve();
    }

    
}