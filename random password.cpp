// random password generator
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
string getpassword(int length)
{
    string password=" ";
    string characters="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890";
    int charsize=characters.size();
    srand(time(0));
    int randomIndex;
    for(int i=0; i<length; i++)
    {
        randomIndex=rand()%charsize;
        password=password+characters[randomIndex];
    }
    return password;
}

int main()
{
    int length;
    cout<<"Enter the  length of password you want:";
    cin>>length;
    string password=getpassword( length);
    cout<<"Your password is"<<password<<endl;

    return 0;
}
