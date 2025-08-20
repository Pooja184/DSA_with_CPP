#include<iostream>
using namespace std;

int main(){
   int num,n=1;
   cout<<"Enter the length:";
   cin>>num;

   // Q1. numbers to n length
//    for(int i=0;i<num;i++){
//     for(int j=1;j<=num;j++){
//         cout<<n<<" ";
//         n++;
//     }
//     cout<<"\n";
//    }

//Q2
    // for(int i=0;i<num;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }

// Q3
    // for(int i=1;i<=num;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i;
    //     }
    //     cout<<"\n";
    // }

//Q4
// char ch='A';
//     for(int i=0;i<num;i++){
//         for(int j=0;j<=i;j++){
//             cout<<ch;
//         }
//         ch++;
//         cout<<"\n";
//     }

//Q5
    // for(int i=0;i<=num;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<j+1;
    //     }
    //     cout<<"\n";
    // }

//Q6
    // for(int i=1;i<=num;i++){
    //     for(int j=i;j>=1;j--){
    //         cout<<j;
    //     }
    //     cout<<"\n";
    // }

//Q7
// int n1=1;
//     for(int i=1;i<=num;i++){
//         for(int j=i;j>=1;j--){
//             cout<<n1<<" ";
//             n1++;
//         }
//         cout<<"\n";
//     }

//Q7-Hw incompleted
// for(int i=1;i<=num;i++){
//     char ch='A';
//     for(int j=i;j>=1;j--){
//         cout<<ch;
//         ch--;
//     }
//     cout<<"\n";
// }

//Q8 
    // for(int i=1;i<=num;i++){
    //     for(int k=1;k<i;k++){
    //         cout<<" ";
    //     }
    //     for(int j=num;j>=i;j--){
    //         cout<<i;
    //     }
    //     cout<<"\n";
    // }

//Q9
// for(int i=1;i<=num;i++){
//         char ch='A'+i-1;
//         for(int j=1;j<=i;j++){
//             cout<<ch;
//             ch--;
//         }
//         cout<<"\n";
//     }

// Q10
    // for(int i=1;i<=num;i++){
    //     for(int k=1;k<i;k++){
    //         cout<<" ";
    //     }
    //     for(int j=i;j<=num;j++){
    //         cout<<i;
    //     }
    //     cout<<"\n";
    // }

// Q11
    // char ch='A';
    // for(int i=1;i<=num;i++){
    //     for(int k=1;k<i;k++){
    //         cout<<" ";
    //     }
    //     for(int j=i;j<=num;j++){
    //         cout<<ch;
    //     }
    //     ch++;
    //     cout<<"\n";
    // }

// Q12
for(int i=1;i<=num;i++){
    for(int k=num;k>i;k--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int j=i;j>1;j--){
        cout<<j-1;
    }
    cout<<"\n";
}
    return 0;
}