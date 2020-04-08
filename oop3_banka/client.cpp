#include "client.h"
int Client::objectsCount=0;

Client::Client(int c, std::string n)
{
	code=c;
	name=n;
	Client::objectsCount++;
}
Client::~Client()
{
	Client::objectsCount--; //snizi glob. pocet klientu
}

int Client::GetCode()
{
	return code;
}
std::string Client::GetName()
{
	return name;
}
void Client::Print()
{
	std::cout<<GetCode()<< ":" <<GetName();
}

int Client::GetObjectsCount()
{
	return Client::objectsCount;
}