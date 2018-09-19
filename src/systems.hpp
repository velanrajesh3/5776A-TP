Controller controller;

auto drive = ChassisControllerFactory::create(
	{-1,2,-3},
	{4,-5,6}, 
	AbstractMotor::gearset::green,
	{4_in,12.5_in}
);

Motor lift(4);
Motor claw(7);