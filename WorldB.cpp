#include <iostream>
#include <iomanip> 
#include <cmath>
#include <cstdlib>
#include <string>
#include <ctime>
#include <unistd.h>
#include <array>
#include <fstream>
#include <vector>
#include "Obj.hh"

using namespace std;

int main(void){
    vector<Object*> ObjList;
    srand(time(0));
    for(int i = 0; i <10; i++){
        string Type;
        cout<<"What type of object would you like to create? (options are Person, Place, Item and Weapon)"<<endl<<"If you'd like to view the objects you've created and terminate the program type view"<<endl;
        cin>>Type;
        transform(Type.begin(), Type.end(), Type.begin(), ::toupper);
        if (Type == "PERSON"){
            Person* newPerson = new Person(rand(), rand(), rand(), rand());
            ObjList.push_back(newPerson);
            ObjList[i]->print();
        }
        else if (Type == "PLACE"){
            Place* newPlace = new Place(rand(), rand(), rand());
            ObjList.push_back(newPlace);
            ObjList[i]->print();
        }
        else if (Type == "ITEM"){
            Item* newItem = new Item(rand(), rand(), rand(), rand());
            ObjList.push_back(newItem);
            ObjList[i]->print();
        }
        else if (Type == "WEAPON"){
            Weapon* newItem = new Weapon(rand(), rand(), rand());
            ObjList.push_back(newItem);
            ObjList[i]->print();
        }
        else if (Type == "VIEW"){
            for(int j; j < ObjList.size();j++){
                cout<<ObjList.size()<<endl;
                try
                {
                    ObjList[j]->print();
                }
                catch(const std::exception& e)
                {
                    break;
                }
            }
            break;
        }
        else{
            i--;
            cout<<"Invalid Input"<<endl;
        }
    }
}
