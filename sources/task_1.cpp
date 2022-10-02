// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 1.
void multi_2(std::vector<int>& input) {
    size_t i = 0;
    for (; i < input.size(); i++, input[i] *= 2);
}

void reduce_a(std::vector<int>& input, int a) {
  size_t i = 0;
  for (; i < input.size(); i++, input[i] -= a);
}

void div_on_first(std::vector<int>& input) {
  size_t i = 0;
  for (; i < input.size(); i++, input[i] /= input[0]);
}