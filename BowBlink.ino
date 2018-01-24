//ส่วนของการประกาศตัวแปร
int myOutput = D0;
int myDelayTime = 2000; //ค่าของเวลาจะมีหน่วยเป็น มิลิวินาที

//ส่วนของ setup คือ ส่วนที่กำหนดค่าคงที่ ที่จะใช้ในโค้ด จะทำงานครั้งแรก ครั้งเดียว
void setup() {

//  ส่วนที่กำหนด การส่ง Digital Out จากขาของ Node
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(myOutput, OUTPUT);


  
}// end of setup

//ส่วนของ loop จะทำงานวนไปมาตาม digital logic
// the loop function runs over and over again forever
void loop() {
  digitalWrite(myOutput, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(myDelayTime);                       // wait for a second
  digitalWrite(myOutput, LOW);    // turn the LED off by making the voltage LOW
  delay(myDelayTime);                       // wait for a second
}
