
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif
#define LED_PIN    3
#define NUMPIXELS 12

#define BUTTON_PIN 2
#define LED_COUNT 12


Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
int i=0;
int zmienna = 0;

void setup() {
  #if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
  #endif
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  Serial.begin(9600);
  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
}
void loop() {
  
  
  if (digitalRead(BUTTON_PIN) == LOW) 
  {
    while (digitalRead(BUTTON_PIN) == LOW) {}
    zmienna++;
    Serial.print("Wartość zmiennej: ");
    Serial.println(zmienna);
  }

  if (zmienna == 1)
  {
    digitalWrite(4, LOW);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
  }
  else
  {
    digitalWrite(4, LOW);
  }

  if (zmienna == 2)
  {
    digitalWrite(5, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    digitalWrite(5, LOW);
  }
  else
  {
    digitalWrite(5, LOW);
  }

  if (zmienna == 3)
  {
    digitalWrite(6, LOW);
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(6, LOW);
  }
  else
  {
    digitalWrite(6, LOW);
  }
  
  if (zmienna == 4)
  {
  do 
  {
    digitalWrite(4, LOW);
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(6, HIGH);
    delay(200);
    digitalWrite(6, LOW);
  
    digitalWrite(6, HIGH);
    delay(200);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
  }
  while(zmienna>4);
  {
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  }
  
  }
 
  if (zmienna == 5)
  {    
  do
  {
    for(long firstPixelHue = 0; firstPixelHue < 3*65536; firstPixelHue += 256) 
  {
    for(int i=0; i<strip.numPixels(); i++) { 
      int pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());
      strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue)));
    }
    strip.show(); 
  }
    
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(5, HIGH);
    delay(100);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    delay(100);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    delay(100);
  
  }
  
    while(zmienna>5);
    {
      for (int ii = 0; ii < 324; ++ii) { 
    strip.setPixelColor(ii, 0, 0, 0); 
  }
    strip.show(); 
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    }
  }
  

  if (zmienna == 6)
  {    
  for(long firstPixelHue = 0; firstPixelHue < 3*65536; firstPixelHue += 256) 
  {
    for(int i=0; i<strip.numPixels(); i++) { 
      int pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());
      strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue)));
    }
    strip.show(); 
  }
  }
  
  if(zmienna==7)
  {
     for (int ii = 0; ii < 324; ++ii) { 
    strip.setPixelColor(ii, 0, 0, 0); 
  }
  strip.show(); 
  }

  if(zmienna==8)
  {
    digitalWrite(4, LOW);
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    
    digitalWrite(5, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    digitalWrite(5, LOW);
    
    digitalWrite(6, LOW);
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(6, LOW);
    
    digitalWrite(4, LOW);
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(5, HIGH);
    delay(200);
    
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(6, HIGH);
    delay(200);
    digitalWrite(6, LOW);
  
    digitalWrite(6, HIGH);
    delay(200);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(5, HIGH);
    delay(200);
    
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    
  for(long firstPixelHue = 0; firstPixelHue < 3*65536; firstPixelHue += 256) 
  {
    for(int i=0; i<strip.numPixels(); i++) { 
      int pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());
      strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue)));
  }
    strip.show();
  }
    
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(5, HIGH);
    delay(100);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    delay(100);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    delay(100);

  for (int ii = 0; ii < 324; ++ii) { 
    strip.setPixelColor(ii, 0, 0, 0); 
  }
    strip.show(); 
    
  for(long firstPixelHue = 0; firstPixelHue < 3*65536; firstPixelHue += 256) 
  {
    for(int i=0; i<strip.numPixels(); i++) { 
      int pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());
      strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue)));
    }
    strip.show(); 
  }
for (int ii = 0; ii < 324; ++ii) { 
    strip.setPixelColor(ii, 0, 0, 0); 
  }
  strip.show();
  }
  
  if(zmienna>9)
  {
    zmienna=0;
  }
}

  



  

  
