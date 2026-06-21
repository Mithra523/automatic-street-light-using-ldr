// Automatic Street Light Using LDR

const int LDR_PIN = A0;   // LDR connected to A0
const int LED_PIN = 13;   // LED connected to D13

void setup()
{
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int ldrValue = analogRead(LDR_PIN);

    Serial.print("LDR Value =");
    Serial.println(ldrValue);

    if (ldrValue < 500)
    {
        digitalWrite(LED_PIN, HIGH);  // LED ON
    }
    else
    {
        digitalWrite(LED_PIN, LOW);   // LED OFF
    }

    delay(100);
}