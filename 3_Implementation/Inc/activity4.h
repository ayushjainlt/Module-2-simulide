#ifndef __ACTIVITY_4_H__
#define __ACTIVITY_4_H__
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#include <avr/io.h>

/**
 * @brief initializes registers
 *
 */
void USARTInit(uint16_t ubrr_value);

/**
 * @brief transmits character
 *
 */
void USARTWriteChar(char data);

/**
 * @brief Passes a string character by character to USARTWriteChar(char)
 *
 */
void USARTWritestring(char data[]);

#endif /* __ACTIVITY_4_H__ */
