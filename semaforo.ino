#define ledVermelho 4
#define ledAmarelo 5
#define ledVerde 6
void setup() {
  pinMode(ledVermelho,OUTPUT);
  pinMode(ledAmarelo,OUTPUT);
  pinMode(ledVerde,OUTPUT);
}
void loop() {
  digitalWrite(ledVerde,HIGH);
  digitalWrite(ledAmarelo,LOW);
  digitalWrite(ledVermelho,LOW);
  delay(10000);
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledAmarelo,HIGH);
  digitalWrite(ledVermelho,LOW);
  delay(2000);
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledAmarelo,LOW);
  digitalWrite(ledVermelho,HIGH);
  delay(10000);
}
