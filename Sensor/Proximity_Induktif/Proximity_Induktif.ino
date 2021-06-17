int sensor = 8;
int logam;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Selamat Datang");
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // Baca sensor logam
  logam = digitalRead(sensor);
  delay(100);

  if(logam == 1){
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    Serial.println("Bukan Logam");
  }else{
    digitalWrite(LED_BUILTIN, HIGH);    // turn the LED off by making the voltage LOW
    delay(100);                       // wait for a second
    Serial.println("Logam");
  }
}
