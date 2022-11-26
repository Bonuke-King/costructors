// a constructor is c++ is a special method or function that is automatically called when an object of a class is created
//to create a constructor use the same name as the class followed by a parentheses ()

#include <iostream>
#include <string.h>
using namespace std;

class myClass { // the class
public : //Access specifier
//the constructor has the same name as the class it is always public and it does not have any return value.
myClass() {
    cout <<"Hello World and hello bonuke this constructors behave differently in the calling compared to other functions or methods";

}
};
//constructor parameters
//constructors can also take parameters which can be useful for setting initial values for attributes.

class Car { //the class 
public : //access specifier
string brand; //attribute
string model; //attribute

int year; //attribute

Car (string x, string y, int z) {
    //construcor with parameters
    brand =x;
    model =y;
    year =z;
}

};
//constructors can also be declared inside the class and then define it outside of the class by specifying the name of the class , followed by the scope resolution :: operator followed by the name of the constructor
//which is the same as the class

//class Cryptos {
//public : //access specifier
//string consesusm; // attribute
//string chains; // attribute
//int year; //
// Cryptos (string x, string y, int z); //construction declaration
//};
//constructor definition outside the class
// Cryptos :: Cryptos(string x, string y, int z)
//{
  ////  consesusm =x;
  //  chains =y;
 //   year =z;
//}

int main ()
{
    myClass myObj; //create an object of myclass this will call the constructor
   cout<< endl<< endl;
//create car objects and call the costructor with different values
Car carObj1 ("BMW","X5",1999);
Car carObj2 ("Ford","Mustang",1968);

//pring values
cout << carObj1.brand<< " "<< carObj1.model<< " "<< carObj1.year<< "\n";
cout << carObj2.brand<< " "<< carObj2.model<< " "<< carObj2.year<< "\n";

//create crypto objects and call the constructor with different values
//Cryptos cryptObj1 ("proofofwork","blockchain" ,2009);
//Cryptos cryptObj2 ("proofofstake","ethereumchain",2013);

//print values
//cout << cryptObj1.consesusm<<" "cryptObj1.chains<< " "<< cryptObj1.year<<endl;
//cout << cryptObj2.consesusm<< " "cryptObj2.chains<< " "<< cryptObj2.year<<endl;
return 0;
}

























