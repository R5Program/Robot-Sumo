#include <DabbleESP32.h>

#define IN1 16
#define IN2 17
#define IN3 18
#define IN4 19

void setup() {
    Serial.begin(9600);
    Dabble.begin("ESP32_Dabble");
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);

    Serial.println("L298N and ESP32 Test Started");
}

void loop() {
    Dabble.processInput();
  //Tombol Bawah
    if (GamePad.isPressed(1)) { 
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        Serial.println("Mundur");

    } 
    //Tombol Kiri
    else if (GamePad.isPressed(2)) { 
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        Serial.println("Kiri");

    } 
    //Tombol Kanan
    else if (GamePad.isPressed(3)) { 
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        Serial.println("Kanan");

    } 
    //Tombol Select
    else if (GamePad.isPressed(5)) { 
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        Serial.println("Stop");
    }
    else if (GamePad.isPressed(8)) { 
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        Serial.println("Maju");
    } 
    else if (GamePad.isPressed(9)) { 
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        Serial.println("Mundur");
    }
    else {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        Serial.println("Idle");
    }  
}
