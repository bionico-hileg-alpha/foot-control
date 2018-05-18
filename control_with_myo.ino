int pin_myo = 1;

int motor_signal = 10
int pin_motor1 = 9;
int pin_moror2 = 8;

void moveSpeed(bool dirtction, int speed){
  if speed > 255 {speed = 255;}

  digitalWrite(pin_motor1, dirtction);
  digitalWrite(pin_motor1, !dirtction);

  analogWrite(motor_signal, speed);

  digitalWrite(pin_motor1, 0);
  digitalWrite(pin_motor1, 0);
}

int readMyo(){
  Serial.println(value);
}

void setup()
{
  pinMode(enA, OUTPUT);
  pinMode(pin_motor1, OUTPUT);
  pinMode(pin_moror2, OUTPUT);


  Serial.begin(9600);
}




void loop()
{

}


