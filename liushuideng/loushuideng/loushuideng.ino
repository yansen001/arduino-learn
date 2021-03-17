void setup()
{
    for (int i = 2; i < 8; i++)
    {
        pinMode(i,OUTPUT);
    }
    
}

void loop()
{
    for (int i = 2; i < 7; i++)
    {
        digitalWrite(i,1);
        delay(500);
        digitalWrite(i,0);
    }
    
    for (int i = 7; i > 2; i--)
    {
        digitalWrite(i,1);
        delay(500);
        digitalWrite(i,0);
    }
    
}