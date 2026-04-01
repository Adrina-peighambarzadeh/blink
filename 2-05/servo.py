# Servo control using Python (CircuitPython)

import time
import board
import pwmio
from adafruit_motor import servo

# create a PWM signal on pin D2
pwm = pwmio.PWMOut(board.D2, duty_cycle=2 ** 15, frequency=50)

# create servo object
my_servo = servo.Servo(pwm)

while True:
    # move to 0 degrees
    my_servo.angle = 0
    time.sleep(1)

    # move to 180 degrees
    my_servo.angle = 180
    time.sleep(1)
