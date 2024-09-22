#include<iostream>
#include<string.h>
using namespace std;
 //////////////// blueprint  ///////////////////
class car{
public :
   char name[100];
   int price ; 
    int seats ; 
    int model ;
    car (){
        cout << "inside default construtor  : " << endl;
    }
    car (char*n , int p , int m, int s){
        cout << "parameterised constructor : " << endl;;
        strcpy(name , n);
        price = p; 
        model = m;
        seats = s;
    }
    car (car &x){
         cout << " copy constructor : " << endl;
        strcpy(name , x.name);
        price = x.price; 
        model = x.model;
        seats = x.seats;
    }
    void operator = (car &x){
          cout << " copy assignment : " << endl;
        strcpy(name , x.name);
        price = x.price; 
        model = x.model;
        seats = x.seats;
    }
    void print(){
     cout << " name   : " << name << endl;
    cout << " price  : " << price << endl;
    cout << " seats  : " << seats << endl;
    cout << " model  : " <<  model << endl << endl;;
    }
};
 /////////////// blueprint ////////////////////////////
int main (){
    car A;
    strcpy(A.name , "bmw");
    A.price= 200;
    A.model= 2014;
    A.seats = 5;

car B("maruti" , 204 , 2017, 7);
car c= B;
c=A;
A.print();
B.print();
c.print();

return 0;
}






