# Multiplexacion implementado en arduino

se trata que tienes 12 cables para ver datos pero puedes reducir a 6 cables AUMENTANDO la eficiencia y va a tener la misma velocidad de tranmision de datos PERO disminuyendo la cantidad de cables.

se utiliza para:

* Las comunicacion para auemntar la trasnferencia de datos
* Para disminuir la cantidad de puertos para enviar datos
* Leer botones disminuyendo la cantidad de puertos utilizados

Ejemplo en la vida real mio en tranmision de datos: Yo compre el modulo camara para arduino sucede que el problema para enviar la señal serial al modulo lcd para mostrar la imagen de la camara tiene un retraso de 5 segundos toda la comunicacion se puede realizar una comunicacion i2c, analogica o serial es imposible mostrar la imagen en tiempo real en el caso podemos utilizar una comunicacion con multiplexacion aumentando la cantidad de cables para aumentar la velocidad de transferiencia de los datos para poder mostrar la imagen en tiempo real.

Ejemplo disminiur botones: Tengo un circuito de control con 50 botones y mi arduino tiene solo 25 entradas  yo puedo utilizar la multiplexacion para leer los 50 botones solo con 25 entradas del arduino.

* ahorro otro arduino + es decir ahorro de recursos y dinero
* Hago la recoleccion de datos con menos puertos
* Puedo enviar datos a una velocidades altas

Teclado Matrizzi utiliza la multiplexacion para que con solo 9 puerto se pueden ver los valores de 18 puertos
