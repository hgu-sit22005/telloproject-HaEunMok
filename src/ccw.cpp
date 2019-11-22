#include "ccw.h"
#include <cstring>

ccw::ccw()
{
	command = new char[strlen("ccw")+1];
	strcpy(command, "ccw");
}

double ccw::get_delay()
{ 
	return 0; 
}