void setup() {
  
  //Setup Channel A
  pinMode(12, OUTPUT); //Initiates Motor Channel A pin
  pinMode(9, OUTPUT); //Initiates Brake Channel A pin
  pinMode(3, OUTPUT);

  //Setup Channel B
  pinMode(13, OUTPUT); //Initiates Motor Channel A pin
  pinMode(8, OUTPUT);  //Initiates Brake Channel A pin
  pinMode(11, OUTPUT);
}

void loop(){

  forward();
  
  delay(1000);
  
  stopping();

  delay(1000);
  
  /*revright();
  reverse();
  
  delay(5000);
  
  stopping();
  
  delay(1000);*/
  
}

void forward()  {
  //Motor A forward @ full speed
  digitalWrite(12, HIGH); //Establishes forward direction of Channel A
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  analogWrite(3, 50);   //Spins the motor on Channel A at full speed
  digitalWrite(13, LOW); //Establishes forward direction of Channel A
  digitalWrite(8, LOW);   //Disengage the Brake for Channel A
  analogWrite(11, 50);   //Spins the motor on Channel A at full speed
}
void stopping()  {
    
  digitalWrite(9, HIGH);  //Engage the Brake for Channel A
  digitalWrite(8, HIGH);  //Engage the Brake for Channel B
}
void revright()  {
  digitalWrite(13, HIGH);  //Establishes backward direction of Channel B
  digitalWrite(8, LOW);   //Disengage the Brake for Channel B
  analogWrite(11, 200);    //Spins the motor on Channel B at half speed
  digitalWrite(12, LOW); //Establishes forward direction of Channel A
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  analogWrite(3, 55);   //Spins the motor on Channel A at full speed
}
void reverse()  {
  //Motor A forward @ full speed
  digitalWrite(12, LOW); //Establishes forward direction of Channel A
  digitalWrite(9, LOW);   //Disengage the Brake for Channel A
  analogWrite(3, 255);   //Spins the motor on Channel A at full speed
}
