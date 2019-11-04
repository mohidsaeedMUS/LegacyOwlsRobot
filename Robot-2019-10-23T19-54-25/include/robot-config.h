using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor LeftTop;
extern motor RightTop;
//extern motor ClawMotor;
extern motor ArmMotor;
//extern motor ArmMotor2;
extern motor LeftBottom;
extern motor RightBottom;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );