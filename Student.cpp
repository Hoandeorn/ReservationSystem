//
// Created by 黄志鸿 on 2022/3/25.
//

#include "Student.h"

Student::Student() = default;

Student::Student(string username, string password, int id){
    this->userName = username;
    this->password = password;
    this->id = id;
}

void Student::showMenu(){

    system("clear");
    char choice;

    while(true){
        cout << "======================  Student Reservation  =====================" << endl;
        cout << endl << "Input your option" << endl;
        cout << "\t\t -------------------------------\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|      1.New Reservation        |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|      2.Show Your Reservation  |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|      3.Show All Reservation   |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|      4.Cancel Reservation     |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|      0.Return                 |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t -------------------------------\n";
        cout << "Input your choice: ";

        cin>>choice;

        switch (choice){
            case '1':
                reservation();
                break;
            case '2':
                showSelfReservation();
                break;
            case '3':
                showAllReservation();
                break;
            case '4':
                cancelReservation();
                break;
            case '0':
                system("clear");
                return;
            default:
                system("clear");
                break;
        }

    }
};

void Student::reservation(){

};

void Student::showSelfReservation(){

};

void Student::showAllReservation(){

};

void Student::cancelReservation(){

};