#ifndef STEPPER_MOTOR_DRIVER_H
#define STEPPER_MOTOR_DRIVER_H

// Enum for motor direction
typedef enum {
    CLOCKWISE,
    COUNTERCLOCKWISE
} StepperMotorDirection;

// Function prototypes
void stepper_motor_init();
void stepper_motor_set_direction(StepperMotorDirection direction);
void stepper_motor_start_rotation();

#endif // STEPPER_MOTOR_DRIVER_H
