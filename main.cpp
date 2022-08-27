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
    srand(time(0));
    std::string pass;

    std::string data = "abcdefghyjklmnopqrstuvwxyz"
                       "ABCDEFGHYJKLMONPQRSTUVWXYZ"
                       "0123456789";
    for(int i=1; i<=12; i++){
        pass=pass+data[rand()%93];
    }
    std::cout<<"Generated Password: "<<pass<<std::endl;



    return 0;
}