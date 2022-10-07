 #TRAFFIC LIGHTS CODE FOR RASPBERRY PI

from machine import pin
from time import sleep


Red_led=pin(13,pin.OUT)
Green_led=pin(14,pin.OUT)
Yellow_led=pin(15,pin.OUT)
delay=3


while True:
       Red_led.high()
       print("STOP")
       sleep(delay)
       Red_led.low()
       

       Green_led.high()
       print("GO")
       sleep(delay)
       Green_led.low()

       Yellow_led.high()
       print("READY TO GO")
       sleep(delay)
       Yellow_led.low()
