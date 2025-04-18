#include "admin.h"
#include "guest.h"
int main(){
	AdminUser admin("admin","1234");
	GuestUser guest("guest","0000");
	if(admin.authenticate("1234")){
		admin.showPrompt();
	}
	cout<<endl;
	if(guest.authenticate("0000")){
		guest.showPrompt();
	}
	return 0;
}
