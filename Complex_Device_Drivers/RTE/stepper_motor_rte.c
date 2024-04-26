#include "stepper_motor_rte.h"
#include "stepper_motor_driver.h" // Include stepper motor driver header

void initialize_system() {
    // Initialize services provided by Stepper Motor Driver Layer
    stepper_motor_init();
}

void rotate_stepper_clockwise() {
    // Rotate stepper motor clockwise using Stepper Motor Driver Layer function
    stepper_motor_set_direction(CLOCKWISE);
    stepper_motor_start_rotation();
}

void rotate_stepper_counterclockwise() {
    // Rotate stepper motor counter-clockwise using Stepper Motor Driver Layer function
    stepper_motor_set_direction(COUNTERCLOCKWISE);
    stepper_motor_start_rotation();
}
