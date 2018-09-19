#include "main.h"
using namespace okapi;

#include "./subsystems.hpp"
#include "./driver.hpp"

void autonomous() {

}

void opcontrol() {
	std::cout << "Hello";
	driver();
	while (true) {
		pros::delay(10);
	}
}
