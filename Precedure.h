//
// Created by 黄志鸿 on 2022/3/25.
//

#ifndef RESERVATIONSYSTEM_PRECEDURE_H
#define RESERVATIONSYSTEM_PRECEDURE_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define TTY_PATH "/dev/tty"
#define STTY_CLOSE             "stty raw -echo -F "
#define STTY_OPEN            "stty -raw echo -F "


#include "globalFile.h"
#include "Identity.h"
#include <fstream>

class Precedure {
public:

    void Login(string fileName, char identity);

};


#endif //RESERVATIONSYSTEM_PRECEDURE_H
