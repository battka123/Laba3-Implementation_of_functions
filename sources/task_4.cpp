// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 4.
void remove_negative(std::vector<int>& input) {
  size_t i = 0;
  for (; i < input.size(); i++){
    if (input[i] < 0){
      input.erase(input.begin() + input[i]);
      break;
    }
  }
}

void remove_last_even(std::vector<int>& input) {
  size_t i = 0;
  for (; i < input.size(); i++){
    if (input[input.size()-i-1] % 2 == 0){
      input.erase(input.begin() + input[input.size()-i-1]);
      break;
    }
  }
}
