#include <iostream>
using namespace std;
int main()
{
    int k=0,n=0;
    cout<<("Enter the maximum number of stars: ");
    cin>>(n);
    for (int c = n;c<=n;c--){
         for(int s=0;s<n-c;s++)
           cout<<" ";
         for(int f = 1; f<=c;f++){
           cout<<("*");
          
        };
        cout<<endl;
    };
    return 0;
}