#include <iostream>
#include <string>
using namespace std;

int main(){
string str;;
int max = 0;
int count;
cout<<"Enter a string: ";
getline(cin,str);
char word = str[0];
    for( int i = 0; i <= str.length(); i++){
        count = 0;
        for( int j = i ; j <= str.length(); j++){
            if(str[i] == str[j]){
                count++;
            }
        } 
        if(count > max){
            word = str[i];
            count = max;
        }      
    }
cout<<"The unrepated term is: "<< word;        
return 0;
}
    
