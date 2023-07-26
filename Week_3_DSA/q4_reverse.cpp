#include <iostream>
using namespace std;

int main(){
    int a , rev =0 , digit =0;
    int *i , *j, *k;
    cout<<"Enter the number to be reversed: ";
    cin>>a;
    i = &a;
    j = &rev;
    k = &digit;
    while(*i>0){
        *k = *i % 10;
        *j = *j *10 + *k;
        *i = *i / 10;
    }
    cout<<"The reversed number is: "<<rev;
    return 0;
}