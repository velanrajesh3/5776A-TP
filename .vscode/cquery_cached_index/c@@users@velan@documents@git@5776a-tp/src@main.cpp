#include "main.h"
using namespace okapi;

#include "./subsystems.hpp"
#include "./driver.hpp"

void autonomous() {

}

void opcontrol() {

	driver();

	while (true) {
		
		pros::delay(10);
	}
}
