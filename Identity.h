//
// Created by 黄志鸿 on 2022/3/25.
//

#ifndef RESERVATIONSYSTEM_IDENTITY_H
#define RESERVATIONSYSTEM_IDENTITY_H

#include <iostream>
using namespace std;

class Identity {
public:
    virtual void showMenu()=0;

protected:
    string userName;
    string password;
};


#endif //RESERVATIONSYSTEM_IDENTITY_H
