// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 1.
void multi_2(std::vector<int>& input) {
  for (auto& i : input) i *= 2;
}

void reduce_a(std::vector<int>& input, int a) {
  for (auto& i : input) i -= a;
}

void div_on_first(std::vector<int>& input) {
  int first = 0;
  for (auto& i : input) {
    if (input[0] == i) first = i;
    i /= first;
  }
}
