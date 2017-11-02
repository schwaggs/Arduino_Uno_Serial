#define GREEN 2
#define YELLOW 3
#define BLUE 4
#define RED 5

#define LEFT 97     // a
#define UP 119      // w
#define RIGHT 100   // d
#define DOWN 115    // s

void setup() 
{
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);

  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(RED, LOW);
  

  Serial.begin(115200);
  
}

void loop() 
{
  //digitalWrite(GREEN, HIGH);
  int command = 0;
  if(Serial.available())
  {
    command = (int)Serial.read();

    switch(command)
    {
      case LEFT:
      
        SetAllLow();
        digitalWrite(GREEN, HIGH);
        
        break;

      case RIGHT:
      
        SetAllLow();
        digitalWrite(RED, HIGH);
        
        break;

      case UP:

        SetAllLow();
        digitalWrite(YELLOW, HIGH);
        
        break;

      case DOWN:
        SetAllLow();
        digitalWrite(BLUE, HIGH);
        
        break;
    }
  }
}

void SetAllLow()
{
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(RED, LOW);
}

