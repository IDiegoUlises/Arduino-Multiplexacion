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

//Columnas 1
  int boton1 = digitalRead(2);
  funcion(boton1,"boton 1");

//columna 2
  int boton2 = digitalRead(3);
  funcion(boton2,"boton 2");

//columna 3 y fila 3
  int boton3 = digitalRead(4);
  funcion(boton3,"boton 3");

//fila 2
  int boton4 = digitalRead(5);
  funcion(boton4,"boton 4");

  //fila 1
  int boton5 = digitalRead(6);
  funcion(boton5,"boton 5");

}

void funcion(int pulsado,String mensaje)
{
  if (pulsado == 0) //high
  {
    Serial.print(mensaje);
    Serial.println(" HIGH");
  }
  delay(50);
}
```

## Parte 3(Intento de algoritmo para obtener la posicion)
```c++
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

  //Columnas 1
  int boton1 = digitalRead(2);
  //funcion(boton1,"boton 1");

  //columna 2
  int boton2 = digitalRead(3);
  //funcion(boton2,"boton 2");

  //columna 3 y fila 3
  int boton3 = digitalRead(4);
  //funcion(boton3,"boton 3");

  //fila 2
  int boton4 = digitalRead(5);
  //funcion(boton4,"boton 4");

  //fila 1
  int boton5 = digitalRead(6);
  //funcion(boton5,"boton 5");

  posicion(boton1, boton2, boton3, boton5, boton4, boton3);

}

void funcion(int pulsado, String mensaje)
{
  if (pulsado == 0) //high
  {
    Serial.print(mensaje);
    Serial.println(" HIGH");
  }
  delay(50);
}

void posicion(int columna1, int columna2, int columna3, int fila1, int fila2, int fila3)
{
  ////columna 1
  if (columna1 == 0 && fila1 == 0) //high
  {
    Serial.println("Es posicion 1");
    delay(100);
  }

  if (columna1 == 0 && fila2 == 0)
  {
    Serial.println("Es posicion 2");
    delay(100);
  }

  if (columna1 == 0 && fila3 == 0)
  {
    Serial.println("Es posicion 3");
    delay(100);
  }
  ///////////////////////////////////columna 2
  if (columna2 == 0 && fila1 == 0)
  {
    Serial.println("Es posicion 4");
    delay(100);
  }

  if (columna2 == 0 && fila2 == 0)
  {
    Serial.println("Es posicion 5");
    delay(100);
  }

  if (columna2 == 0 && fila3 == 0)
  {
    Serial.println("Es posicion 6");
    delay(100);
  }
  //////////////////////////columna 3
  if (columna3 == 0 && fila1 == 0)
  {
    Serial.println("Es posicion 7");
    delay(100);
  }

  if (columna3 == 0 && fila2 == 0)
  {
    Serial.println("Es posicion 8");
    delay(100);
  }

  if (columna3 == 0 && fila3 == 0)
  {
    Serial.println("Es posicion 9");
    delay(100);
  }
}
```
