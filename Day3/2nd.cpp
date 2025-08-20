//Types of function
// 1. function without arguments and without return 
// 2. function with arguments and without return
// 2. function without arguments and with return
// 4. function with arguments and with return

// 1. function without arguments and without return 
// #include<iostream>
// using namespace std;

// int main()
// {
// void rectArea(); //declaration

// rectArea(); //call
// }

// void  rectArea()  //definition
// {
//     float len,bre,area;
//     cout<<"Enter the value for l&b :\n";
//     cin>>len>>bre;
//     area=len*bre;; 
//     cout<<"Area of reactangle :"<<area;
// }


// 2. function with arguments and without return
// #include<iostream>
// using namespace std;

// int main()
// {
//     void rectArea(float l, float b); //declaration
//     float len,bre;
//     cout<<"Enter the value for l&b :\n";
//     cin>>len>>bre;
//     rectArea(len,bre); //call


// }

// void rectArea(float l, float b)  //definition
// {
//     float area;
//     area =l*b;
//     cout<<"area of reactangle:"<<area;
// }

// 3. function without arguments and with return

#include<iostream>
using namespace std;

int main()
{
    float rectArea(); //declaration
    float area=rectArea(); //call
    cout<<"Area of reactangle :"<<area;

}

float rectArea()  //definition
{
    float len,bre,area;
    cout<<"Enter the value for l&b :\n";
    cin>>len>>bre;
    area=len*bre;
    return area;
}

// 4. function with arguments and with return
// #include<iostream>
// using namespace std;

// int main()
// {
//     float len,bre,area;
//     float rectArea(float l, float b); //declaration

//     cout<<"Enter the value for l&b :\n";
//     cin>>len>>bre;
//     area=rectArea(len,bre); //call

//     cout<<"Area of reactangle :"<<area;

// }

// float rectArea(float l, float b)  //definition
// {
//     return l*b;
// }