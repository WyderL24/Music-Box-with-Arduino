#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

SoftwareSerial mySerial(10, 11); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

const int buttonPin = 2;
bool isPlaying = false;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Button active LOW
  Serial.begin(9600);
  mySerial.begin(9600);

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer Mini not detected!");
    while(true);
  }

  myDFPlayer.volume(25); // Volume 0-30
}

void loop() {
  if (digitalRead(buttonPin) == LOW) { // button pressed
    delay(200); // debounce
    if (!isPlaying) {
      myDFPlayer.play(1); // Play 0001.mp3
      isPlaying = true;
    } else {
      myDFPlayer.stop();
      isPlaying = false;
    }
  }
}
