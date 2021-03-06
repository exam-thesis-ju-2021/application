#include "hardware.h"
#include <stdlib.h>

void hw_init()
{
	hw_reset();
	hardware.states = malloc(sizeof(PinState) * 8);
	hardware.peripherals = malloc(sizeof(Peripheral) * 8);

	for (int i = 0; i < 8; i++)
		hardware.states[i] = LOW;
}

void hw_reset()
{
	free(hardware.states);
	free(hardware.peripherals);
}

void digital_write(uint8_t gpio, PinState state)
{
	hardware.states[gpio] = state;
}

PinState digital_read(uint8_t gpio)
{
	return hardware.states[gpio];
}

void analog_write(uint8_t gpio, void* data)
{
	if (hardware.states[gpio] == LOW)
		return;

	Peripheral* peripheral = &hardware.peripherals[gpio];
	peripheral->write(peripheral, data);
}

void* analog_read(uint8_t gpio)
{
	if (hardware.states[gpio] == LOW)
		return NULL;

	Peripheral* peripheral = &hardware.peripherals[gpio];
	return peripheral->read(peripheral);
}

void set_peripheral(uint8_t gpio, Peripheral peripheral) 
{
	hardware.peripherals[gpio] = peripheral;
}