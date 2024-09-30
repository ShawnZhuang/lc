#ifndef LEET_CODE_H
#define LEET_CODE_H

#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <lc/logging.h>
using namespace std;

template <typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &vec) {
  os << "[";
  for (size_t i = 0; i < vec.size(); i++) {
    os << vec[i];
    if (i < vec.size() - 1) {
      os << ",";
    }
  }
  os << "]";
  return os;
}

#endif  // LEET_CODE_H