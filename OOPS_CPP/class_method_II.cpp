#include <bits/stdc++.h>
using namespace std;

class myClass               //The Class
{ 

public:                     // Access Specifier

    void myMethod();        //Method/function declearation

};

void myClass ::myMethod(){      //metod/ Function defination outside the class
     cout<<"Hello World!";
}

int main()
{
    myClass myObj1;         //create an object
    myObj1.myMethod();      //call the method

    return 0;
}