#ifndef GPIO_H
#define GPIO_H

// Define GPIO modes
#define INPUT   0
#define OUTPUT  1

// Define logical states for digital output
#define HIGH    1
#define LOW     0

// Function prototypes
void gpio_init(int pin, int mode);
void gpio_set(int pin, int value);
int gpio_get(int pin);

#endif // GPIO_H