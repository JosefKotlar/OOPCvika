#include <string>
#include <iostream>
#ifndef __client
#define __client

class Client
{
private:
	static int objectsCount;
	int code;
	std::string name;
public:	
	Client(int c, std::string n);
	~Client();
	int GetCode();
	std::string GetName();
	void Print();
	static int GetObjectsCount();
};
#endif