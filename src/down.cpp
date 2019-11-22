#include "Down.h"
#include <cstring>

Down::Down()
{
	command = new char[strlen("Down")+1];
	strcpy(command, "Down");
}

double Down::get_delay()
{ 
	return 0; 
}