/* Tabla ASCII */
void setup() { 
 //Initialize serial and wait for port to open:
  Serial.begin(9600); 
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
  //Imprime el titulo 
  Serial.println("ASCII Table ~ Mapa de caracteres"); 
} 

// El primer valor es 33, representa !
int thisByte = 33; 

void loop() {  
  Serial.write(thisByte);    
  Serial.print(", dec: "); 
  // Imprime el valor en decimal
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  // Imprime el valor en hexadecimal
  Serial.print(thisByte, HEX);    
  Serial.print(", oct: "); 
  // Imprime el valor en octal (base 8);
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  //Imprime el valor en binario
  Serial.println(thisByte, BIN);   
  //Se detiene en el caracter 150 
  if(thisByte == 200) {     
    thisByte=0; 
  } 
  thisByte++;  
} 
