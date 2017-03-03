# Marlin 3D Printer Firmware for the Tevo Black Widow

<img align="top" width=175 src="buildroot/share/pixmaps/logo/marlin-250.png" />

Marlin specific documentation can be found at [The Marlin Documentation Project](https://www.marlinfw.org/).
Please test this firmware and inform us if it misbehaves in any way, volunteers are standing by!

Marlin for the Tevo Black Widow is base off Release Candidate -- Marlin 1.1.0-RC8 - 6 Dec 2016
For the Marlin specific release notes refere to the Marlin RC brach located here: https://github.com/MarlinFirmware/Marlin/tree/RC.

Tevo Black Widow Specific Changes:

Version 1.1.0-RC8 03-02-17 Version 3.2
- Added replaced "Babystep Z" in the main menu during a print with "Live adjust Z" if using an auto leveling probe.  Live adjust Z
  modifies the Z offset in realtime and saves the eeprom on exit.
- Removed unused example configurations.
- Add status_printf function for status line of display.
- Added hotend name to heating status indicator.
- Applied a fix to display E steps with a M503 if more than one extruder configured.
- Added Dariy & Simon thermistor table and set it to be used as the default for the hotend.

Version 1.1.0-RC8 02-07-17 Version 3.1
- Made the cooldown option when stopping a print from sd card a configurable option in Configuration.h.  By default this
  option is enabled.  Comment out #define SD_STOP_AUTO_COOLDOWN located in the Extra Features section
  of the configuration.h to disable this feature.
- Apply some fixes to the manual bed leveling routine that could cause the homing prompts to hang.
  

Version 1.1.0-RC8 01-16-17 Version 3
- Improved display responsiveness.
- Changed default speed and acceleration settings to make them more conservative to prevent stepper skipping.
- Included a bug fix for BLTouch see: https://github.com/MarlinFirmware/Marlin/issues/5650
- Changed menu item selection from hollow box to inverted box.
- Added a confirm to stop print when printing from SD card.
- Fixed a bug in the stop print function by adding code to shutdown the hotend and heatbed.
- Changed the menu beep duration from 100ms to 10ms.
- Default to single bed probing when auto leveling with G29 (double touch is a waste of time see: https://goo.gl/fzHGji).
- Updated GCode scripts to keep print head in bounds (some users can't take the print head to a negitive location).
- Updated Conditionals_post.h so the #define XXXXXX_PROBE_BED_POSITION statements are no longer needed.
- Enabled the LCD info menu.
- Changed the move axis menu to select the axis first and distance second.
- Relocated the move axis menu item to the top of the prepare menu.  
- Added filament change option to the prepare menu.
- Reduced the duration of the filament change beep from 300ms to 20ms.
- Changed the code to always show the BLTouch reset option in the prepare menu.

Version 1.1.0-RC8 12-27-16 Version 2
- Added "Babystep Z" to the Main Menu when performing a print.  This allows the user to quickly access the the realtime z height ajustment.
- Changed BABYSTEP_MULTIPLICATOR to 10 as the default of 1 is way to slow to make noticeable corrections.
- Lowered LCD_UPDATE_THRESHOLD from 135 to 50 to improve display response time.
- Updated the above gcode start script to a version that is more friendly with corner clamps.

Version 1.1.0-RC8 12-22-16 (Initial Release) Version 1
- Removed Tevo boot screen to speed up the marlin boot process.
- Added "#define TEVO_BLTOUCH" to the Configuration.h and associated #ifdef to probe support sections to enable BLTOUCH support.
- Added support to drive the extruder cooling fan on port E1 of the MKS Gen motherboard.  
- Changed extruder fan speed to 80% to reduce noise and vibration, see the file "Configuration_adv.h" at the
line "#define EXTRUDER_AUTO_FAN_SPEED   204 // == 80% to reduce noise"
- Increased the display menu timeout from 15 seconds to two minutes by changing the line "#define LCD_TIMEOUT_TO_STATUS 15000"
to "#define LCD_TIMEOUT_TO_STATUS 120000" in the file ultralcd.h.
- Used a combination of settings derived from the offical Tevo port of the Black Widow firmware and currently released community
firmware releases.

[![Flattr this git repo](http://api.flattr.com/button/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=ErikZalm&url=https://github.com/MarlinFirmware/Marlin&title=Marlin&language=&tags=github&category=software)
