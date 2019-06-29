
/** 
 The LEDs will light up according to how strong you blow the piezo.
**/
int led[8] = { 3, 4, 5, 6, 7, 8, 9, 10}; // Use and array to hold all the LEDs pin number
int VOLPIN = A1;//The pin for the piezo
int VOLUME = 0;//The value from the piezo
int result, i;

void setup()
{

/*This section with initialised the all the Pin define in led[8] as output
// Use a For loop to do repeated instruction to save you from type repeatly
***/
for (i = 0; i < 8; i++)
  pinMode(led[i], OUTPUT);

// You need to also tell arduino that this pin if used as an output 
pinMode(VOLPIN,INPUT);
 
/*You need to define this as you using it some message when the arduino is running. 
// Use Ctrl+Shift+m to open up the display console
*/
Serial.begin(9600); 
}

void loop()
{
VOLUME = analogRead(VOLPIN);
Serial.print(" The volume detected is: ");
Serial.print("\t");    // prints a tab
Serial.println(VOLUME);

/* Since the volume to display has 8 levels each level has 100 unit
// After dividing by 8, we are left with smaller number to work with.
// This is call normalising*/

VOLUME = VOLUME / 100;
/*Since VOLUME is a integer it does not hold decimal (float), so you are only left with quotient
// Example: VOLUME = 549/100 = 5

  // This section for loop with based on the notmalised VOLUME to determine how many LEDs to light up
  
  // the "i" in the for loop will start with 0, runs the digitalWrite instruction, 
  // then increase i by 1 check if greater than 8,
  // if no then runs the digitalWrite instruction with the new i
  // if yes it exit to the else
   */
  if (VOLUME == 0)  // Less than 100, set all 8 LEDs to be off
   {
   for(i = 0; i < 8; i++) 
        {
     digitalWrite(led[i], LOW);
     
     }
  }
  
  else // The number of LEDs to light up with be equal to the value of VOLUME
  {
   for (i = 0; i < VOLUME; i++) 
    {
     digitalWrite(led[i], HIGH);
     
    }
  }
}   
