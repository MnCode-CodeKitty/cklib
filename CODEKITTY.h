#ifndef CODEKITTY_H
#define CODEKITTY_H

#include <Arduino.h>
#include <Servo.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include "pitches.h"

#define LSERVO 9
#define RSERVO 10
#define TAIL 13
#define SOUND A0

class CODEKITTY{
  public:
      CODEKITTY();
      ~CODEKITTY();
      void forward(int mvDelay);
      void right(int mvDelay);
      void left(int mvDelay);
      void stop();
      void reverse(int mvDelay);
      void tailOn();
      void tailOff();
      void tailBlink(int blinkTimes);
      void beep();
      void note(int OneNote);
      void risingBeep();
      //void kittyMelody(int song[]);
      void kittyMelody();
      int melody[8] = {
        NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
      };
      
};
#endif

