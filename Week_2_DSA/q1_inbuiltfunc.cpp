#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1;
    string str2;
    string str;
    int i,n;
    cout<<"Enter string: "<<endl;
    getline(cin,str1);
    cout<<"Enter another string: "<<endl;
    getline(cin,str2);
    i=str1.compare(str2);
    cout<<i<<endl;
    if (i>0){
        cout<<" Second String is more than First String."<<endl;
    }

    else if(i==0){
        cout<<"Second String is equal to First String."<<endl;
    }

    else{
        cout<<"Second String is less than First String."<<endl;;
    }
    cout<<"String 1 and String 2 : "<< str1.append(str2)<<endl;;

    cout<<"Enter the string to find in string 1: "<<endl;
    getline(cin,str);
    cout<<str1.find(str)<<endl;

    cout<<"Enter string to insert in string 1: "<<endl;
    getline(cin,str);
    cout<<"Enter index to be inserted at: "<<endl;
    cin>>n;
    str1.insert(n,str);
    cout<<str1<<endl;
    
    return 0;
} 
   
