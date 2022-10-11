// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 4.
void remove_negative(std::vector<int>& input) {
  int k = 0;
  for (size_t i = 0; i < input.size(); i++) {
    if ((input[i] < 0) && (k == 0)) {
      input.erase(input.begin() + static_cast<int>(i));
      k = 1;
    }
  }
}

void remove_last_even(std::vector<int>& input) {
  int k = 0;
  for (size_t i = 0; i < input.size(); i++) {
    if ((input[input.size() - i - 1] % 2 == 0) && (k == 0)) {
      input.erase(input.begin() + static_cast<int>(input.size()) -
                  static_cast<int>(i) - 1);
      k = 1;
    }
  }
}
