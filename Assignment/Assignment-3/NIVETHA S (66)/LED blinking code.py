 #LED BLINKING CODE FOR RASPBERRY PI


from machine import pin
from time import sleep

led1=pin(11,pin.OUT)
led2=pin(12,pin.OUT)

ledv=0.5

while True:

      led1.high()
      sleep(ledv)
      led1.low()
       
      led2.high()
      sleep(ledv)
      led2.low()
