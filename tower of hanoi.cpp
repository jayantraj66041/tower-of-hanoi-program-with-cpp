#include<iostream>
using namespace std;
void toh(int x, char a, char b, char c){
    if(x!=0){
        toh(x-1,a,c,b);
        cout<<a<<"->"<<c<<endl;
        toh(x-1,b,a,c);
    }
}
int main(){
    cout<<"Enter the no. of disk - ";
    int a;
    cin>>a;
    toh(a,'A','B','C');
}
