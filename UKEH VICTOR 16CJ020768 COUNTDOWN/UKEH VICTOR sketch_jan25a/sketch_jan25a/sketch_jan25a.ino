int digit[10] = {0b0111111, 0b0000110, 0b1011011, 0b1001111, 0b1100110, 0b1101101, 0b1111101, 0b0000111, 0b1111111, 0b1101111};

          int figureOne, figureTwo;  
  
           void setup()   
         {  
           for (int a = 2; a < 9; a++)   
             {  
              pinMode(a, OUTPUT);  
             }  
              pinMode(12, OUTPUT);  
              pinMode(13, OUTPUT);  
         }   
          void loop() {  
             for (int c = 68; c >= 0; c--)   
              {  
                figureTwo = c / 10;  
                 figureOne = c % 10;  
            for ( int o = 0; o < 68; o++)  
             {  
               digitalWrite(12, HIGH);  
               digitalWrite(13, LOW);  
               dis(figureTwo);  
               delay(10);  
               digitalWrite(13, HIGH);  
               digitalWrite(12, LOW);  
               dis(figureOne);  
               delay(10);  
           }   
         }  
        }  
         void dis(int num)   
          {  
            for (int a = 2; a < 9; a++)   
             {  
              digitalWrite(a, bitRead(digit[num], a - 2));   
             }  
          }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
