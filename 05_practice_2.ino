#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, 0);
  delay(1000);
}

void loop() {
  for ( int i = 0 ; i < 10 ; i++)
  {
    toggle = toggle_state(toggle); //toggle LED value.
    digitalWrite(PIN_LED, toggle); // update LED status.
    delay(100); // wait for 100 milliseconds
  }
  while(1)
  {
    digitalWrite(PIN_LED, 1);
  }
}

int toggle_state(int toggle) {
  if (toggle==0){
    toggle=1;
  }
  else {
    toggle=0;
  }
  return toggle;
}
