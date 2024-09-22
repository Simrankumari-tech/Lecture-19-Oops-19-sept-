#include<iostream>
#include<string.h>
using namespace std;
//////////////////blueprint/////////////////////
class Car{
public :

char name[100];
int price;
int seats;
int model;

Car () {
    cout << "inside default constructor  : " << endl;
}
Car(char*n , int p, int m , int s){
    cout << " inside parametrised constructor : " << endl;
    strcpy(name , n);
     price = p; 
     model = m;
     seats = s;
}
Car(Car &x){
    cout << " inside copy constructor : " << endl;
    strcpy(name , x.name );
    price = x.price;
    model = x.model;
    seats = x.seats;

}
void print(){
    cout << " name   : " << name << endl;
    cout << " price  : " << price << endl;
    cout << " seats  : " << seats << endl;
    cout << " model  : " <<  model << endl;
 }

};

int main(){
    Car A;
    strcpy(A.name , "bmw") ;
    A.price = 300;
    A.model = 2026;
    A.seats = 5;

    Car B("maruti " , 2020 , 6, 8);
    // Car C("audi" , 100 , 4 , 9);
Car C= B;

A.print();
B.print();
C.print();
return 0;
}




