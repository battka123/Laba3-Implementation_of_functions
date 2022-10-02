// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 2.
int sum(const std::vector<int>& input) {
  size_t i = 0, summ = 0;
  for (; i < input.size(); i++) summ += input[i];
    return 0;
}

int square_sum(const std::vector<int>& input) {
  size_t i = 0, summ = 0;
  for (; i < input.size(); i++) summ += (input[i] * input[i]);
    return 0;
}

int sum_six(const std::vector<int>& input) {
  size_t i = 0, summ = 0;
  for (; i < 6; i++) summ += input[i];
    return 0;
}

int sum_k(const std::vector<int>& input, int k1, int k2) {
  size_t summ = 0;
  for (; k1-1 < k2; k1++) summ += input[k1];
    return 0;
}

int mean(const std::vector<int>& input) {
  size_t i = 0, average = 0;
  for (; i < input.size(); i++) {average += input[i];}
  average /= input.size();
    return 0;
}

int mean_k(const std::vector<int>& input, int s1, int s2) {
  size_t average = 0, summ = 0;
  for (; s1-1 < s2; s1++) {summ += input[s1];}
  average /= (s2-s1+1);
    return 0;
}
