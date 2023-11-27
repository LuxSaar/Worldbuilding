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
 std::string ReadObj(int Num,std::string InputFile) {
        std::ifstream File(InputFile);
        std::string TraitPlaceHolder;
        int IndexTotal = 0;
        while(File >> TraitPlaceHolder){
            IndexTotal++;
        }
        File.clear();
        File.seekg(0, std::ios::beg);
        Num = (Num%IndexTotal)+1;
        // std::cout<<Num<<" ";
        for(int i = 0; i < Num-1;i++){
            File >> TraitPlaceHolder;
        }
        return TraitPlaceHolder;
    }
    int rollStat(int max, int min=0) {return (rand() % (max-min))+min;}
public:
};

class Person : private Object{
    protected:
    std::string Personality;
    std::string Origin;
    std::string Role;
    std::string Appearance;
    int Stength;
    int Dexterity;
    int Intelect;
    int Luck;
    int Charisma;
    public:
    Person(int P, int O, int R, int A){
        Type = "Person";
        Personality = ReadObj(P, "txt/Personality.txt");
        Origin = ReadObj(O, "txt/Origin.txt");
        Role = ReadObj(R, "txt/Role.txt");
        Appearance = ReadObj(A, "txt/Appearance.txt");
        Stength = rollStat(10);
        Dexterity = rollStat(10);
        Intelect = rollStat(10);
        Luck = rollStat(10);
        Charisma = rollStat(10);
    };
    void print() {
        std::cout<<"\n\nPerson: "<<std::endl;
        std::cout<<"Origin: "<<Origin<<std::endl;
        std::cout<<"Personality: "<<Personality<<std::endl;
        std::cout<<"Role: "<<Role<<std::endl;
        std::cout<<"Appearance: "<<Appearance<<std::endl;
        std::cout<<"Stength: "<<Stength<<std::endl;
        std::cout<<"Dexterity: "<<Dexterity<<std::endl;
        std::cout<<"Intelect: "<<Intelect<<std::endl;
        std::cout<<"Luck: "<<Luck<<std::endl;
        std::cout<<"Charisma: "<<Charisma<<std::endl;
    }
};

class Place : private Object{
    protected:
    std::string Locale;
    std::string Location;
    std::string Trait;
    public:
    Place(int lc, int lt, int t){
        Type = "Place";
        Locale = ReadObj(lc, "txt/Locale.txt");
        Location = ReadObj(lt, "txt/Location.txt");
        Trait = ReadObj(t, "txt/Trait.txt");
    }

    void print() {
        std::cout<<"\n\nPlace: "<<std::endl;
        std::cout<<"Locale: "<<Locale<<std::endl;
        std::cout<<"Location: "<<Location<<std::endl;
        std::cout<<"Trait: "<<Trait<<std::endl;
    }
};

class Item : private Object{
    protected:
    std::string Name;
    std::string Modifier;
    std::string Catalyst;
    std::string Source;
    public:
    Item(int n, int m, int c, int s){
        Type = "Item";
        Name = ReadObj(n, "txt/ItemName.txt");
        Modifier = ReadObj(m, "txt/Modifier.txt");
        Catalyst = ReadObj(c, "txt/Catalyst.txt");
        Source = ReadObj(s, "txt/Source.txt");
    }

    void print() {
        std::cout<<"\n\nItem: "<<std::endl;
        std::cout<<"Name: "<<Name<<std::endl;
        std::cout<<"Modifier: "<<Modifier<<std::endl;
        std::cout<<"Catalyst: "<<Catalyst<<std::endl;
        std::cout<<"Source: "<<Source<<std::endl;
    }

};

class Weapon : private Object{
    protected:
    std::string Name;
    std::string Effect;
    std::string Craft;
    int Damage;

    public:
    Weapon(int n, int e, int c){
        Type = "Weapon";
        Name = ReadObj(n, "txt/WeaponName.txt");
        Effect = ReadObj(e, "txt/Effect.txt");
        Craft = ReadObj(c, "txt/Craft.txt");
        Damage = rollStat(100);
    }

    void print() {
        std::cout<<"\n\nWeapon: "<<std::endl;
        std::cout<<"Name: "<<Name<<std::endl;
        std::cout<<"Effect: "<<Effect<<std::endl;
        std::cout<<"Craft: "<<Craft<<std::endl;
        std::cout<<"Damage: "<<Damage<<std::endl;
    }

};

