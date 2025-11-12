#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 

class Enclosure{
    private:
        string animal[];
        int capacity;
        int currentCount;
    public:
        Enclosure(string anim[],int c , int cc){
        string animal[]=anim[];
        int capacity=c;
        int currentCount=cc;
        }
        void addAnimal(string animal[]){
            anim[]++;
                                    };
        void displayAnimals(){
            cout<<"the animals:"<<animals[]<<endl;
                                }
                                };




#endif
