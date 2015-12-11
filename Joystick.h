/*
 * Joystick.h
 *
 *  Created on: 11 gru 2015
 *      Author: drake
 */
#include "Arduino.h"

#ifndef JOYSTICK_H_
#define JOYSTICK_H_

class Joystick{
public:
	Joystick(int pin);
	void read();
	int getValue();
	int getMaxValue();
	int getMinValue();
	void setValue(int);
	void setMaxValue(int);
	void setMinValue(int);
	virtual ~Joystick();

private:
	int value;
	int pin;
	int maxValue;
	int minValue;
};


#endif /* JOYSTICK_H_ */
