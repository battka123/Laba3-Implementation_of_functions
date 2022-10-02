// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>
#include <string>
// Task 5.
bool name_is_even(const std::string& name) {
  size_t i = 0;
  for (; i < name.size(); i++){
    std::string name_new; name_new = name[name.size()-i-1];
    if (name_new.size() % 2 == 1){
      //std::cout<<"Ne chetno";
        }//else std::cout<<"Chetno";
  }
  return false;
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
  if (name_one.size() > name_two.size()){
    return true;
  }
  else return false;
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
  if ( (name_three.size() < name_two.size() ) && ( name_two.size() < name_one.size() ) ) {
    the_longest = name_one;
    the_shortest = name_three;
  }
  if ( (name_one.size() >= name_three.size() ) && ( name_three.size() >= name_two.size() ) ) {
    the_longest = name_one;
    the_shortest = name_two;
  }
  if ( (name_three.size() >= name_two.size() ) && (name_two.size() >= name_one.size()) ) {
    the_longest = name_three;
    the_shortest = name_one;
  }
  if ( (name_three.size() >= name_one.size() ) && ( name_one.size() >= name_two.size()) ) {
    the_longest = name_three;
    the_shortest = name_two;
  }
  if ( (name_two.size() >= name_one.size() ) && (name_two.size()  >= name_three.size()) ) {
    the_longest = name_two;
    the_shortest = name_three;
  }
  if ( (name_two.size() >= name_three.size() ) && (name_three.size() >= name_one.size() ) ) {
    the_longest = name_two;
    the_shortest = name_one;
  }

}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
  std::string word_2;
  size_t i = 0;
  for (; i<word.size(); i++ ){
    word_2[i]=word[i];
  }
  while(int(word_2.size()) > n) word_2.erase(word_2.begin() + word_2[word_2.size()-1]);
  while(m-n+1 > int(word_2.size())) word_2.erase(word_2.begin() + word_2[0]);
    return word_2;
}

// Task 9.
void add_stars(std::string& word) {
    size_t i = word.size();
    std::vector <char> new_word(3*i);
    size_t j=0;
    for (; j < i ; new_word[j] = '*', j++);
    for (; j < 2*i ; new_word[j] = word[j-i], j++);
    for (; j < 3*i ; new_word[j] = '*', j++);
}

// Task 10.
int percent_of_a(const std::string& word) {
  size_t i = 0, a = 0;
  for (; i<word.size(); i++){
    if (word[i] == 'a') a += 1;
  }

    return (int(a*100/word.size()));
}

// Task 11.
std::string replace_can(const std::string& new_word) {
  const std::string find = "can";
  const std::string repl = "new_word";
  std::string a = new_word;
  size_t pos = 0;
  for (;;)
  {
    pos = a.find(find, pos);
    if (pos == std::string::npos)
      break;

    a.replace(pos, find.size(), repl);
    pos += repl.size();
  }
  return a;
}