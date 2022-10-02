// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 3.
void swap_el(std::vector<int>& input) {
  int var;
    for(int i = 0; i<3; i++){
      var=input[i];
      input[i]=input[i+17];
      input[i+17]=var;
    }
}
