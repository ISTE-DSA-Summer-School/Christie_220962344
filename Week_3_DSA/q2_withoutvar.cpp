#include <iostream>
using namespace std;

int main(){
    int a , b;
    int *i,*j;
    cout<<"Enter two numbers to be swapped: ";
    cin>>a>>b;
    i = &a;
    j = &b;
    *i = *i - *j;
    *j = *j + *i;
    *i = *j - *i;
    cout<<"The swapped numbers are: "<<a<<" "<<b;
    return 0;
}