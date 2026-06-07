#include <TimeLib.h>
#include <TimeAlarms.h>


const int buzzerPin = 15;

void setup() {
  // put your setup code here, to run once:

  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
  setTime(6,29,0,5,1,26);

  Alarm.alarmRepeat(6,30,0, MorningAlarm);
  Alarm.alarmRepeat(dowFriday,9,0,0, WeeklyAlarm);
  Alarm.alarmRepeat(dowSaturday,9,0, WeeklyAlarm);

  ALarm.timerRepeat(5, Repeats);

}

void loop() {
  // put your main code here, to run repeatedly:

  /*
  ok i want to just create the logic for making the buzzer go
  at a specific time.

  THEN i wanna create the GUI w/ my OLED screen

  I'm not sure if I want to implement the math-problem thing today
  or no, I might just add the problems in or something.

  Building will be later. 

  */
  bool is_time;

  // all these functions are for retrieving the time...hm..
  // i want to set the time breh
  // im searching rn


  if(is_time) {

    tone(buzzerPin, 440, 1000);
  }

}


void MorningAlarm() {
  Serial.println("hello its going off hello");
}


void WeeklyAlarm()
