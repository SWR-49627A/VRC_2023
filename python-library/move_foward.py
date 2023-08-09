myVariable = 0

def when_started1():
    global myVariable
    
    # Driving Forward and Turning Right
    
    drivetrain.drive_for(FORWARD, 200, MM, wait=True)
    drivetrain.turn_for(RIGHT, 90, DEGREES, wait=True)
    
    # Driving Forward and Turning Left
    
    drivetrain.drive_for(FORWARD, 200, MM, wait=True)
    drivetrain.turn_for(LEFT, 90, DEGREES, wait=True)
    
    # Driving Reverse and Turning Left
    
    drivetrain.drive_for(REVERSE, 200, MM, wait=True)
    drivetrain.turn_for(LEFT, 90, DEGREES, wait=True)
    
    # Driving Forward and Turning Right
    
    drivetrain.drive_for(FORWARD, 200, MM, wait=True)
    drivetrain.turn_for(RIGHT, 90, DEGREES, wait=True)

when_started1()
