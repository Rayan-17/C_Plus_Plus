// User Input:-

// #include <iostream>
// using namespace std;

// int main() {
//     int a[2][2], b[2][2], sum[2][2];

//     cout << "Enter elements of the first 2x2 matrix:" << endl;
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 2; j++)
//             cin >> a[i][j];

//     cout << "Enter elements of the second 2x2 matrix:" << endl;
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 2; j++)
//             cin >> b[i][j];

//     cout << "Sum of the matrices:" << endl;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             sum[i][j] = a[i][j] + b[i][j];
//             cout << sum[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// Without User Input:-


#include<iostream>
using namespace std;
int main(){
    int m1[2][2]={{1,1},{2,2}},m2[2][2]={{-1,-1},{-2,-2}},result[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j]=m1[i][j]+m2[i][j];
        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++)
        {
            cout<<result[i][j]<<"\t";
            }
        cout<<endl;
    }

}