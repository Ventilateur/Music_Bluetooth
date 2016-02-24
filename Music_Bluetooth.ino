
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
    break;
    case 2:
    tone(speakerPin,noteC4s);
    break;
    case 3:
    tone(speakerPin,noteD4);
    break;
    case 4:
    tone(speakerPin,noteD4s);
    break;
    case 5:
    tone(speakerPin,noteE4);
    break;
    case 6:
    tone(speakerPin,noteF4);
    break;
    case 7:
    tone(speakerPin,noteF4s);
    break;
    case 8:
    tone(speakerPin,noteG4);
    break;
    case 9:
    tone(speakerPin,noteG4s);
    break;
    case 10:
    tone(speakerPin,noteA4);
    break;
    case 11:
    tone(speakerPin,noteA4s);
    break;
    case 12:
    tone(speakerPin,noteB4);
    break;
    case 13:
    tone(speakerPin,noteC5);
    break;
    case 14:
    tone(speakerPin,noteC5s);
    break;
    case 15:
    tone(speakerPin,noteD5);
    break;
    case 16:
    tone(speakerPin,noteD5s);
    break;
    case 17:
    tone(speakerPin,noteE5);
    break;
    case 18:
    tone(speakerPin,noteF5);
    break;
    case 19:
    tone(speakerPin,noteF5s);
    break;
    case 20:
    tone(speakerPin,noteG5);
    break;
    case 21:
    tone(speakerPin,noteG5s);
    break;
    case 22:
    tone(speakerPin,noteA5);
    break;
    case 23:
    tone(speakerPin,noteA5s);
    break;
    case 24:
    tone(speakerPin,noteB5);
    break;
    default:
    noTone(speakerPin);
  }
}





