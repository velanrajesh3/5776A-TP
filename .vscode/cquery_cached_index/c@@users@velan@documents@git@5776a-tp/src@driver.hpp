#pragma once

void driver(){
	subsystems();
	bool holding = false;
	double holdPosition = 0;

	while(1){
		chassis.tank(controller.getAnalog(ControllerAnalog::leftY),
					 controller.getAnalog(ControllerAnalog::rightY));

		claw.moveVelocity((( 1.5 *  controller.getDigital(ControllerDigital::R1)) - controller.getDigital(ControllerDigital::R2)) * 200);

		float liftPower = (controller.getDigital(ControllerDigital::L1) - controller.getDigital(ControllerDigital::L2)) * 100;

		if(liftPower != 0){
			lift.moveVelocity(liftPower);
		} else {
		//lift.moveVelocity(0);
		lift.setBrakeMode(AbstractMotor::brakeMode::hold);
		holdPosition = lift.getPosition();
		lift.moveAbsolute(holdPosition, 0);
		}

			/*if(controller.getDigital(ControllerDigital::up)){
				holdPosition = 50;
			}
			*/



			//holdPosition = (100 * HighpPole) + ( 100 * LowPole);



		pros::delay(10);
  }
}
