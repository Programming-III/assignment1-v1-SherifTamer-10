#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here


class Visitor{
        private:
            string visitorName;
            int ticketsBought;
        public:
            Visitor(string v, int tb){
            visitorName=v;
            ticketsBought=tb;
            }
            void displayInfo(){
            cout<<"Visitor info:"<<endl;
            cout<<"name:"<< visitorName<<endl;
            cout <<"tickets bought:"<< ticketsBought <<endl;
            }
                        };




#endif
