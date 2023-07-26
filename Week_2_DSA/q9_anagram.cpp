#include <iostream>
#include <string>
using namespace std;
    
int main(){
string str1;
string str2;
int flag = 0;
cout<<"Enter a string: ";
getline(cin,str1);
cout<<"Enter another string: ";
getline(cin,str2);
if(str1.length() == str2.length()){
    for(int i = 0; i <= str1.length();i++){
        for(int j = 0; j <= str1.length();j++){
            if(str1[i] = str2[j]){
                flag = 0;
                break;
            }
            else{
                flag = 1;
            }
        }
    }
    if(flag == 1){
        cout<<"The given strings are not anagrams";
    }
    else{
        cout<<"The given strings are anagrams";
    }
}
else{
    cout<<"The given strings are not anagrams";
}
return 0;
}
    
