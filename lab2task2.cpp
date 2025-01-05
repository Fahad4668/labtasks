#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout <<"enter first integer";
    cin >> num1;
    cout << "enter second integer";
    cin >> num2;
    if(num1>num2){
    cout<<"number1 is larger"<<endl;
    } else if(num1<num2){cout<<"number 2 is larger";}
    else{cout<<"number1=number2";}
    return 0;
}