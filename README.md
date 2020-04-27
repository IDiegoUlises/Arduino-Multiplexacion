# Multiplexacion implementado en Arduino(Obsoleta)

Es una tecnica utiliza para que consiste..
se utiliza para:

* Las comunicacion para auemntar la trasnferencia de datos
* Para disminuir la cantidad de puertos para enviar datos
* Leer botones disminuyendo la cantidad de puertos utilizados

Ejemplo en la vida real mio en tranmision de datos: Yo compre el modulo camara para arduino sucede que el problema para enviar la señal serial al modulo lcd para mostrar la imagen de la camara tiene un retraso de 5 segundos toda la comunicacion se puede realizar una comunicacion i2c, analogica o serial es imposible mostrar la imagen en tiempo real en el caso podemos utilizar una comunicacion con multiplexacion aumentando la cantidad de cables para aumentar la velocidad de transferiencia de los datos para poder mostrar la imagen en tiempo real.

Ejemplo disminiur botones: Tengo un circuito de control con 50 botones y mi arduino tiene solo 25 entradas  yo puedo utilizar la multiplexacion para leer los 50 botones solo con 25 entradas del arduino.


Teclado Matrizzi utiliza la multiplexacion para que con solo 9 puerto se pueden ver los valores de 18 puertos

Dato: Para utilizar el teclado matrizial utilizan cosas complejas con un monton de codigos?? que no sabe ni para sirve se me ocurrio una siple formula general que es  1 + 1   y puede servir quizas para señales analogicas y digitales y para botones, se base en una matriz 4 x 4  es decir 1,2,3,4 posiciones para arriba y 1,2,3,4 posiciones para a lado cuando es pulsado un boton se revisa la posicion de arriba que en este caso es 1 y la posicion de a lado es 2 es decir con 2 cables se puede obtener la direccion con esto con 8 cables se puede obtener la direccion de 16 posiciones donde es presionado el boton. 

En total son 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 botones y lo conectamos como una matriz 4x4 es decir 16 posiciones para arriba y 4 posiciones para lado 4 la conexion es simple se ordena por una fila y una columna por fila de 4 y columna de 4 entonces se elige la posicione de la fila por ejemplo 2 y la columna 3 recibiendo solo 2 señales digitales podemos obtener el lugar exacto la idea de esto es que por cada 16 botones solo se utilizen 9 entradas.

ADD: Tambien se puede utilizar matriz de 2x2 es decir 1,2,3,4 botones y solo con 2 entradas se puede obtener las pulsaciones de los 4 botones.

En la fila 1,2 se conecta en paralelo o serie la verdad que no se y la columna 1,2 paralela nose pero es decir si tu presiones un boton de la fila es como si presionaras todos los botones de la fila es como si presionaras la fila completa y tambien la columna completa pero solo sabiendo que posiciones de la fila y la columna que son 2 pines puedes obtener la direccion exacta


## Inicio de codigo que funciona para leer el estado de los botones parte 1

```c++
void setup()
{
  Serial.begin(9600);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);

}

void loop() {

  int boton1 = digitalRead(5);
  funcion(boton1,"boton 1");
  
  int boton2 = digitalRead(6);
  funcion(boton2,"boton 2");


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

## Parte 2(Declarado)
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

## Pensando para borrar el repositorio quejas

Es un buen metodo para aprender que es importante la multiplexacion! pero yo hice todo pero se necesitaba pulsadores de 4 patitas y mis pulsadores eran de solo 2 patitas utilize 10000 cables lleno con todo el dinero gastado en los cables me hubiera podido comprar otro arduino y 4 horas poner los cablesitos en la protoboard, no es un buen metodo para implementarlo ya que se debe hacer decenas de conexiones y los cables y el proceso de realizacion tiene un costo alto de tiempo a lo mejor para fabricas puede ser rentable este metodo o solo comprando una matriz de 4x4 de pulsadores y listo... incluso un modulo de extension de pwm para aumentar entradas digitales es mejor con comunicacion I2C y barato! barato! este modulo se esta quedando obsoleto ya que vale casi lo mismo que un modulo UART de expacion de puertos analogicos y digitales pero en fabricas industriales que necesiten millones millones y que solo 1 peso haga la diferencia puede ser buena idea.....

* Solo unos botones con una conexion y listo 

* modulo pwm que puede remplazar a esto nuevo repositorio
