#include<iostream>
#include<string.h>
using namespace std;
//////////////////////// blue print///////////////////////
class car{
 public :
 char name[100] ;
 int price ;
 int seats ;
 int model;
 // 1. default constructor 
 car() {
    cout << "inside default constructor : " << endl; ;
 }

 //2. parametrised constructor
 car( char*n, int p , int s, int m){
    cout << "parametrised characterr : " << endl;
    strcpy(name , n);
    price = p;
    seats = s;
    model = m;
 }
 // 3. parameterised constructor-2
 car(char*n , int p, int s ){
        strcpy(name , n);
    price = p;
    seats = s;
    model = 2020;
 }
 void print(){
    cout << " name   : " << name << endl;
    cout << " price  : " << price << endl;
    cout << " seats  : " << seats << endl;
    cout << " model  : " <<  model << endl;
 }

};
//////////////////////// blue print///////////////////////
int main(){
  car A;
    strcpy(A.name  , "AUDI");
    A.price = 200;
    A.model = 2020;
    A.seats = 5;

    car B("maruti" , 200 , 6 , 2016);
    car C("BMW" ,  300 , 6);
    A.print();
    B.print();
    C.print();
    return 0;
}
