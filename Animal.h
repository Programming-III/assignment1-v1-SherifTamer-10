#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 


class Animal{
    private:
        string name;
        int age;
        bool isHungry;
    public:
        Animal(string n , int a ,bool isH){
        name=n;
        age=a;
        isHungry=isH;
                                            }
        virtual void display(){
            cout<< "name:"<<name << "age:" <<age << "isHungry:"<<isHungry<<endl;
                    }
        void feed(){
            cout<< "isHungry:"<<isHungry<<endl;
        }
    };


#endif
