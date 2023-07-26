#include<iostream>
using namespace std;

int main(){
    int i , j = 0, k , m;
    cout<<"Enter the length of the array: ";
    cin>>m;
    int arr[m],temp[m];
    cout<<"Enter elements in the array";
    for(int i = 0;i<m;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < m - 1; i++){
         if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
            m=m-1;
    }   
    cout<<"The new matrix is: ";
    for(i = 0;i<m;i++){
        cout<<temp[i];
    }
    return 0;
}