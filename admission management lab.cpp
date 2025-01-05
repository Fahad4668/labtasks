#include <iostream>
using namespace std;
int main() {
    int choice;
    int seats = 10;
    int programs = 3;
    int students = 50;
    float percentage;
    int preferences;
        cout << "Please enter your choice (1 or 2):\n";
        cin >> choice;
        if (choice == 1) {
            int age;
            int mobileno;
            int id_card_number;
            string name, email, prev_record, pref;
            float percentage;
            cout << "Enter your name:\n";
            cin >> name;
            cout << "Enter your age:\n";
            cin >> age;
            cout << "Enter your email:\n";
            cin >> email;
            cout<<"Enter your mobileno:\n";
            cin>> mobileno;
            cout<<"Enter your id_card_number :\n";
            cin>> id_card_number;
            cout << "Enter your previous record:\n";
            cin >> prev_record;
            cout << "Enter your percentage:\n";
            cin >> percentage;
            if(percentage >=50) {
                cout << "enter your preferences\n";
            } else if(percentage <50) { 
                cout<<"percentage not meet\n";
            } 
        }   
        else if (choice == 2) {
            string email= "admin123";
            string confirm_email;
            cout<<"Enter your email"<<endl;
            cin>>confirm_email;
            if(confirm_email==email){
                cout<<"correct email enter password.\n";
            } else{
                cout<<"wrong email try again.\n";
            }
            int password = 123;
            int confirm_pass;
            cout << "Enter your password:\n";
            cin >> confirm_pass;
            if (confirm_pass == password) {
                cout << "Login successfully.\n";
            } else {
                cout << "Please enter the correct password.\n";
            }
        } 
        else {
            cout << "Invalid choice. Please try again.\n";
        }{
            int available_courses;
            cout<<"enter availablecourses";
            cin>> available_courses;
            int per_required=50;
            if ("minimum %>=50") {
                students++;
                cout << "Admission allocated. students++: " << seats << endl;
            } else {
                cout << "No criteria meet.\n";
            }
            if (seats > 0) {
                seats--;
                cout << "Admission allocated. Remaining seats: " << seats << endl;
            } else {
                cout << "No seats available.\n";
            }
            if (seats==0) {
                cout << "admission closed "<< seats<< endl;
            }
        } 
    return 0;
        
}    