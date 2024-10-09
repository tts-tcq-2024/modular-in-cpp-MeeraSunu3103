#include "TelCoColorCoderDefinitions.h"

void RunPairToNumberTestsForEachPair(int& pairNumber) {
  for(int outerLoopCounter = 0; outerLoopCounter < 5; ++outerLoopCounter) {
    for(int innerLoopCounter = 0; innerLoopCounter < 5; ++innerLoopCounter) {
      testPairToNumber((TelCoColorCoder::MajorColor)outerLoopCounter, (TelCoColorCoder::MinorColor)innerLoopCounter, pairNumber);
      ++pairNumber;
    }
  }
}

void RunPairToNumberTests() {
  int pairNumber = 1;
  while(pairNumber <= 25) {
    RunNumberToPairTestsForEachPair(pairNumber);
  }
}
