/*  Get Chip ID
 *  wemos.cc
 *  
 *  
 */
 
void setup() {
  Serial.begin(115200);
  pinMode(A0, INPUT);
}
 
void loop() {
  Serial.println(analogRead(A0));
  delay(100);
}
