import random
import time

while(1):
    temperature=random.randint(0,150)
    print("Temperature:",temperature)
    if(temperature>50):
        print("Temperature is high")
        print("The Alarm is ON")
    else:
        print("Temperature is LOW");
        print("The Alarm is OFF");
    humidity=random.randint(0,100)
    print("Humidity:",humidity)
    if(humidity>50):
        print("Humidity is higher than 50");
    else:
        print("Humidity is Less than 50");
    time.sleep(1); #3 SECOND DELAY
