#include <iostream>
using namespace std;

int main(){
    int a , fact =1;
    int *i , *j;
    cout<<"Enter a number: ";
    cin>>a;
    i = &a;
    j = &fact;
    while(*i>0){
        
        *j = *j * *i;
        *i = *i - 1;
        
    }
    cout<<"The factorial of the number is: "<<fact;
    return 0;
}