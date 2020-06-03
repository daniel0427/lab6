#include <Keypad.h>
#define beat 500
#define pin 8
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define WHOLE 1 //全分符
#define HALF 0.5 //半分符
#define QUARTER 0.25
#define EIGHTH 0.125
#define SIXTEENTH 0.0625

const byte ROWS = 4, COLS = 4;

char keys[ROWS][COLS] = {{'0', '1', '2', '3'}, {'4', '5', '6', '7'}, {'8', '9', 'A', 'B'}, {'C', 'D', 'E', 'F'}};

byte rowPins[ROWS] = {9,10,11,12};
byte colPins[COLS] = {13,14,15,16};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);


void setup() {
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void aa(int a, int b, int c) {
  tone(a, b, c);
  delay(c);
  noTone(a);
}

void loop() {
  char key = keypad.getKey();

  if (key != NO_KEY) 
  {
    if (key == '0') 
    {
      aa(pin, NOTE_D4, 500);
    }

    else if (key == '1') 
    {
      aa(pin, NOTE_A4, 500);
    }

    else if (key == '2') 
    {
      aa(pin, NOTE_B4, 500);
    }

    else if (key == '3') 
    {
      aa(pin, NOTE_G4, 500);
    }

    else if (key == '4') 
    {
      aa(pin, NOTE_FS4, 500);
    }

    else if (key == '5') 
    {
      aa(pin, NOTE_E4, 500);
    }

    else if (key == '6') 
    {
      aa(pin, NOTE_FS3, 500);
    }

    else if (key == '7') 
    {
      aa(pin, NOTE_C4, 500);
    }

    else if (key == '8') 
    {
      aa(pin, NOTE_G3, 500);
    }

    else if (key == '9') 
    {
      aa(pin, NOTE_A3, 500);
    }
  }

}
