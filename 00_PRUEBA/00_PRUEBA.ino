void setup() {
  // inicializa el pin digital LED_BUILTIN como salida.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // enciende el LED
  delay(1000);                      // espera un segundo
  digitalWrite(LED_BUILTIN, LOW);    // apaga el LED
  delay(1000);                      // espera un segundo
}