//
// Created by 黄志鸿 on 2022/3/25.
//

#ifndef RESERVATIONSYSTEM_TEACHER_H
#define RESERVATIONSYSTEM_TEACHER_H

#include "Identity.h"

class Teacher: public Identity {
public:
    Teacher();
    Teacher(string username, string password, int id);
    virtual void showMenu();
    void showReservation();
    void checkReservation();

private:
    int id;

};


#endif //RESERVATIONSYSTEM_TEACHER_H
