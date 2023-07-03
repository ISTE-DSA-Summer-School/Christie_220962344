#include <iostream>
using namespace std;

int main()
{
    int array[80];
    int n,temp,lenght;
    cout<<"Enter the lenght of the array";
    cin>>n;
    cout<<"Enter the elements in tha array: ";
    for(int i=0;i<=n-1;i++){
        cin>>array[i];
    }
    lenght=n/2;
    cout<<"The reversed array is: ";
    for(int j=0;j<=lenght;j++){
        temp=array[j];
        array[j]=array[n-j-1];
        array[n-j-1]=temp;
    }
    for(int i=0;i<=n-1;i++){
        cout<<array[i];
    }
    return 0;
}

