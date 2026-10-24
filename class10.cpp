#include<iostream>
using namespace std;
int main(){
    for(int i = 1;i <= 50; i++){
        cout<<"your for loop value is:"<<i<<endl;
    }
    int i=1;
    while(i<=50){
        cout<<"your while value is:"<<i<<endl;
        i++;
    }
    int x=1 ,y=0,z;
    cout<<"enter a value:";
    cin>>z;
    do{
        y=y+x;
        x++;
    }while(x<=z);
    cout<<"your summation of " << z <<" number is:"<<y;
    return 0;
}