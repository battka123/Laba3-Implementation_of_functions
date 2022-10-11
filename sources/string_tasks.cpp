// Copyright 2018 Your Name <your_email>
#include <string>
#include <tasks.hpp>

// Task 5.
bool name_is_even(const std::string& name) {
  if (name.size() % 2 == 1) {
    return false;
  } else
    return true;
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
  if (name_one.size() > name_two.size()) {
    return true;
  } else
    return false;
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
  if ((name_three.size() < name_two.size()) &&
      (name_two.size() < name_one.size())) {
    the_longest = name_one;
    the_shortest = name_three;
  }
  if ((name_one.size() >= name_three.size()) &&
      (name_three.size() >= name_two.size())) {
    the_longest = name_one;
    the_shortest = name_two;
  }
  if ((name_three.size() >= name_two.size()) &&
      (name_two.size() >= name_one.size())) {
    the_longest = name_three;
    the_shortest = name_one;
  }
  if ((name_three.size() >= name_one.size()) &&
      (name_one.size() >= name_two.size())) {
    the_longest = name_three;
    the_shortest = name_two;
  }
  if ((name_two.size() >= name_one.size()) &&
      (name_two.size() >= name_three.size())) {
    the_longest = name_two;
    the_shortest = name_three;
  }
  if ((name_two.size() >= name_three.size()) &&
      (name_three.size() >= name_one.size())) {
    the_longest = name_two;
    the_shortest = name_one;
  }
}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
  std::string word_2;
  for (int i = 0; i < static_cast<int>(word.size()); i++) {
    if (i >= m && i <= n) word_2 += word[i];
  }
  return word_2;
}

// Task 9.
void add_stars(std::string& word) {
  std::string star;
  for (int i = 0; i < static_cast<int>(word.length()); i++) star += '*';
  word = star + word + star;
}

// Task 10.
int percent_of_a(const std::string& word) {
  size_t i = 0, a = 0;
  for (; i < word.size(); i++) {
    if (word[i] == 'a') a += 1;
  }

  return (int(a * 100 / word.size()));
}

// Task 11.
std::string replace_can(const std::string& new_word) {
  std::string word = "Can you can a can as a canner can can a can?";
  for (int i = 0; i < 6; i++) {
    auto pos = word.find("can");
    word.erase(pos, 3);
    word.insert(pos, new_word);
  }
  return word;
}
