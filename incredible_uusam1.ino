#define pinTran 7
#define pinSensorTMP 0

void setup()
{
  Serial.begin(9600);
  pinMode(pinTran, OUTPUT);
  digitalWrite(pinTran, LOW);
}

void loop()
{
  	int temp = analogRead(pinSensorTMP);
  	temp = map(temp, 20, 358, -40, 125);
  	Serial.println(temp);
	char comando = Serial.read();
  
  /*if(comando == '1'){
  	digitalWrite(pinTran, HIGH);
  }
  if(comando == 'd'){
  	digitalWrite(pinTran, LOW);
  }*/
  if(temp >= 30){
    digitalWrite(pinTran, HIGH);
  }
  else{
    digitalWrite(pinTran, LOW);
  }
  delay(1000);
}