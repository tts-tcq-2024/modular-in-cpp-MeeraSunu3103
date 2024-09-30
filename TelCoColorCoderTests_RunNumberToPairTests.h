void RunNumberToPairTests() {
  testNumberToPair(1, TelCoColorCoder::WHITE, TelCoColorCoder::BLUE);
  testNumberToPair(2, TelCoColorCoder::WHITE, TelCoColorCoder::ORANGE);
  testNumberToPair(3, TelCoColorCoder::WHITE, TelCoColorCoder::GREEN);
  testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
  testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);
  
  testNumberToPair(6, TelCoColorCoder::RED, TelCoColorCoder::BLUE);
  testNumberToPair(7, TelCoColorCoder::RED, TelCoColorCoder::ORANGE);
  testNumberToPair(8, TelCoColorCoder::RED, TelCoColorCoder::GREEN);
  testNumberToPair(9, TelCoColorCoder::RED, TelCoColorCoder::BROWN);
  testNumberToPair(10, TelCoColorCoder::RED, TelCoColorCoder::SLATE);
  
  testNumberToPair(11, TelCoColorCoder::BLACK, TelCoColorCoder::BLUE);
  testNumberToPair(12, TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE);
  testNumberToPair(13, TelCoColorCoder::BLACK, TelCoColorCoder::GREEN);
  testNumberToPair(14, TelCoColorCoder::BLACK, TelCoColorCoder::BROWN);
  testNumberToPair(15, TelCoColorCoder::BLACK, TelCoColorCoder::SLATE);
  
  testNumberToPair(16, TelCoColorCoder::YELLOW, TelCoColorCoder::BLUE);
  testNumberToPair(17, TelCoColorCoder::YELLOW, TelCoColorCoder::ORANGE);
  testNumberToPair(18, TelCoColorCoder::YELLOW, TelCoColorCoder::GREEN);
  testNumberToPair(19, TelCoColorCoder::YELLOW, TelCoColorCoder::BROWN);
  testNumberToPair(20, TelCoColorCoder::YELLOW, TelCoColorCoder::SLATE);
  
  testNumberToPair(21, TelCoColorCoder::VIOLET, TelCoColorCoder::BLUE);
  testNumberToPair(22, TelCoColorCoder::VIOLET, TelCoColorCoder::ORANGE);
  testNumberToPair(23, TelCoColorCoder::VIOLET, TelCoColorCoder::GREEN);
  testNumberToPair(24, TelCoColorCoder::VIOLET, TelCoColorCoder::BROWN);
  testNumberToPair(25, TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE);
}
