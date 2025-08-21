# Music-Box-with-Arduino

**Music Box with Arduino**

**🔧 Components Needed**

Arduino Uno/Nano (or any compatible board) 
MicroSD card module
MicroSD card (FAT32 formatted, loaded with .wav or .mp3 file)
Push button (for triggering playback)
10kΩ resistor (for button pull-down or pull-up)
DFPlayer Mini MP3 module (recommended – plays MP3 directly from SD, very easy!)
Small speaker (8Ω, 1–3W)
Breadboard + jumper wires
Optional: LED (blinks while music plays)

**🛠️ Wiring (with DFPlayer Mini – easiest method)**

**DFPlayer Mini → Arduino**
  VCC → 5V
  GND → GND
  TX → Arduino pin 10
  RX → Arduino pin 11 (use a 1kΩ resistor between Arduino TX and DFPlayer RX, to protect)
  SPK1 & SPK2 → Speaker terminals
  
**Button → Arduino**
  One side → pin 2
  Other side → GND
  Enable **internal pull-up** in software

**💾 Prepare the SD Card**

Format the SD card as **FAT32**.
Create a folder MP3 or just put files in root.
Rename your birthday music file as 0001.mp3 (DFPlayer plays them by number).

**🎁 How It Works**

Press button → music plays.
Press again → music stops.
You can add multiple songs (0001.mp3, 0002.mp3, etc.) and change button logic to play the next song.
Add an LED to blink while music plays for extra effect.


**DONATION:** 
    **Paypal - paypal.me/wyderl04**
