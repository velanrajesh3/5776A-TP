#pragma once

#define subsystems() \
Controller controller;\
auto chassis = ChassisControllerFactory::create(\
	{1, 2, 3}, \
	{ -8,  -9,  -10}, \
	AbstractMotor::gearset::green, \
	{4_in, 10_in} \
);\
Motor claw(7); \
Motor lift(5); 

 
