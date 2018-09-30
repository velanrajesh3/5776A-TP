#pragma once

Controller controller;

auto chassis = ChassisControllerFactory::create(
	{-1, 2, -3}, // Left Motors
	{8, -9, 10}, // Right Motors
	AbstractMotor::gearset::green, // 200 RPM
	{4_in, 12.5_in} // 4 in wheels and 12.5 in wheelbase width
);

Motor claw(7);
Motor lift(4);