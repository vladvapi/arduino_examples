```cpp
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp;

#define WIRE Wire

Adafruit_SSD1306 display = Adafruit_SSD1306(128, 64, &WIRE);

void setup() {
  Serial.begin(9600);

  if (!bmp.begin()) {
	Serial.println("Could not find a valid BMP085 sensor, check wiring!");
	while (1) {}
  }

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  display.display();
  delay(1000);

  display.clearDisplay();
  display.display();
}

void loop() {
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);

  display.print("Temperature: ");
  display.print(bmp.readTemperature());
  display.println(" *C");

  display.println("");

  display.print("Pressure: ");
  display.print(bmp.readPressure());
  display.println(" Pa");

  display.println("");
  
  display.print("Altitude: ");
  display.print(bmp.readAltitude());
  display.println(" m");

  display.display();
  delay(2000);
  display.clearDisplay();
}

```
