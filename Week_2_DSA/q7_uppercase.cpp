#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    for(int i = 0;i <= str.length() ; i++){
        if ( str[i] > 96 && str[i] < 123){
            str[i] = str[i] - 32;
        }
        else{
            break;
        }
    }
    cout<<"The string in uppercase is: "<< str;
    return 0;
}