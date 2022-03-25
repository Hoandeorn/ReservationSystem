//
// Created by 黄志鸿 on 2022/3/25.
//

#ifndef RESERVATIONSYSTEM_STUDENT_H
#define RESERVATIONSYSTEM_STUDENT_H

#include "Identity.h"

class Student: public Identity {
public:

    Student();
    Student(string userName, string password, int id);

    virtual void showMenu();
    void reservation();
    void showSelfReservation();
    void showAllReservation();
    void cancelReservation();

private:
    int id;
};


#endif //RESERVATIONSYSTEM_STUDENT_H
