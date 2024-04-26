#include "engine_control_communication_hardware_abstraction.h"

void initializeCommunicationHardware() {
    // Initialize communication hardware peripherals
}

void sendDataOverCommunicationInterface(void *data, size_t size) {
    // Send data over communication interface
    // Example: UART, CAN, SPI, etc.
    sendOverUART(data, size);
}
