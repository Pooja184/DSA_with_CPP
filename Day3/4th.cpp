// // 1. function without arguments and without return 
// #include<iostream>
// using namespace std;

// int main()
// {
//     void rectArea();
//     rectArea();
// }

// void rectArea()
// {
//     float area, len, bre;
//     cout<<"Enter l&b";
//     cin>>len>>bre;
//     area=len*bre;
//     cout<<"Area of rectangle:"<<area;
// }

// 2. function with arguments and without return
// #include<iostream>
// using namespace std;

// int main()
// {
//     void rectArea(float l , float b);
//     float len, bre;
//     cout<<"Enter l & b";
//     cin>>len>>bre;
//     rectArea(len,bre);
    
// }

// void rectArea(float l, float b)
// {
//    float area;
//    area=l*b;
//    cout<<"Area of rectangle is:"<<area;
// }

//without arguments with return

// #include<iostream>
// using namespace std;

// int main()
// {
//     float rectArea();
//     float area;
//     area=rectArea();
//     cout<<"Area of rectangle is:"<<area;
// }

// float rectArea()
// {
//     float len,bre,area;
//     cout<<"Enter l & b";
//     cin>>len>>bre;
//     area=len*bre;
//     return area;
// }


#include<iostream>
using namespace std;

int main()
{
    int addition(int num1, int num2);
    int n1,n2,add;
    cout<<"Enter two numbers";
    cin>>n1>>n2;
    add=addition(n1,n2);
    cout<<"addition of two numbers:"<<add;

}

int addition(int num1,int num2)
{
    int add;
    add=num1+num2;
    return add;
}


