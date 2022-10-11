// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 2.
int sum(const std::vector<int>& input) {
  int sum = 0;
  for (auto& i : input) sum += i;
  return sum;
}

int square_sum(const std::vector<int>& input) {
  int sum = 0;
  for (auto& i : input) sum += (i * i);
  return sum;
}

int sum_six(const std::vector<int>& input) {
  int sum_six = 0;
  for (short i = 0; i < 6; i++) sum_six += input[i];
  return sum_six;
}

int sum_k(const std::vector<int>& input, int k1, int k2) {
  int summ = 0;
  for (; k1 - 1 < k2; k1++) summ += input[k1];
  return summ;
}

int mean(const std::vector<int>& input) {
  int average = 0;
  short k = 0;
  for (int i : input) {
    average += i;
    k += 1;
  }
  average /= k;
  return average;
}

int mean_k(const std::vector<int>& input, int s1, int s2) {
  int summ = 0, a=s1;
  for (; s1 <= s2; summ += input[s1], s1++)
    ;
  int average;
  average = summ / (s2 - a + 1);
  return average;
}
