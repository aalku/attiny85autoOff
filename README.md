# attiny85autoOff
Circuit/Software that allow Attiny 85 to be powered on with a button and later power off itself.

With this circuit your microcontroller consume no power until a button is pressed. It is powered while the button is down but it can hold it's own power on once the button is released and later let itself go off when the program commands it.

All this only uses one I/O pin of the microcontroller so it really suits attiny85 that only have 5 of them.
Additionaly once the microcontroller is on it can read if the button is pressed or not. You can use it for power off or any other thing. So you can tell not even that pin is wasted. It must be an analog pin. This should work with any microcontroller capable of turning on a pullup resistor on an analog I/O pin and then set it as a low level output.

The basic circuit uses 4 resistors and two transistors. The example code uses a led (with it's associated resistor) to show if the button is pressed and show when the power off is commanded by the program.

I used a similar design to make a thermometer that turned on with a button and turned off after 30s but that one used an additional pin to sense the button once powered on. That is not needed any more with this new design.

Please feel free to contribute however you want.
