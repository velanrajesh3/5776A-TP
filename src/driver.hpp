void driver(){
	
	drive.tank(controller.getAnalog(ControllerAnalog::leftY),
				controller.getAnalog(ControllerAnalog::rightY));
	claw.moveVelocity((controller.getDigital(ControllerDigital::L1) - controller.getDigital(ControllerDigital::L2) * 200 ));
	lift.moveVelocity((controller.getDigital(ControllerDigital::R1) - controller.getDigital(ControllerDigital::R2) * 200 ));
		
	pros::delay(10);
	
}