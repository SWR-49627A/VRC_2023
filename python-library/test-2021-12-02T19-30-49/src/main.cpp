/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Wed Sep 25 2019                                           */
/*    Description:  Clawbot Template (4-motor Drivetrain, No Gyro)            */
/*                                                                            */
/*    Name:                                                                   */
/*    Date:                                                                   */
/*    Class:                                                                  */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 10, 11, 20   
// ArmMotor             motor         3               
// ClawMotor            motor         8               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
}


//test code for robot to move fwd for 9 secs
// fr - p1
// br - p10
// fl - p11
// bl - p20

pragma config(Motor,  port1,           frontRightMotor, tmotorNormal, openLoop, reversed)
pragma config(Motor,  port10,           backRightMotor, tmotorNormal, openLoop, reversed)
pragma config(Motor,  port11,           frontLeftMotor, tmotorNormal, openLoop)
pragma config(Motor,  port20,           backLeftMotor, tmotorNormal, openLoop)
  
  
  
task main()
{
	wait1Msec(2000);						// Robot waits for 2000 milliseconds before executing program
  
  double fr_motor_speed = 63.5;
  double br_motor_speed = 63.5;
  double fl_motor_speed = 63.5;
  double bl_motor_speed = 63.5;
  
	// Move forward at full power for 3 seconds
	motor[frontRightMotor] = fr_motor_speed;		  // Motor on port1 is run at full (127) power forward
	motor[backRightMotor]  = br_motor_speed;		  // Motor on port10 is run at full (127) power forward
	motor[frontLeftMotor] = fl_motor_speed;		  // Motor on port11 is run at full (127) power forward
	motor[backLeftMotor]  = bl_motor_speed;		  // Motor on port20 is run at full (127) power forward
	wait1Msec(9000);			            // Robot runs previous code for 3000 milliseconds before moving on
}
