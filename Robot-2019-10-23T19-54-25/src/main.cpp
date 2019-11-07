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
// ClawMotor            motor         3               
// ArmMotor             motor         10
// ArmMotor2            motor         12               
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
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................
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

  int ArmSpeedPCT = 5;
  
  // Deadband stops the motors when Axis values are close to zero.
  int deadband = 5;

  while (1) {
    // Get the velocity percentage of the left motor. (Axis3)
    int leftMotorSpeed = Controller1.Axis3.position();
    // Get the velocity percentage of the right motor. (Axis2)
    int rightMotorSpeed = Controller1.Axis2.position();

    // Set the speed of the left motor. If the value is less than the deadband,
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

    // Set the speed of the right motor. If the value is less than the deadband,
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

    // Spin both motors in the forward direction.
    LeftTop.spin(forward);
    LeftBottom.spin(forward);
    RightTop.spin(forward);
    RightBottom.spin(forward);

    if(Controller1.ButtonR1.pressing()) {
      ArmMotor.spin(directionType::fwd, ArmSpeedPCT, velocityUnits::pct);
      ArmMotor2.spin(directionType::rev, ArmSpeedPCT, velocityUnits::pct);
    }
    else if(Controller1.ButtonR2.pressing()) {
      ArmMotor.spin(directionType::rev,ArmSpeedPCT,velocityUnits::pct);
    }
    else{
      ArmMotor.stop(brakeType::brake);
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




