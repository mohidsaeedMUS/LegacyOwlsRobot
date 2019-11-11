#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor LeftTop = motor(PORT18, ratio18_1, false);
motor RightTop = motor(PORT19, ratio18_1, true);
//motor ClawMotor = motor(PORT3, ratio18_1, false);
motor ArmMotor = motor(PORT10, ratio18_1, false);
motor ArmMotor2 = motor(PORT9, ratio18_1, true);
motor LeftBottom = motor(PORT17, ratio18_1, false);
motor RightBottom = motor(PORT20, ratio18_1, true);

// VEXcode generated functions

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}