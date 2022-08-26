#include <iostream>
#include <vector>
#include <string>

int main() {
  std::string input = "turpentine and turtles";
  std::vector<char> vowels = {'a','e','i','o','u'};
  std::vector<char> result; 
  for (int i=1; i<=input.size(); i++){
    for (int j = 1; j<= vowels.size(); j++){
      if (input[i-1] == vowels[j-1]){
        result.push_back(input[i-1]);
        break;
      }
    }
  }
  for (int k = 0; k < result.size(); k++){
    std::cout << result[k];
  }
}
