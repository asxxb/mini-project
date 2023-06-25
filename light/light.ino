int light;
void setup()
{
  Serial.begin(9600);
  pinMode (3, OUTPUT);
}

void loop(){
  light = analogRead(A0);

  if (light < 9xzccxxxczzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzxzc0)
  {
    digitalWrite (3, HIGH);
    }
    else
    {
      digitalWrite(3, LOW);
      }
  }
