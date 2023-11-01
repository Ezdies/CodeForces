#include <iostream>

bool doesMeetRequirements(int number){
    return number % 3 != 0 && number % 10 != 3;
}

void solve(int number, int* tab, const int size){
    
    int counter = 1;

    for(int i = 0; i < size;){
        if(doesMeetRequirements(counter)){
            tab[i] = counter;
            i++;
        }
        counter++;
    }

}

int main(){
    int t;
    std::cin >> t;
    int k;

    const int size = 1001;
    int tab[size];

    for(int i = 0; i < t; i++){
        std::cin >> k;
        solve(k, tab, size);
        std::cout << tab[k - 1] << '\n';
    }
}