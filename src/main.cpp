#include <algorithm>
#include <iostream>
#include <vector>

void processNumbers(std::vector<int>& numbers) {
  numbers.erase(std::remove_if(numbers.begin(), numbers.end(),
                               [](int value) { return value % 2 == 0; }),
                numbers.end());
  std::sort(numbers.begin(), numbers.end());

  for (const int value : numbers) {
    std::cout << value << "\n";
  }
}

int main() {
  std::vector<int> numbers = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  processNumbers(numbers);
  return 0;
}
