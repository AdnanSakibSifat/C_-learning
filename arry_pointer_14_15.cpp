#include<iostream>
using namespace std;
struct as
{
     int eid;
     float salaray;
     char fav;
};
union emp
{
    int eid;
     float salaray;
     char fav;
};


int main(){
    //array
    int mark[5] = {40,39,49};
    int* a =mark;
    cout<< *(a+1);
    for(int i =0; i<5 ;i++){
        cout<<"all your array value is:"<<mark[i]<<endl;
    };
    //struct
     struct as fahim;
     struct as nafij;
     nafij.eid=500;
    nafij.salaray=12.5;
    nafij.fav ='B';
     fahim.eid=200;
     fahim.salaray=4.5;
     fahim.fav ='f';
     cout<<"All nafij value"<<endl;
    cout<<"id no:"<<nafij.eid<<endl;
    cout<<"monthly income:"<<nafij.salaray<<endl;
    cout<<"fav char:"<<nafij.fav<<endl;
    cout<<"all fahim value:"<<endl;
    cout<<"id no of fahim"<<fahim.eid<<endl;
    cout<<"monthly income:"<<fahim.salaray;
    //union
    return 0;
}