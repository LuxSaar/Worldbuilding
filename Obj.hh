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
 std::string ReadObj(int Num,std::string InputFile){
        std::ifstream File(InputFile);
        std::string TraitPlaceHolder;
        int IndexTotal = 0;
        while(File >> TraitPlaceHolder){
            IndexTotal++;
        }
        File.clear();
        File.seekg(0, std::ios::beg);
        Num = (Num%IndexTotal)+1;
        std::cout<<Num;
        for(int i = 0; i < Num-1;i++){
            File >> TraitPlaceHolder;
        }
        return TraitPlaceHolder;
    }
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
        std::cout<<ReadObj(O, "Origin.txt");
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
