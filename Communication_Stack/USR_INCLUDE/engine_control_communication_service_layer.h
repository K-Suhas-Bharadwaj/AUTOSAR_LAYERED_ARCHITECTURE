#ifndef COMMUNICATION_SERVICE_LAYER_H
#define COMMUNICATION_SERVICE_LAYER_H

// Function prototypes
void communicationServiceLayer_init();
void sendFuelInjectionCommand(float amount);
void sendIgnitionTimingCommand(float timing);

#endif // COMMUNICATION_SERVICE_LAYER_H
