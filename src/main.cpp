#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> cities = {
      "Tokyo", "Berlin", "Rio", "Denver", "Helsinki", "Nairobi"};

  std::sort(cities.begin(), cities.end());

  for (const auto &city : cities) {
    std::cout << city << "\n";
  }
  return 0;
}
