// C++ code
//
byte pins[7]={13,12,11,10,9,8,7};
byte btn;
byte show[16][7]={
  {0,0,0,0,0,0,1},
  {1,0,0,1,1,1,1},
  {0,0,1,0,0,1,0},
  {0,0,0,0,1,1,0},
  {1,0,0,1,1,0,0},
  {0,1,0,0,1,0,0},
  {0,1,0,0,0,0,0},
  {0,0,0,1,1,1,1},
  {0,0,0,0,0,0,0},
  {0,0,0,0,1,0,0},
  {0,0,0,1,0,0,0},
  {1,1,0,0,0,0,0},
  {0,1,1,0,0,0,1},
  {1,0,0,0,0,1,0},
  {0,1,1,0,0,0,0},
  {0,1,1,1,0,0,0}
};
void setup()
{ for(byte i=0;i<7;i++){
     pinMode(pins[i],OUTPUT);
  }
  
    pinMode(6, INPUT_PULLUP);
}

void loop()
{ 
  for(byte i=0;i<16;i++){btn = digitalRead(6);
   for(byte j=0;j<7;j++){
    if(btn == LOW){ 
       digitalWrite(pins[j], show[16][7]);
      }
     else{
     digitalWrite(pins[j], show[i][j]);
     }
   }
   
   delay(1000); // Wait for 1000 millisecond(s)
  
  }
  
  
}
