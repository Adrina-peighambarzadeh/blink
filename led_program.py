# Created by: Adrina Peighambarzadeh
# Created on: Mar 2026
# RGB LED cycles through different colors

from gpiozero import RGBLED
from time import sleep

led = RGBLED(red=11, green=12, blue=13)

while True:
    led.color = (1, 0, 0)   # Red
    sleep(1)

    led.color = (0, 1, 0)   # Green
    sleep(1)

    led.color = (0, 0, 1)   # Blue
    sleep(1)

    led.color = (1, 1, 0)   # Red + Green (Yellow)
    sleep(1)

    led.color = (0, 1, 1)   # Green + Blue (Cyan)
    sleep(1)

    led.color = (1, 0, 1)   # Blue + Red (Magenta)
    sleep(1)

    led.color = (1, 1, 1)   # Red + Green + Blue (White)
    sleep(1)
    