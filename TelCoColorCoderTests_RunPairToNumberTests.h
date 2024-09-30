#include "TelCoColorCoderTestFunctions.h"

void RunPairToNumberTests() {
  testPairToNumber(TelCoColorCoder::WHITE, TelCoColorCoder::BLUE, 1);
  testPairToNumber(TelCoColorCoder::WHITE, TelCoColorCoder::ORANGE, 2);
  testPairToNumber(TelCoColorCoder::WHITE, TelCoColorCoder::GREEN, 3);
  testPairToNumber(TelCoColorCoder::WHITE, TelCoColorCoder::BROWN, 4);
  testPairToNumber(TelCoColorCoder::WHITE, TelCoColorCoder::SLATE, 5);
  
  testPairToNumber(TelCoColorCoder::RED, TelCoColorCoder::BLUE, 6);
  testPairToNumber(TelCoColorCoder::RED, TelCoColorCoder::ORANGE, 7);
  testPairToNumber(TelCoColorCoder::RED, TelCoColorCoder::GREEN, 8);
  testPairToNumber(TelCoColorCoder::RED, TelCoColorCoder::BROWN, 9);
  testPairToNumber(TelCoColorCoder::RED, TelCoColorCoder::SLATE, 10);
  
  testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::BLUE, 11);
  testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
  testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::GREEN, 13);
  testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::BROWN, 14);
  testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::SLATE, 15);
  
  testPairToNumber(TelCoColorCoder::YELLOW, TelCoColorCoder::BLUE, 16);
  testPairToNumber(TelCoColorCoder::YELLOW, TelCoColorCoder::ORANGE, 17);
  testPairToNumber(TelCoColorCoder::YELLOW, TelCoColorCoder::GREEN, 18);
  testPairToNumber(TelCoColorCoder::YELLOW, TelCoColorCoder::BROWN, 19);
  testPairToNumber(TelCoColorCoder::YELLOW, TelCoColorCoder::SLATE, 20);
  
  testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::BLUE, 21);
  testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::ORANGE, 22);
  testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::GREEN, 23);
  testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::BROWN, 24);
  testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
}
