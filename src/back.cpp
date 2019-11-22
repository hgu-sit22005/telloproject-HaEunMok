#include "Back.h"
#include <cstring>

Back::Back()
{
	command = new char[strlen("Back")+1];
	strcpy(command, "Back");
}

double Back::get_delay()
{ 
	return 0; 
}