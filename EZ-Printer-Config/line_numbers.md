## Configuration.h

+ ### BAUDRATE [42]
  +  Determines the communication speed of the printer

+ ### MOTHERBOARD [50]
  +  Defines the electronics board. Choose the name from boards.h

--------
### Thermal Settings

+ ### TEMP_SENSOR* [110]
  +  Temperature sensor settings

+ ### HEATER_MINTEMP & HEATER_MAXTEMP [127-138]
  +  The min & max temperature defines the temperature below which the heater will not be enabled
-------
### Mechanical Settings

+ ### #define ENDSTOPPULLUPS [274]
  +  When Mechanical endstops are used

+ ### ENDSTOP_INVERTING [296]
  +  NO - true , NC - false

+ ### define DISABLE_Z [316]
  +  Disables axis when it's not being used

-------
+ ### #define ULTRA_LCD [537]
  +  general LCD support

+ ### #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER [565]
--------

## Language.h

+ ### MACHINE_UUID [63]
  + Unique identifier
