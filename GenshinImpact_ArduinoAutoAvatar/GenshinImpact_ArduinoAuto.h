// GenshinImpact_ArduinoAuto.h

#ifndef _GenshinImpact_ArduinoAuto_h
#define _GenshinImpact_ArduinoAuto_h

#include <HID.h>
#include "Keyboard.h"
#include "Mouse.h"

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
	
class GI_AA
{
public:
	Keyboard_ Key;
	Mouse_ Mouse;
	
};
typedef GI_AA GIAA;
#endif

