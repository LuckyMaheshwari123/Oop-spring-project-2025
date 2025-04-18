#ifndef USER_H
#define USER_H
#include<iostream>
#include<string>
using namespace std;
class User{
	protected:
		string username;
		string password;
	public:
		User(){
			username="unknown";
			password="unknown";
		
		}
		User(string username,string password):username(username),password(password){};
		virtual void showPrompt()=0;
		string getUsername()const{
			return username;
		
		}
		bool authenticate(const string &inputpassword){
			return inputpassword==password;
		}
		virtual ~User(){}
		
};
#endif
