#include <boost/python.hpp>

#include "TelloPro.h"
#include "takeoff.h"
#include "land.h"
#include "back.h"
#include "ccw.h"
#include "cw.h"
#include "down.h"
#include "forward.h"
#include "left.h"
#include "right.h"
#include "Up.h"

TelloPro* get_instance(boost::python::str _inst)
{
	std::string instance = boost::python::extract<std::string>(_inst);

	if(instance == "takeoff")
	   return new Takeoff;
	else if(instance == "land")
		return new Land;
	else if(instance == "back")
		return new Back;
	else if(instance == "ccw")
		return new ccw;
	else if(instance == "cw")
		return new cw;
	else if(instance == "down")
		return new Down;
	else if(instance == "forward")
		return new Forward;
	else if(instance == "left")
		return new Left;
	else if(instance == "right")
		return new Right;
	else if(instance == "Up")
		return new Up;
	else
		return nullptr;
}

BOOST_PYTHON_MODULE(TelloPro)
{
	def("get_instance", get_instance,
			      boost::python::return_value_policy<boost::python::manage_new_object>());
	
	boost::python::class_<TelloPro>("TelloPro")
		.def("get_command", &TelloPro::get_command)
		.def("get_delay", &TelloPro::get_delay);
}

