#pragma once

void driver(){
	while(1){
		chassis.tank(controller.getAnalog(ControllerAnalog::leftY), 
					 controller.getAnalog(ControllerAnalog::rightY));

		claw.moveVelocity((controller.getDigital(ControllerDigital::R1) - controller.getDigital(ControllerDigital::R2)) * 200);
		lift.moveVelocity((controller.getDigital(ControllerDigital::up) - controller.getDigital(ControllerDigital::down)) * 200);

		pros::delay(10);
	}
}

