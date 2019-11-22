#include "Right.h"
#include <cstring>

Right::Right()
{
	command = new char[strlen("Right")+1];
	strcpy(command, "Right");
}

double Right::get_delay()
{ 
	return 0; 
}