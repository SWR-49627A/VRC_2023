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
