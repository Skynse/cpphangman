#include <string>
#include <iostream>

std::string states(int state) {

     std::string st6 =
        R"(
         |
         0
        /|\
        / \
        )" ;

             std::string st5 =
        R"(
         |
         0
        /|\
        / 
        )" ;

     std::string st4 =
        R"(
         |
         0
        /|\
        )" ;

     std::string st3 =
        R"(
         |
         0
        /|
        )" ;

     std::string st2 =
        R"(
         |
         0
        /
        )" ;

     std::string st1 =
        R"(
         |
         0
        )" ;



    switch (state) {
        case 1:
            return st1;
        case 2:
            return st2;
        
        case 3:
            return st3;

        case 4:
            return st4;

        case 5:
            return st5;
        
        case 6:
            return st6;
    }
}