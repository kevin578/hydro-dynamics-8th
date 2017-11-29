  void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
  }

void loop() {
  // put your main code here, to run repeatedly:
  int wereReading = digitalRead(7); 

if  (wereReading == 0) { 
 
 
 digitalWrite(10, HIGH);} 

 else if ( wereReading == 1) { 
  
   digitalWrite(10, LOW);
  
    Serial.println(wereReading);

}
