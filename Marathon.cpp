#include <iostream>

int main(){
    int t;
    std::cin >> t;
    int a, b, c, d;
    int counter = 0;

    for(int i = 0; i < t; i++){
        std::cin >> a >> b >> c >> d;
        if(b > a){
            counter++;
        }
        if(c > a){
            counter++;
        }
        if(d > a){
            counter++;
        }
        std::cout << counter << '\n';
        counter = 0;
    }
}