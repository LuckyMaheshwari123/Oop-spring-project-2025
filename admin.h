#ifndef Admin_User_H
#define Admin_User_H
#include "baseclass.h"
class AdminUser:public User{
	public:
		AdminUser(string name,string pass):User(name,pass){}
		void showPrompt(){
			cout<<"Admin @ "<<username<<"$";
		}
		
};
#endif
