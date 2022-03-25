//
// Created by 黄志鸿 on 2022/3/25.
//

#include "Administrator.h"

Administrator::Administrator() = default;

Administrator::Administrator(string userName, string password){
    this->userName = userName;
    this->password = password;
};

void Administrator::showMenu(){

    system("clear");
    char choice;

    while(true){
        cout << "======================  Administrator Interface  =====================" << endl;
        cout << endl << "Input your option" << endl;
        cout << "\t\t -------------------------------\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|      1.Add Account            |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|      2.View Accounts          |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|      3.View Room Status       |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|      4.Clear all reservations |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|      0.Return                 |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t -------------------------------\n";
        cout << "Input your choice: ";

        cin>>choice;

        switch (choice){
            case '1':
                addAccounts();
                break;
            case '2':
                viewAccounts();
                break;
            case '3':
                viewRoomStatus();
                break;
            case '4':
                clearReservation();
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

void Administrator::addAccounts(){

}

void Administrator::viewAccounts(){

}

void Administrator::viewRoomStatus(){

}

void Administrator::clearReservation(){

}