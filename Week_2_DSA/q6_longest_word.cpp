#include<iostream>
#include<cstring>
using namespace std;
int main() {
   string a ;
   int sIndex = 0, eIndex = 0;
   int minLength = a.length(), maxLength = 0;
   int curLength = 0;
   string smallest, largest;
   cout<<"Enter a string: ";
   getline(cin,a);
   while (eIndex <= a.length()){
      if (a[eIndex] != '\0' && a[eIndex] != ' ')
         eIndex++;
      else{
         curLength = eIndex - sIndex;
         
         if (curLength > maxLength){
            largest = a.substr(sIndex, curLength);
            maxLength = curLength;
         }
         eIndex++;
         sIndex = eIndex;
      }
   }
   cout<<"Largest Word from the string is "<<largest<< " and has a lenght of "<<curLength;

}
