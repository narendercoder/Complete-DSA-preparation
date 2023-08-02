#include<iostream>
using namespace std;

int main()
{
    // Loops
    // Print number from 1 to n
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int number = 1;
    while(number<=n)
    {
        cout<<number<<" ";
        number = number+1;
    }
    cout<<endl;
    // Sum from 1 to n
    int n1;
    cout<<"Enter the value of n1"<<endl;
    cin>>n1;
    int sum = 0;
    int num = 1;
    while(num<=n1)
    {
        sum = sum + num;
        num = num+1;
    }
    cout<<"Sum is "<<sum<<endl;
    // Check Number is prime or not
    int n2;
    cout<<"Enter the value of n2"<<endl;
    cin>>n2;
    int numb = 2;
    while(numb<n2)
    {
        if(n2%numb==0)
        {
          cout<<n2<<" is not prime"<<endl;
          return 0;
        }
        numb = numb+1;
    }
    cout<<n2<<" is prime"<<endl;
    return 0;
}