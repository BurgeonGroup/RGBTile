/***********
*  Arduino Library for the 5 x 5 RGB LED "tile" made by Burgeon Group
*
* Natalie Freed, June 2013
*
* Uses Adafruit_WS2801 library from adafruit.com to interface with LED strips,
* adds wrapper functions for more easily playing with pixels,
* and some effect functions (drawing letters, twinkling effects...)
*
***********/

#ifndef RGBTileNF_h
#define RGBTileNF_h

#include "Arduino.h"
#include "Adafruit_WS2801.h"

#define NUM_ROWS 5
#define NUM_COLS 10

class RGBTile
{
  public:
    RGBTileNF();
    void drawLetter(char l);
    void twinkle();
    void colorPixel(int i, int j, byte r, byte g, byte b);
    void drawPixel(int i, int j);
    void drawPixel(int i, int j, byte r, byte g, byte b);
    void drawAll();
  
  private:
    Adafruit_WS2801 _strip;
    byte* getLetter(char l);
    uint32_t Color(byte r, byte g, byte b);
    uint32_t _colors[NUM_ROWS][NUM_COLS];
  
};

#endif