

/* --- www.nyebarilmu.com --- */

//Mengakses module sensor dengan indikator LED pada Arduino
const int pin_2 = 2;
const int led = 13;

void setup () {
pinMode (pin_2, INPUT);
pinMode (led, OUTPUT); 
Serial.begin(9600);
}

void loop() {
int kondisiSensor = digitalRead(pin_2);
Serial.println(kondisiSensor);
if (kondisiSensor == HIGH)
digitalWrite(led, HIGH);
else digitalWrite(led, LOW);
delay (1200);
}
