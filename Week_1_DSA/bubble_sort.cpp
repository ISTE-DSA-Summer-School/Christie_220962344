#include<iostream>
using namespace std;
int main()
{
    int n, i, array[80], j, temp;
    cout<<"Enter the Size: ";
    cin>>n;
    cout<<"Enter the elements ";
    for(i=0; i<n; i++)
        cin>>array[i];
        
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    cout<<"\nThe New Array is: \n";
    for(i=0; i<n; i++)
        cout<<array[i];
    
    return 0;
}
