#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include "CANTalon.h"
#include "RobotMap.h"
#include "Joystick.h"

class DriveTrain : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	DriveTrain();
	void InitDefaultCommand();
	void Drive(Joystick* joy);
	CANTalon* motor = new CANTalon(MOTOR);
};

#endif  // DriveTrain_H
