#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s,l;
    char temp;
    cout<<"Enter a string: ";
    cin>>s;
    l=s;
    for (int i =0 ;i<=s.size()/2;i++){

        temp = s[i];
        s[i] =  s[s.size() - i - 1];
         s[s.size() - i - 1] = temp;
    }
        
    if (l == s){
        cout << "The given string is a palindrome";
    }
    else{
        cout << "The given string is not a palindrome";
    }
        return 0;
}