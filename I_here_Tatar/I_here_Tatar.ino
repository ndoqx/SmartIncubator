#define BLYNK_TEMPLATE_ID "TMPL66HEYFYLL"
#define BLYNK_TEMPLATE_NAME "iot project"
#define BLYNK_AUTH_TOKEN "sy64B7lKKvkutqOq16deGbkrVohY-EBA"
#include "DHT.h"
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Tone32.h>
#define DHTPIN 15
#define DHTTYPE DHT11   // DHT 11
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
#define NUMFLAKES     10 // Number of snowflakes in the animation example
DHT dht(DHTPIN, DHTTYPE);
#define LOGO_HEIGHT   16
#define LOGO_WIDTH    16
// Initialize DHT sensor.
// Note that older versions of this library took an optional third parameter to
// tweak the timings for faster processors.  This parameter is no longer needed
// as the current DHT reading algorithm adjusts itself to work on faster procs.
#define BUZZER_PIN 27
#define BUZZER_CHANNEL 0
char z[] = " ";
char z1[] = " ";
/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "aisfibre_2.4G_FCA264";
char pass[] = "BCFCA264";
BlynkTimer timer;
int SetmaxHumid;
int SetminHumid;
int SetmaxTemp;
int SetminTemp;
WidgetLED LED1(V6);
WidgetLED LED2(V7);
BLYNK_WRITE(V0)
{
  SetmaxHumid = param.asInt();
  SetminHumid = param.asInt();
  Serial.print("SetmaxHumid: ");
  Serial.println(SetmaxHumid);
  Serial.print("SetminHumid: ");
  Serial.println(SetminHumid);
  if (dht.readHumidity()>SetminHumid && dht.readHumidity()>SetmaxHumid)
  {
    digitalWrite(19,LOW);
    digitalWrite(12,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(18,HIGH);
    char z[] = "Phone";
    char z1[] = "Phone";
    Serial.print(" Func : ");
    Serial.println(SetmaxHumid);
    Serial.print(" Stat : ");
    Serial.println(SetminHumid);
    display.setCursor(32,0);
    display.print(" Func : ");
    display.println(z);
    display.print(" Stat : ");
    display.println(z1);
    display.display();
  }
  else
  {
    digitalWrite(19,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(18,HIGH);
    char z[] = "Phone";
    char z1[] = "Phone";
    Serial.print(" Func : ");
    Serial.println(SetmaxHumid);
    Serial.print(" Stat : ");
    Serial.println(SetminHumid);
    display.setCursor(32,0);
    display.print(" Func : ");
    display.println(z);
    display.print(" Stat : ");
    display.println(z1);
    display.display();
  }
}
BLYNK_WRITE(V4)
{
  SetmaxHumid = param.asInt();
  SetminHumid = param.asInt();
  Serial.print("SetmaxHumid: ");
  Serial.println(SetmaxHumid);
  Serial.print("SetminHumid: ");
  Serial.println(SetminHumid);
  if (dht.readHumidity()>SetminHumid && dht.readHumidity()>SetmaxHumid)
  {
    digitalWrite(19,LOW);
    digitalWrite(12,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(18,HIGH);
    char z[] = "Phone";
    char z1[] = "Phone";
    Serial.print(" Func : ");
    Serial.println(SetmaxHumid);
    Serial.print(" Stat : ");
    Serial.println(SetminHumid);
    display.setCursor(32,0);
    display.print(" Func : ");
    display.println(z);
    display.print(" Stat : ");
    display.println(z1);
    display.display();
  }
  else
  {
    digitalWrite(19,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(18,HIGH);
    char z[] = "Phone";
    char z1[] = "Phone";
    Serial.print(" Func : ");
    Serial.println(SetmaxHumid);
    Serial.print(" Stat : ");
    Serial.println(SetminHumid);
    display.setCursor(32,0);
    display.print(" Func : ");
    display.println(z);
    display.print(" Stat : ");
    display.println(z1);
    display.display();
  }
}
BLYNK_WRITE(V1)
{
  SetmaxTemp = param.asInt();
  SetminTemp = param.asInt();
  Serial.print("SetmaxTemp: ");
  Serial.println(SetmaxTemp);
  Serial.print("SetminTemp: ");
  Serial.println(SetminTemp);
    if (dht.readTemperature()>SetminTemp && dht.readTemperature()>SetmaxTemp)
  {
    digitalWrite(19,LOW);
    digitalWrite(12,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(18,HIGH);
    char z[] = "Phone";
    char z1[] = "Phone";
    Serial.print(" Func : ");
    Serial.println(SetmaxTemp);
    Serial.print(" Stat : ");
    Serial.println(SetminTemp);
    display.setCursor(32,0);
    display.print(" Func : ");
    display.println(z);
    display.print(" Stat : ");
    display.println(z1);
    display.display();
  }
  else
  {
    digitalWrite(19,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(18,HIGH);
    char z[] = "Phone";
    char z1[] = "Phone";
    Serial.print(" Func : ");
    Serial.println(SetmaxTemp);
    Serial.print(" Stat : ");
    Serial.println(SetminTemp);
    display.setCursor(32,0);
    display.print(" Func : ");
    display.println(z);
    display.print(" Stat : ");
    display.println(z1);
    display.display();
  }
}
BLYNK_WRITE(V5)
{
  SetmaxTemp = param.asInt();
  SetminTemp = param.asInt();
  Serial.print("SetmaxTemp: ");
  Serial.println(SetmaxTemp);
  Serial.print("SetminTemp: ");
  Serial.println(SetminTemp);
    if (dht.readTemperature()>SetminTemp && dht.readTemperature()>SetmaxTemp)
  {
    digitalWrite(19,LOW);
    digitalWrite(12,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(18,HIGH);
    char z[] = "Phone";
    char z1[] = "Phone";
    Serial.print(" Func : ");
    Serial.println(SetmaxTemp);
    Serial.print(" Stat : ");
    Serial.println(SetminTemp);
    display.setCursor(32,0);
    display.print(" Func : ");
    display.println(z);
    display.print(" Stat : ");
    display.println(z1);
    display.display();
  }
  else
  {
    digitalWrite(19,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(18,HIGH);
    char z[] = "Phone";
    char z1[] = "Phone";
    Serial.print(" Func : ");
    Serial.println(SetmaxTemp);
    Serial.print(" Stat : ");
    Serial.println(SetminTemp);
    display.setCursor(32,0);
    display.print(" Func : ");
    display.println(z);
    display.print(" Stat : ");
    display.println(z1);
    display.display();
  }
}
   
void myTimerEvent()
{
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
  //Blynk.virtualWrite(V2, dht.readHumidity());
  Blynk.virtualWrite(V2, dht.readTemperature()); //Display on gauge
  Blynk.virtualWrite(V3, dht.readHumidity()); //Display on gauge
  //LED
  if(dht.readHumidity()>SetminHumid && dht.readHumidity()>SetmaxHumid)
  {
    LED1.off();
    //led1.setColor(BLYNK_RED);
  }
  else
  {
    LED1.on();
    //led1.setColor(BLYNK_GREEN);
  } 
  if(dht.readTemperature()>SetminTemp && dht.readTemperature()>SetmaxTemp)
  {
    LED2.off();
    //led1.setColor(BLYNK_RED);
  }
  else
  {
    LED2.on();
    //led1.setColor(BLYNK_GREEN);
  } 
}
void sendSensor()
{
  float t = dht.readTemperature();
  Blynk.virtualWrite(V2,t);
  float h = dht.readHumidity();
  Blynk.virtualWrite(V3,t);
}

void setup() 
{
  Serial.begin(115000);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  Serial.println("DHT11 OLED demo");
  dht.begin();
  //SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) 
  {
  Serial.println(F("SSD1306 allocation failed"));
  for(;;); // Don't proceed, loop forever
  }
  // Show initial display buffer contents on the screen --
  // the library initializes this with an Adafruit splash screen.
  display.display();
  delay(2000); // Pause for 2 seconds
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setRotation(0);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(18,OUTPUT);
  pinMode(19,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(14,INPUT);
  pinMode(23,INPUT);
  pinMode(13,INPUT);
  pinMode(26,INPUT);
  timer.setInterval(1000L, myTimerEvent);
}

void loop() {
  Blynk.run();
  timer.run(); // Initiates BlynkTimer
  display.clearDisplay();
  // Wait a few seconds between measurements.
  delay(200);
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity(); // Read temperature as Celsius (the default)
  float t = dht.readTemperature(); // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true); // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) 
     {
      Serial.println(F("Failed to read from DHT sensor!"));
      return;
     }
  if( digitalRead(14) == LOW)
     {
      if( t > 00.0 && t < 10 && h < 45)
       {
        digitalWrite(19,LOW);
        digitalWrite(12,LOW);
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(18,LOW);
        char z[] = "Function 1";
        char z1[] = "Heater on fan on";
        Serial.print("Function: ");
        Serial.println(z);
        Serial.print("status: ");
        Serial.println(z1);
        display.setCursor(32,0);
        display.print(" Func : ");
        display.println(z);
        display.print(" Stat : ");
        display.println(z1);
        display.display();
      }
      else
      {
        digitalWrite(19,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(18,LOW);
        char z[] = "1";
        char z1[] = "H on f on";
        Serial.print("Function: ");
        Serial.println(z);
        Serial.print("status: ");
        Serial.println(z1);
        display.setCursor(32,0);
        display.print(" Func : ");
        display.println(z);
        display.print(" Stat : ");
        display.println(z1);
        display.display();
      }
     }
  else if( digitalRead(23) == LOW)
     {
      if( t > 10.0 && t < 20  && h < 00.0)
       {
        digitalWrite(19,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        digitalWrite(18,LOW);
        char z[] = "Function 2";
        char z1[] = "Heater on fan on";
        Serial.print("Function: ");
        Serial.println(z);
        Serial.print("status: ");
        Serial.println(z1);
        display.setCursor(32,0);
        display.print(" Func : ");
        display.println(z);
        display.print(" Stat : ");
        display.println(z1);
        display.display();
      }
      else
      {
        digitalWrite(19,HIGH);
        digitalWrite(12,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        digitalWrite(18,LOW);
        char z[] = "2";
        char z1[] = "H off f on";
        Serial.print("Function: ");
        Serial.println(z);
        Serial.print("status: ");
        Serial.println(z1);
        display.setCursor(32,0);
        display.print(" Func : ");
        display.println(z);
        display.print(" Stat : ");
        display.println(z1);
        display.display();
      }
     }
  else if( digitalRead(13) == LOW)
     {
      if( t > 20.0 && t < 30.0  && h < 45.0)
       {
        digitalWrite(19,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
        digitalWrite(18,HIGH);
        char z[] = "3";
        char z1[] = "H on f on";
        Serial.print("Function: ");
        Serial.println(z);
        Serial.print("status: ");
        Serial.println(z1);
        display.setCursor(32,0);
        display.print(" Func : ");
        display.println(z);
        display.print(" Stat : ");
        display.println(z1);
        display.display();
      }
      else
      {
        digitalWrite(19,HIGH);
        digitalWrite(12,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
        digitalWrite(18,HIGH);;
        char z[] = "3";
        char z1[] = "H off f on";
        Serial.print("Function: ");
        Serial.println(z);
        Serial.print("status: ");
        Serial.println(z1);
        display.setCursor(32,0);
        display.print(" Func : ");
        display.println(z);
        display.print(" Stat : ");
        display.println(z1);
        display.display();
      }
     }
  else if( digitalRead(26) == LOW)
    {
     tone(BUZZER_PIN, NOTE_C4, 500, BUZZER_CHANNEL);
     delay(100);
     digitalWrite(19,HIGH);
     digitalWrite(12,LOW);
     digitalWrite(4,HIGH);
     digitalWrite(5,LOW);
     digitalWrite(18,HIGH);
     char z[] = "Door";
     char z1[] = "H off f off";
     Serial.print("Function: ");
     Serial.println(z);
     Serial.print("status: ");
     Serial.println(z1);
     display.setCursor(32,0);
     display.print(" Func : ");
     display.println(z);
     display.print(" Stat : ");
     display.println(z1);
     display.display();
    }
  else
    {
     BLYNK_WRITE(V0);
     BLYNK_WRITE(V1);
     BLYNK_WRITE(V4);
     BLYNK_WRITE(V5);
     digitalWrite(4,HIGH);
     digitalWrite(5,HIGH);
     digitalWrite(18,HIGH);
     char z[] = "Phone";
     char z1[] = "Phone";
     display.setCursor(32,0);
     display.print(" Func : ");
     display.println(z);
     display.print(" Stat : ");
     display.println(z1);
     display.display();
    }

  float hif = dht.computeHeatIndex(f, h); // Compute heat index in Fahrenheit (the default)
  float hic = dht.computeHeatIndex(t, h, false); // Compute heat index in Celsius (isFahreheit = false)
  Serial.print("Humidity: ");
  Serial.println(h);
  Serial.println("%  Temperature: ");
  Serial.println(t);
//  display.clearDisplay();
  display.setCursor(0, 0);
  display.setCursor(32,0);
  display.print(" Func : ");
  display.println(z);
  display.print(" Stat : ");
  display.println(z1);
  display.print(" Temp : ");
  display.println(t,1);
  display.print(" Humid : ");
//  display.println(h,1);
//  display.display();
}
