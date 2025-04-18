#ifndef Guest_User_H
#define Guest_User_H
#include "baseclass.h"
class GuestUser:public User{
	public:
		GuestUser(string name,string pass):User(name,pass){}
		void showPrompt(){
			cout<<"Guest @ "<<username<<"$";
		}
		
};
#endif
