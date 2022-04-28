# TEST Cases: #
## High level test plan: ##

ID	 |Description	                                                         | Exp I/P|Exp O/P |	Actual Out|	Type Of Test 
-----|---------------------------------------------------------------------|--------|--------|------------|------------------------
H_01 | Is user able to get the temperature in Display                      |Samp ip	| exp i/p|	act o/p	  |  Requirement based
H_02 | Is user able to read temperature	                                   |Samp i/p|	exp i/p|	act o/p	  |  Scenario Based
H_03 | Is the user able to see the blinking led	                           |Samp i/p|	exp i/p| act o/p	  | Scenario Based
H_04 | Is the user able to see the status of the circuit on PWM            |Samp i/p|	exp i/p|	 act o/p	|  Requirement based      

## Low Level Test Plan: ##

Test ID	|Description	                                   |   Exp IN         |	Exp OUT	                    |Actual Out	                 |Type Of Test
--------|------------------------------------------------|------------------|-----------------------------|----------------------------|----------------------------------
L_02	  |  is the LM35(potentiometer) working	           |temperature varies|	microcontroller reads value	|microcontroller reads value |	Requirement based
L_03	  | is the LCD display working	                   | 'A'	            |A(displays)	                |A(displays)	               |Requirement based
L_05	  |  is the message is showing in serial monitor   | 	Samp ip	        |exp i/p                      |	act o/p	                   |Requirement based
