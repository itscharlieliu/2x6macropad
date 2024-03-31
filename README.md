# 2x6macropad

## steps to build and flash

1. Open Arduino IDE
2. Plug in Sparkfun pro micro
3. Tools > Board > Sparkfun AVR Boards > Sparkfun Pro Micro
4. Tools > Processor > "ATmega32U4 (3.3V, 8 MHZ)"
5. Write code

9. Fingers crossed and hope the board flashes correctly (LEDs should flash when successful)


## Notes
- Make sure voltage is correct. The micro usb boards are 5v. Reboot board into bootloader by double tapping reset and ground
- If you cannot flash because the serial port is not available, try resetting into bootloader first
  - Reboot board into bootloader by double tapping reset and ground
  - Press Upload button (Right arrow icon)
  - Quickly Reboot board into bootloader by double tapping reset and ground (Yes again)
