/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */  
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/  

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// LeftTop              motor         18              
// RightTop             motor         19              
// ClawMotor            motor         14               
// ArmMotor             motor         19               
// LeftBottom           motor         17              
// RightBottom          motor         20              
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;  

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You +must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................
  ClawMotor.spin(directionType::fwd, 30, velocityUnits::pct);
  wait(500, msec);
  ArmMotor.spin(directionType::fwd, 30, velocityUnits::pct);
  wait(500, msec);
  LeftTop.stop(brakeType::brake);
  LeftBottom.stop(brakeType::brake);
  RightTop.stop(brakeType::brake);
  RightBottom.stop(brakeType::brake);
  wait(100, msec);
  LeftTop.spin(directionType::fwd, 30, velocityUnits::pct);
  LeftBottom.spin(directionType::fwd, 30, velocityUnits::pct);
  RightTop.spin(directionType::fwd, 30, velocityUnits::pct);
  RightBottom.spin(directionType::fwd, 30, velocityUnits::pct);
  //vex::task::sleep(20);
  wait(2, sec);
  LeftTop.stop(brakeType::brake);
  LeftBottom.stop(brakeType::brake);
  RightTop.stop(brakeType::brake);
  RightBottom.stop(brakeType::brake);
  wait(100, msec);
  LeftTop.spin(directionType::fwd, 30, velocityUnits::pct);
  LeftBottom.spin(directionType::fwd, 30, velocityUnits::pct);
  RightTop.spin(directionType::rev, 30, velocityUnits::pct);
  RightBottom.spin(directionType::rev, 30, velocityUnits::pct);
  wait(1500, msec);
  LeftTop.stop(brakeType::brake);
  LeftBottom.stop(brakeType::brake);
  RightTop.stop(brakeType::brake);
  RightBottom.stop(brakeType::brake);
  wait(100, msec);
  LeftTop.spin(directionType::fwd, 60, velocityUnits::pct);
  LeftBottom.spin(directionType::fwd, 60, velocityUnits::pct);
  RightTop.spin(directionType::fwd, 60, velocityUnits::pct);
  RightBottom.spin(directionType::fwd, 60, velocityUnits::pct);
  wait(3, sec);
  LeftTop.stop(brakeType::brake);
  LeftBottom.stop(brakeType::brake);
  RightTop.stop(brakeType::brake);
  RightBottom.stop(brakeType::brake);
  wait(100, msec);
  LeftTop.spin(directionType::rev, 45, velocityUnits::pct);
  LeftBottom.spin(directionType::rev, 45, velocityUnits::pct);
  RightTop.spin(directionType::rev, 45, velocityUnits::pct);
  RightBottom.spin(directionType::rev, 45, velocityUnits::pct);
  wait(1, sec);
  ArmMotor.spin(directionType::rev, 30, velocityUnits::pct);
  wait(1500, msec);
  LeftTop.stop(brakeType::brake);
  LeftBottom.stop(brakeType::brake);
  RightTop.stop(brakeType::brake);
  RightBottom.stop(brakeType::brake);
  wait(100, msec);
  ClawMotor.spin(directionType::fwd, 30, velocityUnits::pct);
  wait(1, sec);
  LeftTop.spin(directionType::rev, 30, velocityUnits::pct);
  LeftBottom.spin(directionType::rev, 30, velocityUnits::pct);
  RightTop.spin(directionType::rev, 30, velocityUnits::pct);
  RightBottom.spin(directionType::rev, 30, velocityUnits::pct);
  wait(500, msec);
  LeftTop.stop(brakeType::brake);
  LeftBottom.stop(brakeType::brake);
  RightTop.stop(brakeType::brake);
  RightBottom.stop(brakeType::brake);
  wait(100, msec);
  LeftTop.spin(directionType::rev, 30, velocityUnits::pct);
  LeftBottom.spin(directionType::rev, 30, velocityUnits::pct);
  RightTop.spin(directionType::fwd, 30, velocityUnits::pct);
  RightBottom.spin(directionType::fwd, 30, velocityUnits::pct);
  wait(2, sec);
  LeftTop.stop(brakeType::brake);
  LeftBottom.stop(brakeType::brake);
  RightTop.stop(brakeType::brake);
  RightBottom.stop(brakeType::brake);
  wait(100, msec);
  LeftTop.spin(directionType::fwd, 30, velocityUnits::pct);
  LeftBottom.spin(directionType::fwd, 30, velocityUnits::pct);
  RightTop.spin(directionType::fwd, 30, velocityUnits::pct);
  RightBottom.spin(directionType::fwd, 30, velocityUnits::pct);
  wait(1, sec);
  LeftTop.stop(brakeType::brake);
  LeftBottom.stop(brakeType::brake);
  RightTop.stop(brakeType::brake);
  RightBottom.stop(brakeType::brake);
  wait(100, msec);
  LeftTop.spin(directionType::rev, 30, velocityUnits::pct);
  LeftBottom.spin(directionType::rev, 30, velocityUnits::pct);
  RightTop.spin(directionType::fwd, 30, velocityUnits::pct);
  RightBottom.spin(directionType::fwd, 30, velocityUnits::pct);
  wait(1, sec);
  LeftTop.stop(brakeType::brake);
  LeftBottom.stop(brakeType::brake);
  RightTop.stop(brakeType::brake);
  RightBottom.stop(brakeType::brake);
  wait(100, msec);
  LeftTop.spin(directionType::fwd, 30, velocityUnits::pct);
  LeftBottom.spin(directionType::fwd, 30, velocityUnits::pct);
  RightTop.spin(directionType::fwd, 30, velocityUnits::pct);
  RightBottom.spin(directionType::fwd, 30, velocityUnits::pct);
  wait(500, msec);
  LeftTop.stop(brakeType::brake);
  LeftBottom.stop(brakeType::brake);
  RightTop.stop(brakeType::brake);
  RightBottom.stop(brakeType::brake);
  wait(100, msec);
  LeftTop.spin(directionType::rev, 45, velocityUnits::pct);
  LeftBottom.spin(directionType::rev, 45, velocityUnits::pct);
  RightTop.spin(directionType::rev, 45, velocityUnits::pct);
  RightBottom.spin(directionType::rev, 45, velocityUnits::pct);
  wait(2, sec);
  LeftTop.stop(brakeType::brake);
  LeftBottom.stop(brakeType::brake);
  RightTop.stop(brakeType::brake);
  RightBottom.stop(brakeType::brake);
  wait(100, msec);
  ArmMotor.spin(directionType::rev, 45, velocityUnits::pct);
  wait(500, msec);
  ClawMotor.spin(directionType::rev, 30, velocityUnits::pct);
  wait(1, sec);
/*   LeftTop.spin(directionType::rev, 30, velocityUnits::pct);
  LeftBottom.spin(directionType::rev, 30, velocityUnits::pct);
  RightTop.spin(directionType::rev, 30, velocityUnits::pct);
  RightBottom.spin(directionType::rev, 30, velocityUnits::pct);
  wait(1, sec);  */
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/


void usercontrol(void) {
  // Initializing Robot Configuration. DO NOT REMOVE

  // int used for speed of the Arm motors.
  int ArmSpeedPCT = 30;
  int ClawSpeedPCT = 100;  
  int IntakeSpeedPCT = 100;
  // Deadband stops the motors when Axis values are close to zero.
  int deadband = 5;

  while (1) {
    // Get the velocity percentage of the left motors. (Axis3)
    int leftMotorSpeed = Controller1.Axis3.position();
    // Get the velocity percentage of the right motors. (Axis2)
    int rightMotorSpeed = Controller1.Axis2.position();

    // Set the speed of the left motors. If the value is less than the deadband,
    // set it to zero.
    if (abs(leftMotorSpeed) < deadband) {
      // Set the speed to zero.
      LeftTop.setVelocity(0, percent);
      LeftBottom.setVelocity(0, percent);
    } else {
      // Set the speed to leftMotorSpeed
      LeftTop.setVelocity(leftMotorSpeed, percent);
      LeftBottom.setVelocity(leftMotorSpeed, percent);
    }

    // Set the speed of the right motors. If the value is less than the deadband,
    // set it to zero.
    if (abs(rightMotorSpeed) < deadband) {
      // Set the speed to zero
      RightTop.setVelocity(0, percent);
      RightBottom.setVelocity(0, percent);
    } else {
      // Set the speed to rightMotorSpeed
      RightTop.setVelocity(rightMotorSpeed, percent);
      RightBottom.setVelocity(rightMotorSpeed, percent);
    }

    // Spin all motors in the forward direction.
    LeftTop.spin(forward);
    LeftBottom.spin(forward);
    RightTop.spin(forward);
    RightBottom.spin(forward);
    
    // If Button R1 on the controller is pressed,
    if(Controller1.ButtonR1.pressing()) {
      //Spin all arm motors forward, at the speed of int ArmSpeedPCT.
      ArmMotor.spin(directionType::fwd, ArmSpeedPCT, velocityUnits::pct);
    }
    // If Button R2 on the controller is pressed,
    else if(Controller1.ButtonR2.pressing()) {
      // Spin all arm motors reverse, at the speed of int ArmSpeedPCT.
      ArmMotor.spin(directionType::rev,ArmSpeedPCT,velocityUnits::pct);
    }
    // If neither button is pressed,
    else{
      // Stop all arm motors.
      ArmMotor.stop(brakeType::hold);
    } 
    // If Button L1 is being pressed
    if(Controller1.ButtonL1.pressing()) {
      // Spin ClawMotor forward at the speed of integer ClawSpeedPCT
      //ClawMotor.spin(directionType::fwd, ClawSpeedPCT, velocityUnits::pct);
      Intake1.spin(directionType::fwd, IntakeSpeedPCT, velocityUnits::pct);
      Intake2.spin(directionType::fwd, IntakeSpeedPCT, velocityUnits::pct);
    }
    // If Button L2 is being pressed
    else if(Controller1.ButtonL2.pressing()) {
      // Spin ClawMotor backwards at the speed of integer ClawSpeedPCT
      //ClawMotor.spin(directionType::rev, ClawSpeedPCT, velocityUnits::pct);
      Intake1.spin(directionType::rev, IntakeSpeedPCT, velocityUnits::pct);
      Intake2.spin(directionType::rev, IntakeSpeedPCT, velocityUnits::pct);
    }
    // If neither buttons are being pressed
    else{
      // Stop the ClawMotor and hold its position
      //ClawMotor.stop(brakeType::hold);
      Intake1.stop(brakeType::brake);
      Intake2.stop(brakeType::brake);
    }


    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
 }
 
//
// Main will set up the competition functions and callbacks.
//
int main() {
  vexcodeInit(); 
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}




