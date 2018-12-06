#include "main.h"
using namespace okapi;

#include "./subsystems.hpp"
#include "./driver.hpp"

void autonomous() {
	subsystems();

	chasis.moveAbosulte(500);
	

}

void opcontrol() {

	driver();

	while (true) {
		
		pros::delay(10);
	}
}
