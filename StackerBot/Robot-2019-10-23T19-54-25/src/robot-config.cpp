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
motor ClawMotor = motor(PORT14, ratio18_1, false);
motor ArmMotor = motor(PORT15, ratio18_1, false);
motor Intake1 = motor(PORT1, ratio18_1, false);
motor Intake2 = motor(PORT2, ratio18_1, false);
//motor ArmMotor2 = motor(PORT9, ratio18_1, true);
//motor ArmMotor3 = motor(PORT7, ratio18_1, false);
//motor ArmMotor4 = motor(PORT8, ratio18_1, false);
//motor ElbowMotor = motor(PORT5, ratio18_1, false);
//motor ElbowMotor2 = motor(PORT6, ratio18_1, false);
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