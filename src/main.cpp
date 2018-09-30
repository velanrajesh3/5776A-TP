#include "main.h"  
using namespace okapi;

#include "./subsystems.hpp"
#include "./driver.hpp"

void autonomous() {

}

void opcontrol() {
	
	while (true) {

		driver();
	
	}
	pros::delay(10);
}
