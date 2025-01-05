#include<iostream>
using namespace std;
int main(){
    int side_a;
    int side_b;
    int side_c;
    cout<<"enter side_a_value"<<endl;
    cin>>side_a;
    cout<<"enter side_b_value"<<endl;
    cin>>side_b;
    cout<<"enter side_c_value"<<endl;
    cin>>side_c;
    if("side_a==side_b==side_c"){
        cout<<"the triangle is equilateral"<<endl;}//a==b==c
        else if("side_a==side_b"){
            cout<<"the triangle is isosceles"<<endl;}
    if("side_a+side_b<side_c"){
        cout<<"invalid triangle"<<endl;//a+b>c
    }
    if("side_a==0"){
        cout<<"invalid triangle"<<endl;
    }
    return 0;
}