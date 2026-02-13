EEPROM Project

This project demonstrates how to use an EEPROM (Electrically Erasable Programmable Read-Only Memory) with a microcontroller like Arduino or ESP32. EEPROM allows you to store data permanently, even when the microcontroller is powered off.

Features

Store and retrieve small amounts of data (like settings, counters, or calibration values)

Non-volatile memory – data is retained after power off

Works with Arduino, ESP32, and other microcontrollers

Easy to read/write using built-in libraries

Components

1 × Arduino / ESP32 / compatible microcontroller

Optional: External EEPROM module (e.g., 24LC256)

Jumper wires

Usage

Connect the microcontroller and, if using, an external EEPROM module (typically via I2C: SDA & SCL pins).

Use the microcontroller’s EEPROM library to read and write data.

Store small pieces of information like counters, configuration, or sensor calibration values.

Data remains saved even after powering off the board.

Notes

Internal EEPROM of Arduino boards usually has limited write cycles (~100,000 writes per cell).

For larger storage, use external EEPROM modules.

Always check the datasheet for memory size and wiring details.

License

MIT License – free to use and modify.
