#include <iostream>

void solve(const int rating) {
  switch (rating) {
  case 1900 ... 5000 : {
    std::cout << "Division 1\n";
    break;
  }
  case 1600 ... 1899 : {
    std::cout << "Division 2\n";
    break;
  }
  case 1400 ... 1599 : {
    std::cout << "Division 3\n";
    break;
  }
  default: {
    std::cout << "Division 4\n";
    break;
  }
  }
}

int main() {
  int t, rating;
  std::cin >> t;

  for (int i = 0; i < t; i++) {
    std::cin >> rating;
    solve(rating);
  }

  return 0;
}
