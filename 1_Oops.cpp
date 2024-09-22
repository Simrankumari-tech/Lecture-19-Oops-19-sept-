#include<iostream>
#include<string.h>
using namespace std;
  ///// blueprint/////
  class car{
public :
   char name[100];  // data members
   int price ;
   int model;
   int seats;

   void print(){     // member functions
    cout << " Name  : " << name << endl;
    cout << " Price : " << price << endl;
    cout << " model : " << model << endl;
    cout << " seats : " << seats << endl << endl ;
   }
  };
 // blue print ///

  int main(){
    car A;
    strcpy(A.name , "AUDI") ;
    A.price = 200;
    A.model = 2018 ;
    A.seats = 7;

    car B;
    strcpy(B.name , "maruti");
     B.price = 100;
    B.model = 2020 ;
    B.seats = 4;

    A.print();
    B.print();
    return 0;
  }