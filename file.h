#ifndef FILE_H
#define FILE_H
#include<string>
#include<iostream>
using namespace std;
class File{
	private:
		string name;
		string content;
		string createdby;
	public:
		File(const string &name,const string &creator):name(name),createdby(creator),content(" "){}
		void write(const string &data){
			content+=data+"\n";
		}
		string read()const{
		return content;
		}
		string getName() const{
		return name;
		}
		string getCreator()const{
		return createdby;
		}
		friend void compressFile(File & f);//to demonstrate friend fucntion
		
};
void compressFile(File &f){
	string original=f.content;
	string compressed=" ";
	for(char c: original){
		if(c!=' '&&c!='a'&&c!='e',c!='o',c!='u',c!='A'&&c!='E',c!='O',c!='U',c!='I',c!='i'){
			compressed+=c;
		}
	}
	f.content=compressed;
}
#endif

