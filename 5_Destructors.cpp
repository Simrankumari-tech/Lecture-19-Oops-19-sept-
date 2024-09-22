#include<iostream>
#include <string.h>
using namespace std;

class car{
public :
 char name[100];
 int price ;
 int model ;
 int seats;

car(){
    cout << "default constructor : " << endl;
}
car(char* n, int p, int m , int s){
    cout << " parametrised constructor : " << endl;
    strcpy(name , n);
    price = p;
    model = m;
    seats = s;
}
car(car &x){
    cout << "copy constructor : " << endl;
    strcpy(name , x.name);
    price = x.price;
    model =x.model;
    seats = x.seats;
}
void operator = (car &x){
     cout << "copy Assignment : " << endl;
    strcpy(name , x.name);
    price = x.price;
    model =x.model;
    seats = x.seats;
}
  void print(){
     cout << " name   : " << name << endl;
    cout << " price  : " << price << endl;
    cout << " seats  : " << seats << endl;
    cout << " model  : " <<  model << endl << endl;;
    }
    ~car (){
        cout << "deleting " <<  name <<  endl;
    }
};
int main(){
    car A;
    strcpy(A.name , "BMW");
    A.price = 200;
    A.model = 2020;
     A.seats = 7;
     car B("maruti" , 200 , 2014 , 7);
car c= B;
c= A;
A.print();
B.print() ;
c.print();
return 0;
}