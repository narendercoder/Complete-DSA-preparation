#include <iostream>
using namespace std;

//conditionals and loops
int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
   
   //if loop
    if(n>0)
    {
        cout<<n<<" is positive"<<endl;
    }
    else if(n<0)
    {
        cout<<n<<" is negative"<<endl;
    }
    else{
        cout<<n<<" is neither positive nor negative"<<endl;
    }
    return 0;

    //for loop
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }

}