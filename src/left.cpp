#include "Left.h"
#include <cstring>

Left::Left()
{
	command = new char[strlen("Left")+1];
	strcpy(command, "Left");
}

double Left::get_delay()
{ 
	return 0; 
}