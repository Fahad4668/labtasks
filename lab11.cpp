#include <iostream>
using namespace std;
int main(){
    int age;
    int income;
    int loan;
    int 
    cout <<"Enter your age"<<age<<endl;
    cin>>age;
    cout <<"Enter your monthly income: "<<income<<endl;
    cin>>income;
    cout<<"Enter the amount of loan you want: "<<loan<<endl;
    cin>>loan;
    if(age >21 && age < 60 || income >25000){
    cout<<"enter your age"<<age<<endl;
    cout<<"loan <= 500000"<<loan<<endl;
    }else if(income >40000){
        cout<<"loan >= 500000"<<loan<<endl;
    }
    return 0;
}