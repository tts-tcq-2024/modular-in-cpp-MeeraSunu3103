#include "TelCoColorCoderFunctions.h"

std::string BuildColorCodeReferenceManual() {
  std::string referenceManual;
  referenceManual = "\nCode\tMajor Color\tMinor Color";
  for(int pairNumber = 1; pairNumber <= 25; ++pairNumber) {
    TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    referenceManual[pairNumber] += '\n'; 
    referenceManual[pairNumber] += pairNumber;
    referenceManual[pairNumber] += '\t';
    referenceManual[pairNumber] += TelCoColorCoder::colorPair.ToString();
  }

  return referenceManual;
}
