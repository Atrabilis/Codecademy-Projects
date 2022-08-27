#include<iostream>
#include<string>
#include "functions.hpp"
void bleep(std::string const &word, std::string &text){
  int word_size = word.size();
  int word_counter = 0;
  int match_counter = 0;
  for (int i = 0; i<text.size(); i++){
    if(match_counter == word.size() -1){
      for (int j = i - word_size +1 ; j<= i; j++){
        text[j] = '*';
      }
      match_counter = 0;
    }
    else if(text[i] == word[word_counter]){
      match_counter ++;
      word_counter ++;
    }
    else{
      match_counter = 0;
      word_counter = 0;
    }
  }
}