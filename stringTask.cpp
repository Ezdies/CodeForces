#include <iostream>
#include <string>
#include <algorithm>


bool isVowel(const char c){
    const int size = 6;
    char vowels[] = {'a', 'o', 'y', 'e', 'u', 'i'};
    return std::find(vowels, vowels + size, std::tolower(c)) != (vowels + size);
}

char changeToDot(const char c){
    if(!isVowel(c)){
        return '.';
    }
    return c;
}

int main(){
    std::string s;
    std::cin >> s;
    
}