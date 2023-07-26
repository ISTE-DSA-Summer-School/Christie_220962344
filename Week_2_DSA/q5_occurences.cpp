#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1;
    string str2;
    int res = 0;
    int j = 0;
    cout<<"Enter string: ";
    getline(cin,str1);
    cout<<endl<<"Enter the string to find: ";
    getline(cin,str2);
    cout<<endl;
    
    for (int i = 0; i <= str1.length() - str2.length(); i++) {
        for (int j = 0; j < str2.length() ; j++){
            if (str1[i + j] != str2[j])
                break;
        }
            
        if (j == str2.length() - 1) {
            res++;
        }
    }
    cout<<"The number of occurences are "<<res;
    return 0;
}
   