//
// Created by 黄志鸿 on 2022/3/25.
//

#include "Teacher.h"

Teacher::Teacher() = default;

Teacher::Teacher(string username, string password, int id){
    this->userName = username;
    this->password = password;
    this->id = id;
}

void Teacher::showMenu(){

    system("clear");
    char choice;

    while(true){
        cout << "======================  Teacher Interface  =====================" << endl;
        cout << endl << "Input your option" << endl;
        cout << "\t\t -------------------------------\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|      1.Show Reservation       |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|      2.Check Reservation      |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|      0.Return                 |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t -------------------------------\n";
        cout << "Input your choice: ";

        cin>>choice;

        switch (choice){
            case '1':
                showReservation();
                break;
            case '2':
                checkReservation();
                break;
            case '0':
                system("clear");
                return;
            default:
                system("clear");
                break;
        }

    }
}

void Teacher::showReservation(){

};

void Teacher::checkReservation(){

};
