#include <iostream>

int main(){
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;
    int answer1 = 0;
    int answer2 = 0;
    int answer3 = 0;
    int answer4 = 0;
    int max =0;

    std::string house;
    
    std::cout << "The Sorting Hat Quiz!\n\n"; 

    std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n" ;

    std::cout <<"1) The Good\n";
    std::cout <<"2) The Great\n";
    std::cout <<"3) The Wise\n";
    std::cout <<"4) The Bold\n";   
    std::cin >> answer1;

    switch (answer1){
        case 1:
            hufflepuff = hufflepuff+1;
            break;
        case 2:
            slytherin = slytherin+1;
            break;
        case 3:
            ravenclaw = ravenclaw+1;
            break;
        case 4:
            gryffindor = gryffindor+1;
            break;
        default:
            std::cout << "Invalid Number\n";
            break;
    }

    std::cout << "Q2) Dawn or Dusk?:\n\n" ;

    std::cout <<"1) Dawn\n";
    std::cout <<"2) Dusk\n";   
    std::cin >> answer2;

    switch (answer2){
        case 1:
            gryffindor  = gryffindor +1;
            ravenclaw  = ravenclaw +1;
            break;
        case 2:
            hufflepuff  = hufflepuff +1;
            slytherin  = slytherin +1;
            break;
        default:
            std::cout << "Invalid Number\n";
        }

    std::cout << "Q3) Which kind of instrument most pleases your ear?: \n\n" ;

    std::cout <<"1) The violin\n";
    std::cout <<"2) The trumpet\n";
    std::cout <<"3) The piano\n";
    std::cout <<"4) The drum\n";   
    std::cin >> answer3;

    switch (answer3){
        case 2:
            hufflepuff = hufflepuff+1;
            break;
        case 1:
            slytherin = slytherin+1;
            break;
        case 3:
            ravenclaw = ravenclaw+1;
            break;
        case 4:
            gryffindor = gryffindor+1;
            break;
        default:
            std::cout << "Invalid Number\n";
            break;
    }

    std::cout << "Q4) Which road tempts you most?\n\n" ;

    std::cout <<"1) The wide, sunny grassy lane\n";
    std::cout <<"2) The narrow, dark, lantern-lit alley\n";
    std::cout <<"3) The twisting, leaf-strewn path through woods\n";
    std::cout <<"4) The cobbled street lined (ancient buildings)\n";   
    std::cin >> answer4;

    switch (answer4){
        case 1:
            hufflepuff = hufflepuff+1;
            break;
        case 2:
            slytherin = slytherin+1;
            break;
        case 4:
            ravenclaw = ravenclaw+1;
            break;
        case 3:
            gryffindor = gryffindor+1;
            break;
        default:
            std::cout << "Invalid Number\n";
            break;
    }
    
    if (gryffindor > max) {
 
        max = gryffindor;
        house = "Gryffindor";
        }
 
    if (hufflepuff > max) {
    
        max = hufflepuff;
        house = "Hufflepuff";
    
    }
 
    if (ravenclaw > max) {
    
        max = ravenclaw;
        house = "Ravenclaw";
    
    }
 
    if (slytherin > max) {
    
        max = slytherin;
        house = "Slytherin";
    
    }
 
    std::cout << house << "!\n";
}
