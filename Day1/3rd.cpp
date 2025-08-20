#include<iostream>
using namespace std;

int main()
{
    float f, num;
    cout<<"Enter the temp in F:"<<endl;
    cin>>f;
    // num=(f-32)*(5.0/9.0);
    // type casting
    num=(f-32)*(float(5)/float(9));
    cout<<"celcius:"<<num;

}