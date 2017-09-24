/** 
 *  TaskScheduler Test
 *
 */
#include <TaskScheduler.h>

#define PULSE_INTERVAL

// Callback methods prototypes
void t1Callback();

//Tasks
Task t1(25, TASK_FOREVER, &t1Callback);

Scheduler runner;

void t1Callback() {
    //t2.setInterval(500);
    //Serial.println("holi");
    Serial.println(analogRead(A0));
}

void setup () {
  Serial.begin(115200);
  Serial.println("Scheduler TEST");
  
  runner.init();
  Serial.println("Initialized scheduler");
  
  runner.addTask(t1);
  Serial.println("added t1");
    
  t1.enable();
  Serial.println("Enabled t1");
}


void loop () {
  runner.execute();
}
