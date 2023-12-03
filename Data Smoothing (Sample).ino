void setup(){
Serial.begin(115200);
delay(1000);
}

void loop(){
Serial.println(analogRead(A0));
Serial.print('/t');

int numReads = 10;
int Sensor_sum = 0;
for(int i; i < numReads; k++){
Sensor_sum += analogRead(A0);
delay(1);
}
int Sensor_Avg = Sensor_sum / numReads;
Serial.println(Sensor_Avg);
delay(200);
}
