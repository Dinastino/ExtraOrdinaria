# ExtraOrdinaria
https://github.com/Dinastino/ExtraOrdinaria.git

# Preguntas teoría
**¿Cuáles son las principales características del lenguaje C++?**

la respuesta seria la "d. Todas las anteriores" dado que c++ soporta la orientacion a objetos a diberencia de C, es un tipo fuerte y estatico y permite la programacion a bajo nivel

**¿Qué es un archivo makefile?**

La respuesta es la b.Un archivo que ayuda a gestionar y automatizar la compilacion de los proyectos de programacion.

**¿Cómo se inicia un comentario de varias líneas en C++?**

Se inicia con a."//" por ejeplo: //Esto es una clase.

**¿Cuál es la principal diferencia entre un puntero y una referencia en C++?**

d. Un puntero pueder se Null mientras que una referencia no.

**¿Qué es lo que hace la declaración throw en la gestión de excepciones en C++?**

b.lanza una excepcion, Lanza una excepcion en un bloque try para ser capturada por un catch y manejada.


# Explicaion de codigo

***En el main.cpp exixten tres funciones diferentes:***

*La funcion cambio punteros*: Utiliza punteros para intercambiar los valores de dos variables, pide dos punteros(int) y lo que hace es que guarde el valor de uno en una variable  luego le aplica a este el valor del otro, y el valor del otro es intercambiado por el de la vaiable, es muy importante que la funcion reciva como parametros los punteros y no las variables en si dado q entonces solo estaria haciendo una copia de las variable e intercambiando esas lo que no afectaria al resto del codigo al ser destruida la funcion en la pila. Por eso se debe escribir en el ambito de parametros int* a y enviarle una dirección &a.

*La funcion dividir*: Recibe dos paremetros para una division y lanza una excepción si el divisor es 0. Teniendo en cuenta que esta funcion untiliza la clase "Excepciones_per" dentro del directorio "Mi_excepcion" para crear un e.what(mensaje de error) personalizado de no es posible dividir entre 0. Se utiliza esta funcion para mostrar como funcionan los try catch y throw.

*La funcion main*: que llama a todo y es la que se ejecuta al compilar, es decir es el centro del programa dado que sin ella no se podria ejecutar, si compilar pero no ejecutar.

***La clase estudiante***

La clase Estudiante se divide en dos archivos el header o . h, y en el que instancian las funciones o .cpp. En el .h se define la clase y sus parametros, en la parte private,no se puede acceder mas que por la clase,: un nombre, una edad y un grado para cada estudiante ademas un vector de estudiantes que es static, significa que es el mismo para todos los objetos de la misma. Y una  parte publica: con un contructor, que incializa todos los valos de un estudiante excepto el vectos static, un funcion agregar estudiate ,que agrega un estudiante al vector, la función mostrat_info, muestra el nombre grado y edad del estudiante, y las funciones mostrarEstudiantes y eliminar estudiantes, que como sus nombres indican se dedican a mostrar el vector y a eliminar datos de el respectivamente.

# Preguntas de desarrollo

***¿Cómo se organizan los programas en C++ en comparación con C?***

La mayor diferencia entre la organizacion entre c y c++ son las clases, dado que c++ es un lenguaje orientado a objetos permite una mayor limpieza de codigo y tambien un encapsulamiento al agrupar variables y funciones bajo un mismo identificante "objeto" es mucho mas facil llamar a diferntes funciones y permiter crear consas mas complejas como un estudiante con parametros multiples como se a visto antes. Aunque en C se puede intentar conseguir esto con struct(estructuras) y punteros a funciones sigue siendo mucho mas confuso que una clase, es mas comlicado y abulta mas. Ademas C++ accede a la STL que permite streams como el iostream(imput-output) que prmiten es uso de cout y cin y facilitan las cosas frente a printf y scanf entre otras ventajas de la STL.

***Describe la propagación de una excepción en C++. ¿Qué sucede si una excepción no es capturada?***

La propagacion de una excepcion seria la capacidad de una excepcion de viajar entre varias llamadas, es decir, si tu llamas a una funcion dentro de un bloue try-catch y esta llama a otro incluso si no esta dentro de un try-catch la excepción de la tercera funcion,imaginado que lanzara una, se propagara por todo el camino hasat llegar a la llamada original donde sera capturada por el catch. Y al lanzar una excepcion y no capturarla el codigo se ejecutaria en un principio pero al llegar a ese throw que no es capturado, a esa excepcion no manejada, saltara un error de compilacion de excepcion no manejada y se terminara el programa.

