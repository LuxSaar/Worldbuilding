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
    Person person1(rand(), rand(), rand(), rand());
    Place place1(rand(), rand(), rand());
    Item item1(rand(), rand(), rand(), rand());
    Weapon weapon1(rand(), rand(), rand());

    person1.print();
    place1.print();
    item1.print();
    weapon1.print();

    std::cout<<"\n\n";

}
