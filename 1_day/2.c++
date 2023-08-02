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
    
    cout<<"Data Types"<<endl;
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
    cout<<endl;

    //*Type Casting
    cout<<"Type Casting"<<endl;
    int num = 'a'; //97
    cout<<num<<endl;

    char ch = 98;
    cout<<ch<<endl;
    cout<<endl;

//operators
    cout<<"Types of Operators"<<endl;
    cout<<endl;

   // Arithmetic Operators
    cout<<"1. Arithmetic Operators"<<endl;
    int f, g;
    f = 7;
    g = 2;
    cout << "f + g = " << (f + g) << endl;
    cout << "f - g = " << (f - g) << endl;
    cout << "f * g = " << (f * g) << endl;
    cout << "f / g = " << (f / g) << endl;
    cout << "f % g = " << (f % g) << endl;
    cout<<endl;

// Assignment Operators
    cout<<"2. Assignment Operators"<<endl;
    int h, i;

    //2 is assigned to h
    h = 2;

    //7 is assigned to i
    i = 7;

    cout << "h = " << h << endl;
    cout << "i = " << i << endl;
    cout << "\nAfter h += i;" << endl;
    cout<<endl;

    //assigning the sum of a and b to a
    h += i;  // h = h + i
    cout << "h = " << h << endl;
    cout<<endl;

// Relational Operators
    cout<<"3. Relational Operators"<<endl;
    int j, k;
    j = 3;
    k = 5;
    bool result;

    result = (j == k);   // false
    cout << "3 == 5 is " << result << endl;

    result = (j != k);  // true
    cout << "3 != 5 is " << result << endl;

    result = j > k;   // false
    cout << "3 > 5 is " << result << endl;

    result = j < k;   // true
    cout << "3 < 5 is " << result << endl;

    result = j >= k;  // false
    cout << "3 >= 5 is " << result << endl;

    result = j <= k;  // true
    cout << "3 <= 5 is " << result << endl;
    cout<<endl;

// Logical Operators
    cout<<"4. Logical Operators"<<endl;
    result = (3 != 5) && (3 < 5);     // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    result = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    result = !(5 == 2);    // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5);    // false
    cout << "!(5 == 5) is " << result << endl;
    cout<<endl;

// Bitwise Operators
    cout<<"5. Bitwise Operators"<<endl;
    int x = 12, y = 25;
    cout << "x & y = " << (x & y) << endl;  //8
    cout << "x | y = " << (x | y) << endl;  //29
    cout << "x ^ y = " << (x ^ y) << endl;  //21
    cout << "~(" << x << ") = " << (~x) << endl; //-13
    cout<<endl;

// Other Operators

// sizeof -	returns the size of data type -	sizeof(int); // 4
// ?: -	returns value based on the condition -	string result = (5 > 0) ? "even" : "odd"; // "even"
// & -	represents memory address of the operand -	&num; // address of num
// . -	accesses members of struct variables or class objects -	s1.marks = 92;
// -> -	used with pointers to access the class or struct variables - ptr->marks = 92;
// << -	prints the output value - cout << 5;
// >> -	gets the input value -	cin >> num;

}