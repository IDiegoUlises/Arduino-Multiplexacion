# Multiplexacion.-Arduino

El teclado martricial utiliza la multiplexacion. MUY MUY IMPORTANTE ESTO SE UTILIZA EN TODO EL PLANETA EN TELECUMINCACIONES DE ALTA VELOCIDIDAD Y ES CLAVE POR EJEMPLO PARA HACER QUE EL ARDUINO PUEDA ENVIAR MUCHO MUCHO MUCHOS DATOS UTILIZANDO ESTA TECNICA MUY SENCILLA DE APLICAR PERO REALMENTE ES MUY COMPLEJA. NO ES SIMPLEMENTE TENER 16 BOTONES Y PODER VER EL ESTADO CON EL BOTON CON SOLO 8 CABLES NO SOLO HACE ESO HABRE UN MUNDO DE POSIBILIDAD EN DISMUNIR LOS CABLES EN TODO CIRCUITO ELECTRONICO. INCLUYENDO COMPUERTAS LOGICAS MICROPROCESADORES, ETC.

se trata que tienes 12 cables para ver datos pero puedes reducir a 6 cables AUMENTANDO la eficiencia y va a tener la misma velocidad de tranmision de datos PERO disminuyendo la cantidad de cables.

Ejemplo en la vida real mio en tranmision de datos: Yo compre el modulo camara para arduino sucede que el problema para enviar la señal serial al modulo lcd para mostrar la imagen de la camara tiene un retraso de 5 segundos toda la comunicacion se puede realizar una comunicacion i2c, analogica o serial es imposible mostrar la imagen en tiempo real en el caso podemos utilizar una comunicacion con multiplexacion aumentando la cantidad de cables para asi poder mostrar la imagen en tiempo real.

Ejemplo dismunior botones: Tengo un circuito de control con 50 botones y mi arduino tiene solo 25 entradas digitales yo puedo utilizar la multiplexacion para leer los 50 botones solo con 25 entradas del arduino.

* Me ahorro otro arduino + es decir ahorro de recursos y dinero
* Hago la recoleccion de datos de los sensores mas eficientes y mejores
* Puedo enviar datos a una velocidad que tan increible que por dar un ejemplo velocidades tan prodigio que la nasa pose
