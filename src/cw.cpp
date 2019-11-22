#include "cw.h"
#include <cstring>

cw::cw()
{
	command = new char[strlen("cw")+1];
	strcpy(command, "cw");
}

double cw::get_delay()
{ 
	return 0; 
}