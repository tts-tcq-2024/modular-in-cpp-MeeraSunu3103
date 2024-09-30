void PrintColorCodes() {
  std::cout << "\nCode\tMajor Color\tMinor Color" << std::endl;
  for(int pairNumber = 1; pairNumber <= 25; ++pairNumber) {
    TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << pairNumber;
    std::cout << "\t" << TelCoColorCoder::MajorColorNames[colorPair.getMajor()];
    std::cout << "\t\t" << TelCoColorCoder::MinorColorNames[colorPair.getMinor()];
    std::cout << std::endl;
  }
}
