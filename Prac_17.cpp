/*
Write a Program to accept a directed graph G and compute the 
in-degree and out-degree of each vertex.
*/


#include <iostream>
using namespace std;

int arr[100][100];
int main(){
    int vertex,edge;
    int in=0, out=0;
    cout<<"Enter the No. of Vertices :";
    cin>>vertex;
    cout<<"Enter the No. of Edges :";
    cin>>edge;
    cout<<"Enter the Directed Vertices"<<endl;
    for(int i=1; i<=edge ;i++){
        int v1,v2;
        cin>>v1>>v2;
        arr[v1][v2]=1;
    }
    cout<<endl<<"The Matrix for the Given data is: "<<endl;
    for(int i=1;i<=vertex;i++){
        for(int j=1;j<=vertex;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=1; i<=vertex;i++){
        cout<<"Out degree for "<<i<< " : ";
        for(int j=1; j<=vertex;j++){
            if(arr[i][j]== 1){
                out=out+1;
            }
        }
        cout<<out;
        cout<<endl;
        out=0;4
    }
    cout<<endl<<endl;
    for(int i=1; i<edge;i++){
        cout<<"In degree for "<<i<< " : ";
        for(int j=1; j<edge;j++){
            if(arr[j][i]== 1){
                in=in+1;
            }
        }
        cout<<in;
        cout<<endl;
        in=0;
    }
    return 0;
    
}