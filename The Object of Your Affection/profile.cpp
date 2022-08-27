#include "profile.hpp"
#include<iostream>
Profile::Profile(std::string new_name,
       int new_age,
       std::string new_city,
       std::string new_country,
       std::string new_pronouns){
         name = new_name;
         city = new_city;
         country = new_country;
         pronouns = new_pronouns;
       std::cout << name << " profile created\n";
       }
std::string Profile::view_profile(){
  std::string bio;
  bio+= "Name: " + name + "\n";
  bio+= "City: " + city + "\n";
  bio+= "Country: " + country + "\n";
  bio+= "Pronouns: " + pronouns + "\n";
  bio+= "Hobbies: ";

  for(std::string i : hobbies){
    bio += i + "\n";
  } 
  bio += "\n";
  return bio;
}

void Profile::add_hobby(std::string new_hobby){
  hobbies.push_back(new_hobby);
}