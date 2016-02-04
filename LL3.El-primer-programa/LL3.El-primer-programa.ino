/*************************************************************************
**                                                                      **
**        LL3. El primer programa                                       **
**        En aquest lliurament utilitzarem el programa "Blink"          **
**        que fa encendre o apagar un LED de l'Arduino cada 1 segon     **
**        Cambiant el delay cambiarem el temps que fa pampallugues el   **                         
**        LED  (s'ha d'expressar en ms).                                **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************

// Acabem de  declarar una variable de nom ledBlink, assignada al pin 13 on es troba el LED.

int ledBlink = 13; 

//******  Setup  *********************************************************

// El Setup només s'executa un sol cop al Arduino, al encendre'l si volem reiniciarlo cal fer "reset" o desconectar i conectar la placa.

void setup() {
  // Declara el pin13 de nom ledBlink com a sortida
  pinMode(ledBlink, OUTPUT);
}


//******  Loop  **********************************************************

//El Loop s'estarà executant continuament (d'acord a les ordres del programa)

// digitalWrite, el que fà es escriure al pin 13 en quin estat el vol (HIGH = 1, LOW = 0) i delay es un retard que fà per veure el LED.

void loop() {
  digitalWrite(ledBlink, HIGH);   // Encen el Led, HIGH significa un estat alt, per tant un 1 lògic.
  delay(1000);                    // Esperra 1 segon (expressat en ms)
  digitalWrite(ledBlink, LOW);    // Apaga el Led, LOW significa un estat baix, per tant un 0 lògic.
  delay(1000);                    // Torna a esperar 1 segon (en ms també)
}
