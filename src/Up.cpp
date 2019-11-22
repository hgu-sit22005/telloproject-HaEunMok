#include "Up.h"
#include <cstring>

Up::Up()
{
	command = new char[strlen("Up")+1];
	strcpy(command, "Up");
}

double Up::get_delay()
{ 
	return 0; 
}