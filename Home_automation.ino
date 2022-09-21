#define BLYNK_TEMPLATE_ID "TMPLBJUEXb-n"
#define BLYNK_DEVICE_NAME "Home device"
#define BLYNK_AUTH_TOKEN "p95Ec25-jB84W4vQc2sYvZwhZC9Sgnad"

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid [] = "sit boy";
char pass[] = "Raj12345";

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  Serial.println(value);
  if(value == 1)
  {
    digitalWrite(D5,LOW);
    Serial.println("LED ON");
    }
    if (value == 0)
    {
      digitalWrite(D5,HIGH);
      Serial.println("LED OFF");
      }
  }


  void setup()
  {
    Serial.begin(115200);
    Blynk.begin(auth,ssid,pass);
    pinMode(D5,OUTPUT);
    
  
    }

void loop()
{
  Blynk.run();
  }
