#include "TelCoColorCoderFunctions.h"

void RunNumberToPairTestsForEachPair(int& pairNumber) {
  for(int outerLoopCounter = 0; outerLoopCounter < 5; ++outerLoopCounter) {
    for(int innerLoopCounter = 0; innerLoopCounter < 5; ++innerLoopCounter) {
      testNumberToPair(pairNumber, (TelCoColorCoder::MajorColor)outerLoopCounter, (TelCoColorCoder::MinorColor)innerLoopCounter);
      ++pairNumber;
    }
  }
}

void RunNumberToPairTests() {
  int pairNumber = 1;
  while(pairNumber <= 25) {
    RunNumberToPairTestsForEachPair(pairNumber);
  }
}
