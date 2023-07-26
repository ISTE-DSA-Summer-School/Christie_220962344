#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,i,j;
    int m1[a][b],m2[c][d],prod[i][j];
    cout<<"Enter dimensions of the first matrix: ";
    cin>>a>>b;
    cout<<endl<<"Enter the dimensions of the second matrix: "<<endl;
    cin>>c>>d;
    if(b != c){
        cout<<"The matrices cannot be multipiled";
        return 0;
    }
    cout<<"Enter the elements for the first matrix"<<endl;
    for(int m = 1; m <= a; m++){
        for(int n = 1 ; n <= b;n++){
            cin>>m1[m][n];
        }
    }
    cout<<"Enter the elements for the second matrix"<<endl;
    for(int m = 1; m <= c; m++){
        for(int n = 1 ; n <= d;n++){
            cin>>m2[m][n];
        }
    }
    for(int m = 0; m < a; m++){
        for(int n = 0; n < d; n++){
            for(int l = 0; l < b; l++){
                prod[m][n] = prod[m][n] +  m1[m][l] * m2[l][n];
            }
        }
    }
    cout<<"Enter the matrix after product is: "<<endl;
    for(int m = 1; m <= a; m++){
        for(int n = 1 ; n <= d;n++){
            cout<<prod[m][n]<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}