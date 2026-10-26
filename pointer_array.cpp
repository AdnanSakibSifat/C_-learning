#include<iostream>
using namespace std;
//learning array and pointer 
int main(){
    int a =4;
    int* b= &a;
    int** c = &b;
    cout<<"Ram address of a is:"<<b<<endl;
    cout<<"Ram address of a is:"<<**c<<endl;
}