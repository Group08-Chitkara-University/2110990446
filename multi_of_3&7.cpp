#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if (n%3==0){
        cout<<"It is a multiple of 3"<<endl;

    }
    else 
        cout<<"Not mutliple of 3"<<endl;
    if (n%7==0){
        cout<<"It is a multiple of 7"<<endl;
    
    }
    else 
    cout<<"Not a multiple of 7"<<endl;
}