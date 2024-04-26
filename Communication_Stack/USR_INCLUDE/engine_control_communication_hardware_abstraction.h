#ifndef COMMUNICATION_HARDWARE_ABSTRACTION_H
#define COMMUNICATION_HARDWARE_ABSTRACTION_H

// Function prototypes
void initializeCommunicationHardware();
void sendDataOverCommunicationInterface(void *data, size_t size);

#endif // COMMUNICATION_HARDWARE_ABSTRACTION_H
