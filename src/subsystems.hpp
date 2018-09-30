#pragma once

Controller controller;

auto chassis = ChassisControllerFactory::create(
	{1, 2, 3}, // Left Motors
	{ -8,  -9,   -10}, // Right Motors
	AbstractMotor::gearset::green, // 200 RPM
	{4_in, 10_in} // 4in Wheels and 12.5in WheelBase Width
);

Motor claw(7); //Port 7
Motor lift(5); // Port 5