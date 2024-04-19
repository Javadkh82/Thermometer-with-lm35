void setup() {
  Serial.begin(9600); //setup serial
}

void loop() {
 
  float voltage = analogRead(A0);  //read the inpute voltage (analog pin A0)
  float temp = voltage * (0.48828125); //computing Temp
  Serial.print("Temp = "); //show Temp
  Serial.print(temp); //show Temp
  Serial.print("\xC2\xB0"); //show Temp
  Serial.println("C"); //show Temp
  delay(2000); //waits for 2 second

}
