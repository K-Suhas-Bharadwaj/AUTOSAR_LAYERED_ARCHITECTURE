#include "engine_control_communication_service_layer.h"
#include "engine_control_communication_hardware_abstraction.h"

void communicationServiceLayer_init() {
    // Initialize communication hardware
    initializeCommunicationHardware();
}

void sendFuelInjectionCommand(float amount) {
    // Implementation of sending fuel injection command
    sendDataOverCommunicationInterface(&amount, sizeof(amount));
}

void sendIgnitionTimingCommand(float timing) {
    // Implementation of sending ignition timing command
    sendDataOverCommunicationInterface(&timing, sizeof(timing));
}
