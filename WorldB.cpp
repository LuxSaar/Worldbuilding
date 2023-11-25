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
    Person Balls(rand(), rand(), rand(), rand());
    Person Walls(rand(), rand(), rand(), rand());
}