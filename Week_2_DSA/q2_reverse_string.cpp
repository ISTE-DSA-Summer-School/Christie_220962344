#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s;
    char temp;
    cout<<"Enter a string: ";
    cin>>s;
        for (int i =0 ;i<=s.length()/2;i++){

        temp = s[i];
        s[i] =  s[s.length() - i - 1];
         s[s.length() - i - 1] = temp;
    }
        
    cout<< "The reversed string is: "<< s;
        return 0;
}