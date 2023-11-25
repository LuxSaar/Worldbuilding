#include <iostream>
#include <iomanip> 
#include <cmath>
#include <cstdlib>
#include <string>
#include <ctime>
#include <unistd.h>
#include <array>
#include <fstream>


class Object{
protected:
 std::string Type;
public:
};

class Person : private Object{
    protected:
    std::string Personality;
    std::string Origin;
    std::string Role;
    std::string Appearance;
    public:
    Person(int P, int O, int R, int A){

        Type = "Person";
        std::ifstream Orig("Origin.txt");
        std::string OriginPlaceHolder;
        int OrigNum;
        while(Orig >> OriginPlaceHolder){
            OrigNum++;
        }
        O = (O%3)+1;
        std::cout<<O;
    }
};

class Place : private Object{
    protected:
    std::string Locale;
    std::string Location;
    std::string Trait;
    public:

};

class Thing : private Object{
    protected:
    std::string Modifier;
    std::string Catalyst;
    std::string Source;
    bool Weapon;
    bool Damage;
    public:

};