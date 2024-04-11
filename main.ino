char fotoResistor[] = "A0";
int ledVerde = 13;
int ledAmarelo = 12;
int ledVermelho = 8;
int buzzer = 2;

int leituraFotoResistor = 0;


void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  leituraFotoResistor = analogRead(int(fotoResistor));
  Serial.println(leituraFotoResistor);
  
  
  if(leituraFotoResistor < 900 && leituraFotoResistor > 0){
  	digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
  }
  else if(leituraFotoResistor > 900 && leituraFotoResistor < 975){
  	digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
    tone(buzzer, 400);
    delay(3000);
  	noTone(buzzer);
    delay(500);
  }
  else{
  	digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
  }
  
}
