#include <iostream>
using namespace std;
int main()
{
    int n=0;
    cout<<("Enter the maximum number of stars: ");
   cin>>(n);
    for (int c = 1 ;c<=n;c++){
        for(int k = 1; k<=c;k++){
           cout<<("*");
        };
        cout<<endl;
    };
    return 0;
}