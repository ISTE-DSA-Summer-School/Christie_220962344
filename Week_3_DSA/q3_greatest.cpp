#include <iostream>
using namespace std;

int main(){
    int a , b, c;
    int *i , *j, *k;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    i = &a;
    j = &b;
    k = &c;
    if(*i>*j){
        if(*i>*k){
            cout<<"a is the greatest";
        }
        else if(*i<*k){
            cout<<"c is the greatest";
        }
    }
    else if(*i<*j){
        if(*j>*k){
            cout<<"b is the greatest";
        }
        else if(*j<*k){
            cout<<"c is the greatest";
        }
    }
    return 0;
}