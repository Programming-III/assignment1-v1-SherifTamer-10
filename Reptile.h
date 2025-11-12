#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

class Reptile : Animal{
        private:
            bool isVenemous;
        public:
            Reptile(bool v,string n , int a ,bool isH){
            isVenemous=v;
            }
                        };







#endif
