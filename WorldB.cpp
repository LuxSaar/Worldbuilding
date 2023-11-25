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
    cout<<"\n\nPerson 1: "<<std::endl;
    Person Balls(rand(), rand(), rand(), rand());
    cout<<"\n\nPerson 2: "<<std::endl;
    Person Walls(rand(), rand(), rand(), rand());
    cout<<"\n\n";
}
