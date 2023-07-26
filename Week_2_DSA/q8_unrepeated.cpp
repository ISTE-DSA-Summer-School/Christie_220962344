#include <iostream>
#include <string>
using namespace std;

char find_repeating(string str){
    int count;
    for( int i = 0; i <= str.length(); i++){
        count = 0;
        for( int j = 0 ; j <= str.length(); j++){
            if(str[i] == str[j]){
                count++;
            }
        } 
        if(count == 1){
            return str[i];
        }      
    }
}    
int main(){
string str;
int count = 0, i ,k , j;
cout<<"Enter a string: ";
getline(cin,str);
cout<<"The unrepated term is: "<< find_repeating(str);        
return 0;
}
    
