#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(true){
        if(n>2 && n%2==0){
            n = n/2;
        }
        else{
            break;
        }
    }
    if(n == 2){
        cout<<"true";
    }
    else{
        cout<<"False";
    }
}