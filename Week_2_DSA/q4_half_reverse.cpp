#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s;
    char temp;
    cout<<"Enter a string: ";
    cin>>s;
    for (int i =0 ;i<s.size()/4;i++){

        temp = s[i];
        s[i] =  s[s.size()/2 - i - 1];
        s[s.size()/2 - i - 1] = temp;
    }
    for (int i = s.size()/2 ;i<3*s.size()/4;i++){

        temp = s[i];
        s[i] =  s[3*s.size()/2 - i - 1];
        s[3*s.size()/2 - i - 1] = temp;
    }    
   cout<<"The string is "<<s;
}