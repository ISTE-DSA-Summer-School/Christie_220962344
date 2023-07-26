#include <iostream>
using namespace std;

void swap1(int *a,int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swap2(int &a,int &b){
    
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int a , b;
    cout<<"Enter two numbers to be swapped: ";
    cin>>a>>b;
    int *i = &a;
    int *j = &b;
    swap1 (i,j);
    cout<<"The swapped numbers are: "<<*i<<" "<<*j<<endl;
    swap2 (a,b);
    cout<<"The numbers swapped again are: "<<*i<<" "<<*j<<endl;
    return 0;
}
