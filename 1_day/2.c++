#include <iostream>
using namespace std;

// data types and varibles

//In C++, there are different types of variables (defined with different keywords), for example:

//int - stores integers (whole numbers), without decimals, such as 123 or -123
//double - stores floating point numbers, with decimals, such as 19.99 or -19.99
//char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
//string - stores text, such as "Hello World". String values are surrounded by double quotes
//bool - stores values with two states: true or false

int main(){

    //syntax : type variableName = value;

    int a = 141;
    cout << a << endl;
    cout<<"size of a is "<<sizeof(a)<<endl;

    float b = 3.5;
    cout << b << endl;
    cout<<"size of b is "<<sizeof(b)<<endl;

    double c = 3.55;
    cout<<c<<endl;
    cout<<"size of c is "<<sizeof(c)<<endl;

    char d = 'N';
    cout << d << endl;
    cout<<"size of d is "<<sizeof(d)<<endl;

    bool e = false;
    cout<<e<<endl;
    cout<<"size of e is "<<sizeof(e)<<endl;

    //Type Casting

    int num = 'a'; //97
    cout<<a<<endl;

    char ch = 98;
    cout<<ch<<endl;
   

}