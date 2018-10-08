#pragma once

void driver(){
	subsystems();

	double holdPosition = 0;

	while(1){
		chassis.tank(controller.getAnalog(ControllerAnalog::leftY),
					 controller.getAnalog(ControllerAnalog::rightY));

		claw.moveVoltage((( 1.3 * controller.getDigital(ControllerDigital::R1)) - controller.getDigital(ControllerDigital::R2)) * 12000);

		float liftPower = (controller.getDigital(ControllerDigital::L1) - controller.getDigital(ControllerDigital::L2)) * 12000;

		if(liftPower != 0){
			lift.moveVoltage(liftPower);
		} else {
	
		//lift.setBrakeMode(AbstractMotor::brakeMode::hold);

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
