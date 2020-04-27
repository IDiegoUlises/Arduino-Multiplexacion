void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
}

void loop() {

  //columnas 1
  int boton1 = digitalRead(2);

  //columna 2
  int boton2 = digitalRead(3);

  //columna 3 y fila 3
  int boton3 = digitalRead(4);

  //fila 2
  int boton4 = digitalRead(5);

  //fila 1
  int boton5 = digitalRead(6);

  //Obtener la posicion
  posicion(boton1, boton2, boton3, boton5, boton4, boton3);
}

//Obtiendo la columa y fila se obtiene la posicion en la cual fue pulsada el boton
void posicion(int columna1, int columna2, int columna3, int fila1, int fila2, int fila3)
{
  //columna 1
  if (columna1 == 0 && fila1 == 0) //High
  {
    Serial.println("Es la posicion 1");
    delay(50);
  }

  if (columna1 == 0 && fila2 == 0)
  {
    Serial.println("Es la posicion 2");
    delay(50);
  }

  if (columna1 == 0 && fila3 == 0)
  {
    Serial.println("Es la posicion 3");
    delay(50);
  }
  //columna 2
  if (columna2 == 0 && fila1 == 0)
  {
    Serial.println("Es la posicion 4");
    delay(50);
  }

  if (columna2 == 0 && fila2 == 0)
  {
    Serial.println("Es la posicion 5");
    delay(50);
  }

  if (columna2 == 0 && fila3 == 0)
  {
    Serial.println("Es la posicion 6");
    delay(50);
  }
  //columna 3
  if (columna3 == 0 && fila1 == 0)
  {
    Serial.println("Es la posicion 7");
    delay(50);
  }

  if (columna3 == 0 && fila2 == 0)
  {
    Serial.println("Es la posicion 8");
    delay(50);
  }

  if (columna3 == 0 && fila3 == 0)
  {
    Serial.println("Es la posicion 9");
    delay(50);
  }
}
 
