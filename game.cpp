#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <time.h> 
#include "states.h"

std::string pick_word() {
    srand (time(NULL));
    std::string words[] = {"syrup", "pie", "apples"};
    std::string chosen = words[rand() % sizeof(words) / sizeof(std::string)];

    return chosen;
}

int main() {
    int tries = 6;
    char choice;
    std::string chosen = pick_word();
    std::string temp = chosen;


    std::string full = std::string(chosen.size(), '_');

    while (tries > 0) {
        std::cout << "Tries: " << tries << "\n";
        std::cout << "Type a letter: ";
        std::cin >> choice;

        if (temp.find(choice) != std::string::npos) {
            for (int i=0; i < temp.size(); ++i) {
                if (chosen[i] == choice) {
                    full[i] = choice;
                }

                }
        } else {
            tries-=1;
            }
            
        std::cout << full << "\n";
        std::cout << states(tries) << std::endl;

        if (tries == 0) {
            break;
        }

        if (full == chosen) {
            std::cout << "You found the word, which was: " << chosen << std::endl;
            break;
        }
    }

    return 0;
}