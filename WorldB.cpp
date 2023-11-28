#include <iostream>
#include <iomanip> 
#include <cmath>
#include <cstdlib>
#include <string>
#include <ctime>
#include <unistd.h>
#include <array>
#include <fstream>
#include "Obj.hh"

using namespace std;

int main(void){
    srand(time(0));

    bool run=true;

    while(run==true) {
        int selector;
        std::cout<< "\n0. End Program \n1. Person \n2. Place \n3. Item \n4. Weapon \nSelect: ";
        std::cin >> selector;

    switch (selector) {
        case 1 : {
            Person object(rand(), rand(), rand(), rand());
            object.print();
        }; break;
        case 2 : {
            Place object(rand(), rand(), rand());
            object.print();
        }; break;
        case 3 : {
            Item object(rand(), rand(), rand(), rand());
            object.print();
        }; break;
        case 4 : {
            Weapon object(rand(), rand(), rand());
            object.print();
        }; break;
        default : {run=false;}

    }
    }

    std::cout<<"\n\n";

}
