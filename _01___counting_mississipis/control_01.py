import serial # biblioteca serial

arduinoSerialData = serial.Serial('/dev/ttyACM2', 9600)

while (1==1):
	if (arduinoSerialData.inWaiting()>0):
		myData = arduinoSerialData.readline()
		print(myData.decode())