/*
 Name:		GenshinImpact_ArduinoAutoAvatar.ino
 Created:	2021/3/20 21:57:11
 Author:	GengG
*/
#include <HID.h>
#include "Keyboard.h"
#include "Mouse.h"

#include "GenshinImpact_ArduinoAuto.h"

GIAA gia2;

void UsartInit()
{
	int isInit = 1;
	while (isInit)
	{
		Serial.begin(9600);
		Serial.println("Serial Init...");
		isInit = 0;
	}
	Serial.println("Serial Init Finish");

}

void KeyboardInit()
{
	int isInit = 1;
	while (isInit)
	{
		gia2.Key.begin();
		Serial.println("Key Init...");
		isInit = 0;
	}
	Serial.println("Key Init Finish");
}

void MouseInit()
{
	int isInit = 1;
	while (isInit)
	{
		gia2.Mouse.begin();
		Serial.println("Mouse Init...");
		isInit = 0;
	}
	Serial.println("Mouse Init Finish");
}

// the setup function runs once when you press reset or power the board
void setup() 
{
	UsartInit();
	KeyboardInit();
	MouseInit();
}

// the loop function runs over and over again until power down or reset
void loop() 
{
	int isReLoop = 0;
	while (!isReLoop)
	{
		gia2.Mouse.move(100, 100, 0);
		Serial.println("Mouse Move 100 100 0");
	}
}
