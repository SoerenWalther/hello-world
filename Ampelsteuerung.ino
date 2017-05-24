#define DELAY1 10000
#define DELAY2 1000
#define DELAY3 2000
#define DELAY4 3000

int ledPinRotA = 13;
int ledPinGelbA = 12;
int ledPinGruenA = 11;

int tasterPinAmpel = 2;
int tasterAmpelWert = LOW;

int ledPinRotF = 7;
int ledPinGruenF = 6;

void setup() {
  pinMode(ledPinRotA, OUTPUT);
  pinMode(ledPinGelbA, OUTPUT);
  pinMode(ledPinGruenA, OUTPUT);
  pinMode(ledPinRotF, OUTPUT);
  pinMode(ledPinGruenF, OUTPUT);
  pinMode(tasterPinAmpel, INPUT);
  digitalWrite(ledPinGruenA, HIGH);
  digitalWrite(ledPinRotF, HIGH);
  
}

void loop() {

  tasterAmpelWert = digitalRead(tasterPinAmpel);
  if(tasterAmpelWert == HIGH)
   ampelUmschaltung();
  }

  void ampelUmschaltung(){
    digitalWrite(ledPinGruenA, LOW);
    digitalWrite(ledPinGelbA, HIGH); delay(DELAY4);
    digitalWrite(ledPinGelbA, LOW);
    digitalWrite(ledPinRotA, HIGH); delay(DELAY2);
    digitalWrite(ledPinRotF, LOW);
    digitalWrite(ledPinGruenF, HIGH); delay(DELAY1);
    digitalWrite(ledPinGruenF, LOW);
    digitalWrite(ledPinRotF, HIGH); delay(DELAY2);
    digitalWrite(ledPinGelbA, HIGH); delay(DELAY3);
    digitalWrite(ledPinRotA, LOW);
    digitalWrite(ledPinGelbA, LOW);
    digitalWrite(ledPinGruenA, HIGH);
    delay(15000);
  }
