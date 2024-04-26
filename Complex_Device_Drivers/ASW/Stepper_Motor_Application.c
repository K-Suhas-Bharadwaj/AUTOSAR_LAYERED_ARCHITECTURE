#include "Stepper_Motor_RTE.h"

int main() {
    initialize_system(); // Initialize system services provided by RTE

    while (1) {
        // Rotate stepper motor clockwise
        rotate_stepper_clockwise();
        // Delay for a certain period
        delay_ms(1000);
        
        // Rotate stepper motor counter-clockwise
        rotate_stepper_counterclockwise();
        // Delay for a certain period
        delay_ms(1000);
    }

    return 0;
}
