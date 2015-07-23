int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int led7 = 7;
int led8 = 6;
           
int speakerPin = 5;

int noteC4 = 262;
int noteC4s = 277;
int noteD4 = 294;
int noteD4s = 311;
int noteE4 = 330;
int noteF4 = 349;
int noteF4s = 370;
int noteG4 = 392;
int noteG4s = 415;
int noteA4 = 440;
int noteA4s = 466;
int noteB4 = 494;

int noteC5 = 523;
int noteC5s = 554;
int noteD5 = 587;
int noteD5s = 622;
int noteE5 = 659;
int noteF5 = 698;
int noteF5s = 740;
int noteG5 = 784;
int noteG5s = 831;
int noteA5 = 880;
int noteA5s = 932;
int noteB5 = 988;

int serialA;

void setup() {
  Serial.begin(9600);
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);

  pinMode(speakerPin,OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    serialA = Serial.read();
  }
  playNote(serialA);
}

void playNote(int note) {
  switch (note) {
    case 1:
    tone(speakerPin,noteC4);
    digitalWrite(led1,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led7,HIGH);
    break;
    case 2:
    tone(speakerPin,noteC4s);
    digitalWrite(led2,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led8,HIGH);
    break;
    case 3:
    tone(speakerPin,noteD4);
    digitalWrite(led3,HIGH);
    digitalWrite(led6,HIGH);
    break;
    case 4:
    tone(speakerPin,noteD4s);
    digitalWrite(led1,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led8,HIGH);
    break;
    case 5:
    tone(speakerPin,noteE4);
    digitalWrite(led2,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    break;
    case 6:
    tone(speakerPin,noteF4);
    digitalWrite(led1,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led8,HIGH);
    break;
    case 7:
    tone(speakerPin,noteF4s);
    digitalWrite(led2,HIGH);
    digitalWrite(led7,HIGH);
    break;
    case 8:
    tone(speakerPin,noteG4);
    digitalWrite(led1,HIGH);
    digitalWrite(led8,HIGH);
    break;
    case 9:
    tone(speakerPin,noteG4s);
    digitalWrite(led3,HIGH);
    digitalWrite(led6,HIGH);
    break;
    case 10:
    tone(speakerPin,noteA4);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    break;
    case 11:
    tone(speakerPin,noteA4s);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    break;
    case 12:
    tone(speakerPin,noteB4);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led7,HIGH);
    break;
    case 13:
    tone(speakerPin,noteC5);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    break;
    case 14:
    tone(speakerPin,noteC5s);
    digitalWrite(led4,HIGH);
    digitalWrite(led8,HIGH);
    break;
    case 15:
    tone(speakerPin,noteD5);
    digitalWrite(led2,HIGH);
    digitalWrite(led8,HIGH);
    break;
    case 16:
    tone(speakerPin,noteD5s);
    digitalWrite(led3,HIGH);
    digitalWrite(led7,HIGH);
    break;
    case 17:
    tone(speakerPin,noteE5);
    digitalWrite(led1,HIGH);
    digitalWrite(led3,HIGH);
    break;
    case 18:
    tone(speakerPin,noteF5);
    digitalWrite(led2,HIGH);
    digitalWrite(led4,HIGH);
    break;
    case 19:
    tone(speakerPin,noteF5s);
    digitalWrite(led3,HIGH);
    digitalWrite(led5,HIGH);
    break;
    case 20:
    tone(speakerPin,noteG5);
    digitalWrite(led4,HIGH);
    digitalWrite(led6,HIGH);
    break;
    case 21:
    tone(speakerPin,noteG5s);
    digitalWrite(led5,HIGH);
    digitalWrite(led7,HIGH);
    break;
    case 22:
    tone(speakerPin,noteA5);
    digitalWrite(led1,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led7,HIGH);
    break;
    case 23:
    tone(speakerPin,noteA5s);
    digitalWrite(led2,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led6,HIGH);    
    digitalWrite(led8,HIGH);
    break;
    case 24:
    tone(speakerPin,noteB5);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    break;
    default:
    noTone(speakerPin);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
  }
  
  
  //asdfasdf HELLOO
}





