//
// Created by 黄志鸿 on 2022/3/25.
//

#ifndef RESERVATIONSYSTEM_ADMINISTRATOR_H
#define RESERVATIONSYSTEM_ADMINISTRATOR_H

#include "Identity.h"

class Administrator: public Identity {
public:
    Administrator();
    Administrator(string name, string password);

    virtual void showMenu();
    void addAccounts();
    void viewAccounts();
    void viewRoomStatus();
    void clearReservation();

};


#endif //RESERVATIONSYSTEM_ADMINISTRATOR_H
