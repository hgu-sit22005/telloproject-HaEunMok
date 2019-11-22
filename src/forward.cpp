#include "Forward.h"
#include <cstring>

Forward::Forward()
{
	command = new char[strlen("Forward")+1];
	strcpy(command, "Forward");
}

double Forward::get_delay()
{ 
	return 0; 
}