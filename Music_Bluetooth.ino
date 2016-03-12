#include <SoftwareSerial.h>   

#define RxD           6
#define TxD           7
#define SPEAKER_PIN   5

#define NOTE_C4       262
#define NOTE_C4s      277
#define NOTE_D4       294
#define NOTE_D4s      311
#define NOTE_E4       330
#define NOTE_F4       349
#define NOTE_F4s      370
#define NOTE_G4       392
#define NOTE_G4s      415
#define NOTE_A4       440
#define NOTE_A4s      466
#define NOTE_B4       494

#define NOTE_C5       523
#define NOTE_C5s      554
#define NOTE_D5       587
#define NOTE_D5s      622
#define NOTE_E5       659
#define NOTE_F5       698
#define NOTE_F5s      740
#define NOTE_G5       784
#define NOTE_G5s      831
#define NOTE_A5       880
#define NOTE_A5s      932
#define NOTE_B5       988

int serialA;

SoftwareSerial blueToothSerial(RxD,TxD);

void setup() {
  Serial.begin(9600);
  pinMode(RxD, INPUT);
  pinMode(TxD, OUTPUT);
  pinMode(SPEAKER_PIN,OUTPUT);
  setupBlueToothConnection();
}

void loop() {
  int recvInt;
  if(blueToothSerial.available()) {
    recvInt = blueToothSerial.read();
    Serial.print(recvInt);
    playNote(recvInt);
  } 
}

void playNote(int note) {
  switch (note) {
    case 1:
    tone(SPEAKER_PIN,NOTE_C4);
    break;
    case 2:
    tone(SPEAKER_PIN,NOTE_C4s);
    break;
    case 3:
    tone(SPEAKER_PIN,NOTE_D4);
    break;
    case 4:
    tone(SPEAKER_PIN,NOTE_D4s);
    break;
    case 5:
    tone(SPEAKER_PIN,NOTE_E4);
    break;
    case 6:
    tone(SPEAKER_PIN,NOTE_F4);
    break;
    case 7:
    tone(SPEAKER_PIN,NOTE_F4s);
    break;
    case 8:
    tone(SPEAKER_PIN,NOTE_G4);
    break;
    case 9:
    tone(SPEAKER_PIN,NOTE_G4s);
    break;
    case 10:
    tone(SPEAKER_PIN,NOTE_A4);
    break;
    case 11:
    tone(SPEAKER_PIN,NOTE_A4s);
    break;
    case 12:
    tone(SPEAKER_PIN,NOTE_B4);
    break;
    case 13:
    tone(SPEAKER_PIN,NOTE_C5);
    break;
    case 14:
    tone(SPEAKER_PIN,NOTE_C5s);
    break;
    case 15:
    tone(SPEAKER_PIN,NOTE_D5);
    break;
    case 16:
    tone(SPEAKER_PIN,NOTE_D5s);
    break;
    case 17:
    tone(SPEAKER_PIN,NOTE_E5);
    break;
    case 18:
    tone(SPEAKER_PIN,NOTE_F5);
    break;
    case 19:
    tone(SPEAKER_PIN,NOTE_F5s);
    break;
    case 20:
    tone(SPEAKER_PIN,NOTE_G5);
    break;
    case 21:
    tone(SPEAKER_PIN,NOTE_G5s);
    break;
    case 22:
    tone(SPEAKER_PIN,NOTE_A5);
    break;
    case 23:
    tone(SPEAKER_PIN,NOTE_A5s);
    break;
    case 24:
    tone(SPEAKER_PIN,NOTE_B5);
    break;
    default:
    noTone(SPEAKER_PIN);
  }
}

void setupBlueToothConnection() {  
  
  blueToothSerial.begin(9600);  
  blueToothSerial.print("AT");
  delay(400);
  blueToothSerial.print("AT+DEFAULT");             // Restore all setup value to factory setup
  delay(2000); 
  blueToothSerial.print("AT+NAMESeeedBTSlave");    // set the bluetooth name as "SeeedBTSlave" ,the length of bluetooth name must less than 12 characters.
  delay(400);
  blueToothSerial.print("AT+PIN0000");             // set the pair code to connect 
  delay(400);
  blueToothSerial.print("AT+AUTH1");         
  delay(400);   
  blueToothSerial.flush();
  
}


