#include <arrays.hpp>

std::vector<int> Arrays::two_num_sum_brute(std::vector<int> *array, int sum)
{
  for (int i = 0; i < int(array->size()); i++) {
    for (int j = i + 1; j < int(array->size()); j++) {
      if (array->at(i) + array->at(j) == sum) {
        return std::vector<int>{ array->at(i), array->at(j) };
      }
    }
  }
  return std::vector<int>{};
}