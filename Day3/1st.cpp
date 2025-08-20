#include<iostream>
using namespace std;

int main()
{
    float len,bre,area;
    float rectArea(float l, float b); //declaration

    cout<<"Enter the value for l&b :\n";
    cin>>len>>bre;
    area=rectArea(len,bre); //call

    cout<<"Area of reactangle :"<<area;

}

float rectArea(float l, float b)  //definition
{
    return l*b;
}