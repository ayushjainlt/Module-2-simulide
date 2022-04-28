# Introduction #
In this project we are going to design a circuit for measuring heat.The temperature sensor is used to measure the temperature.This circuit is developed using “Atmega328”, a linear voltage sensor.Heat is usually measured in “Centigrade” or “Faranheit” and used the SimuleIDE Software using Embedded C.

# Research: #
It is mostly used in different in-built instruments like vehicles or automated homes so that the user can see the temperature on daily basis.
It takes an analog input which further gets converts in digital to give the reading accordingly.

# Features: #
* Low Cost.
* Checks if the temperature is maintained or not.
* Robust System.
# Detail requirements #

# High Level Requirements: #

ID	| Description                                                                                                  | Status (Implemented/Future)
----|--------------------------------------------------------------------------------------------------------------|-------------------------------
HLR1| When the two switches are closed, the first LED glows indicating the actuation of the system.                | Implemented 
HLR2| Analog input from the temperature sensor.                                                                    | Implemented
HLR3| Display.                                                                                                     | Implemented
HLR4| User shall be set the temperature.                                                                           | Future

# Low Level Requirements: #

ID	 |Description                                                        | Status (Implemented/Future)
-----|-------------------------------------------------------------------|-------------------------------------
LLR1 | ADC with Pulse Width Modulation.                                  | Implemented 
LLR2 | Compatible on different Operating Systems.                         | Implemented 
LLR3 | Ac/Exhaust will automatically turns on when temperature increases. | Future

# SWOT Analysis: #
## Strengths: ##
* Heat modification can be done easily.
* Cost effective.
* Easy accessibility.

## Weakness: ##
* Not water proof.
* No Custom Settings.
* No Complex Computation.

## Opportunities: ##
* Quick Solutions.
* Standardized Process.

## Threats: ##
* Security Concern.
* Competitive Work.

# 4W's and 1'H #

Why: To check the temperature in the vehicles or house in different weather.

What: Temperature measurement system to measure the heat or cold.

Where: Automotive Industry,Household.

When: In areas with low,high or humid kind of temperature.

How: By installing the system in vehicles or houses.

# TEST PLAN: #
## High Level Test plan: ##

Test ID	 | Description	                                                   |      Exp I/P	|Exp O/P |	Actual Out|	Type Of Test
---------|-----------------------------------------------------------------|--------------|--------|------------|------------------
H_01	   | Is user able to read the temperature                    	       |   Samp ip	  |exp i/p |	act o/p   | 	Requirement based
H_02	   | Does the circuit turns off when the temperature beyond 30oC	   |      Samp i/p|	exp i/p|	act o/p	  |  Scenario Based
H_03	   | Is the LED enable to blink                           	         |      Samp i/p|	exp i/p|	act o/p	  |  Scenario Based
H_04	   | Is the user able to see the status of the circuit on PWM        |   	 Samp i/p	|exp i/p |	act o/p	  |  Requirement based

# Low Level Test Plan: #

Test ID	|Description	                                           |    Exp IN	          |Exp OUT	                   |Actual Out                   |	Type Of Test
--------|--------------------------------------------------------|----------------------|----------------------------|-----------------------------|-----------------
L_02	  |is the LM35(potentiometer) working	                     |   temperature varies	|microcontroller reads value |	microcontroller reads value|	Requirement based
L_03	  |is the LCD display working	                             |   'A'	              |A(displays)	               |A(displays)	                 | Requirement based
L_05	  |is the message is showing in serial monitor             |  	Samp ip	          |exp i/p	                   |act o/p	                     |Requirement based

# Output #

![1 ](https://user-images.githubusercontent.com/86312170/164793549-d6bf13eb-e8b0-49f2-a662-f4a459551bc2.png)
 


