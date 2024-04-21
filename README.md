# MARS-Task-2

Aim:
To contorl a DC motor(RMCS-2089) using the MD10C R3 motor driver where the input is the distance measured by the ultrasonic sensor.


Thought Process and Applications:
 Basic idead:
      - Since only direction and speed control was given two pins to control the motor is sufficient. 
      - The (dirpin) controls the direction of the motor and the (motorpin) controls the speed of the motor.
      - The trigpin and echopin control the functioning of the ultrasonic sensor.
Applications:
      - Can be used in navigation systems with the correct callibrations.
      - Can be used in apllications where precise movements and measurements are required.
      - Ex:
           - If the distance is very low from an obstacle ( say less than 25 cm ), then the motor should rotate in such a way that the rover/car goes in the opposite direction of the obstacle.
           - If the nearest obstacle is very far away ( say more than 200 cm ), then the motor should rotate in such a way that the rover/car can move ahesd with a considerable amount of speed


Procedure:
    Pin selections:
        - Direction of the motor (dirpin)                 - Any DIGITAL Pin in the Arduino UNO ( HIGH - Clockwise && LOW - AntiClockwise { According to the viewing point } ) [Ex: Digital Pin 4]
        - Driver pin of the motor (motorpin)              - Any PWM Pin in the Arduino UNO ( 0 - 255 is the range possible where 0 is complete STOP and 255 is the maximum speed )
        - Trigger pin of the Ultrasonic Sensor (trig pin) - Any PWM Pin in the Arduino Uno 
        - Echo pin of the Ultrasonic Sensor (echo pin)    - Any PWN Pin in the Arduino Uno
    Important calulations:
        - distance=0.034/2 ( Converting the reading from the ultrasonic sensor to the required units )
    Steps:
        - Connect the ultrasonic sensor to the Arduino wiht proper grounding and pin control.
        - Coonect the MD10C R3 motor driver as follows:
                                                      - (Dir pin) of the motor driver to (digital pin 4) of the Arduino
                                                      - (PWM pin) of the motor driver to (PWN pin 5) of the Arduino
                                                      - (GND) of the motor driver to (any of the GNDs) of the Arduino
        - Connect the motor to to the motor driver
        - Connect the battery to the notor driver ( Be careful with the polarity ) 
        - Write the corresponding code to meet the required parameters and then execute it.

Resorces:
        - https://github.com/CytronTechnologies/CytronMotorDriver/blob/master/CytronMotorDriver.h
        - https://my.cytron.io/tutorial/controlling-10a-dc-motor-driver-using-arduino-nano
        - https://docs.google.com/document/d/1rgQzn-nWn-qcWNnHjDZvIYqUrdCeBQQxXA-TU3BF0AQ/view
        - https://www.youtube.com/watch?v=kA38GhkUOso
  

      
        

        .
