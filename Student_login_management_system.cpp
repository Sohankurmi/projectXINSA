#include<iostream>
#include<string>
#include<vector>
using namespace std;
class user
{
private:
    string username,password;
public:
    user(string username,string password)
    {
        this->username=username;
        this->password=password;
    }
};
class user_manager
{
private:
    vector<user> users; //create object of vector
public:
    void Register_user()
    {
        string username,password;
        cout<<"\nEnter  User name";
        cin>>username;
        cout<<"\nEnter user password";
        cin>>password;

        user newUser(username,password);
        users.push_back(newUser);

        cout<<"\t\t user Register Succesfully ...."<<endl;
    }
};
int main()
{

    user_manager usermange;
    int op;
    cout<<"\n\n\t\t1.Register user"<<endl;
     cout<<"\t\t2.Login"<<endl;
     cout<<"\t\t3.Show user list"<<endl;
     cout<<"\t\t4.Search user"<<endl;
     cout<<"\t\t5.delete user"<<endl;
     cout<<"\t\t6.Exit"<<endl;
     cout<<"\t Enter Choice: ";
     cin>>op;
     switch(op)
        case 1:     usermange.Register_user();






}
