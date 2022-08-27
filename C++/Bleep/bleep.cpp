#include<iostream>
#include<string>
#include "functions.hpp"

int main(){
  std::string word = "broccoli";
  std::string text = "asdasd asd broccoli addasd broccoliiiii awsdasd broccoli sadsdasd BROCCOLI asdasdasdbroccoliawdasd";
  
  std::cout << text << "\n \n";
  bleep(word, text);
  std::cout << text;
}