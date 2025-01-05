#include<iostream>
using namespace std;
int main(){
    int number1;
    int number2;
    char operation;
    cout<<"simple calculator"<<endl;
    cout<<"enter number1";
    cin>>number1;
    cout<<"enter operation (+,-,*,/):";
    cin>>operation;
    cout<<" enter number2";
    cin>>number2;
    switch(operation){
    case '+':
    cout<<"result:"<<number1+number2<<endl;
    break;}
    return 0;
}