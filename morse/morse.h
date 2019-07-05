#ifndef _MORSE_H
#define _MORSE_H

class MorseBase {
  int _pin;
  const int clk = 250;

public:
  MorseBase(int8_t pin) : _pin(pin) { pinMode(pin, OUTPUT); }
  inline void dit() {
    digitalWrite(_pin, HIGH);
    delay(clk);
    digitalWrite(_pin, LOW);
    delay(clk);
  }
  inline void dah() {
    digitalWrite(_pin, HIGH);
    delay(clk * 3);
    digitalWrite(_pin, LOW);
    delay(clk);
  }
  inline void eoc() {
    delay(clk << 1);
  }
  inline void eow() {
    delay((clk << 2) + (clk << 1));
  }
};
#endif /*_MORSE_H*/
? 201