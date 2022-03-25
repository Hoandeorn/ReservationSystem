#include "Identity.h"
#include "Precedure.h"
#include "Student.h"
#include "Teacher.h"
#include "Administrator.h"

//void pause(){
//    do {
//        cout << '\n' << "Press the Enter key to continue...";
//    } while (cin.get() != '\n');
//}

int main(){
    system("clear");
    char choice = '0';
    while(true){

        cout << "======================  Welcome to the reservation system  =====================" << endl;
        cout << endl << "Input your identity" << endl;
        cout << "\t\t -------------------------------\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          1.Student            |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          2.Teacher            |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          3.Administrator      |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          0.Exit               |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t -------------------------------\n";
        cout << "Input your choice: ";

        cin>>choice;

        Precedure precedure;

        switch (choice){
            case '1'://student
                precedure.Login(STUDENT_FILE, '1');
                break;
            case '2'://teacher
                precedure.Login(TEACHER_FILE, '2');
                break;
            case '3'://administrator
                precedure.Login(ADMIN_FILE, '3');
                break;
            case '0':
                cout<<"Bye."<<endl;
                exit(0);
            default:
                system("clear");
                break;
        }

    }
}