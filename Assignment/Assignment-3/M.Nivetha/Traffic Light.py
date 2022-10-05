import RPi.GPIO as GPIO
from time import sleep
GPIO.setmode(GPIO.BOARD)
red=7
yellow=11
green=13
GPIO.setup(red, GPIO.OUT)
GPIO.setup(yellow, GPIO.OUT)
GPIO.setup(green, GPIO.OUT)
while True:
        GPIO.output(red, True)
        print("RED - ON")
        sleep(5)
        GPIO.output(red,False)
        GPIO.output(yellow, True)
        print("YELLOW - ON")
        sleep(1)
        GPIO.output(yellow,False)
        GPIO.output(green, True)
        print("GREEN - ON")
        sleep(3)
        GPIO.output(green,False)
GPIO.cleanup()
