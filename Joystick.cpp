/*
 * Joystick.cpp
 *
 *  Created on: 11 gru 2015
 *      Author: drake
 */

#include "Joystick.h"

//TODO poprzedni krok w max/min wartosci, konwerter, kalibrator

	Joystick::Joystick(int pin_p){
		pin = pin_p;
		pinMode(pin, INPUT);
	}

	void Joystick::read(){
		setValue(analogRead(pin));
		setMaxValue(getValue());
		setMinValue(getValue());


	}
	int Joystick::getValue(){
		return value;

	}
	void Joystick::setValue(int v){
		value = v;

	}

	int Joystick::getMaxValue(){
		return maxValue;

	}
	void Joystick::setMaxValue(int v){
		if (v > getMaxValue()){
		maxValue = v;
		}
	}

	int Joystick::getMinValue(){
		return minValue;
	}
	void Joystick::setMinValue(int v){
		if (v < getMinValue()){
			minValue = v;
		}
	}
//	int Joystick::getLastMaxValue();
//		if (v != getMaxValue()){
//			lastMaxValue = v;
//			}

Joystick::~Joystick() {
	// TODO Auto-generated destructor stub
}

