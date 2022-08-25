#include <iostream>
#include <fstream>
#include <string>


bool isLoggedIn(){
    std::string username, password, un, ps;

    std::cout<<"Enter username: ";
    std::cin>>username;
    std::cout<<"Enter password: ";
    std::cin>>password;

    std::ifstream read("datas\\"+username+".txt");
    getline(read, un);
    getline(read, ps);

    if(username==un && password==ps)
    {
        return true;
    } else
        return false;
};

int main(){
    int choice;
    Menu:
    std::cout<<"1.Register: \n2.Login: \nYour choice: ";
    std::cin>>choice;
    if(choice==1){
       std::string username, password;
       std::cout<<"Enter Username: "; std::cin>>username;
       std::cout<<"Enter Password: "; std::cin>>password;

       std::ofstream file;
       file.open("datas\\"+username+".txt");
       file<<username<<std::endl<<password;
       file.close();
       goto Menu;


    }else if(choice==2){
        bool status = isLoggedIn();
            if(!status){
                std::cout<<"No registered!!!"<<std::endl;

                return 0;
            } else std::cout<<"Welcome!!!";
    }else
    {
        std::cout<<"Enter only 1 or 2 "<<std::endl;
    }


    return 0;
}