int cnt = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.print("I am Counting to: ");
  Serial.print(cnt);
  Serial.println(" Mississipi.");
  cnt = cnt + 1;
  delay(1000);
}
