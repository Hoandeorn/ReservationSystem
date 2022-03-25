#include "Precedure.h"

void Precedure::Login(string fileName, char identity){

    Identity *person = nullptr;

    ifstream ifs;
    ifs.open(fileName, ios::in);

    if (!ifs.is_open()){
        cout<<"File doesn't exist!"<<endl;
        ifs.close();
        sleep(1);
        system("clear");
        return;
    }

    string id;
    string userName;
    string password;

    while(true){
        int count = 0;
        if (identity=='1'){
            cout<<"Enter your student ID:"<<endl;
        }
        else if (identity=='2'){
            cout<<"Enter your employee ID:"<<endl;
        }
        else if (identity=='3'){
            cout<<"Enter your admin ID:"<<endl;
        }
        cin>>id;
        for(char c:id){
            if (c<='0' || c>='9'){
                cout<<"Invalid input. Please try again."<<endl;
                break;
            }
            count++;
        }
        if (count == id.size()) break;
    }



    cout<<"Enter your username:"<<endl;
    cin>>userName;
    //if exist

    cout<<"Enter your password (up to 20 characters):"<<endl;
    system(STTY_OPEN TTY_PATH);
    char inputPwd[20];
    for(int i=0;i<20;i++){
        inputPwd[i]=getchar();
        if (inputPwd[i]!='\r' && inputPwd[i]!='\b'){
            cout<<'*';
        }
        if (inputPwd[i]=='b'){
            cout<<"\b";
            i--;
            cout<<" ";
            cout<<"\b";
            i--;
        }
    }
    system(STTY_CLOSE TTY_PATH);
    //if exist


    if (identity=='1'){

    }
    else if (identity=='2'){

    }
    else if (identity=='3'){

    }

    cout<<"Login failed."<<endl;
    system("clear");

}