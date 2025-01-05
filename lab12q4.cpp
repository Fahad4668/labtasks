#include<iostream>
using namespace std;
int main(){
    int number_a;
    int number_b;
    int number_c;
    cout<<"number_a";
    cin>>number_a;
    cout<<"number_b";
    cin>>number_b;
    cout<<"number_c";
    cin>>number_c;
    if("number_a>number_b&&number_c"){
        cout<<"number_a is greater";
    } else if("number_b>number_a&&number_c"){
        cout<<"number_b is greater";
    } else if ("number_c>number_a&&number_b"){
        cout<<"number_c is greater";
    }
    return 0;
}