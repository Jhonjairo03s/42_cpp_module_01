_This project has been created as part of the 42 curriculum by jhvalenc._

# C++ Module 01: Allocation de memoria, punteros a miembros, referencias y un switch en el fin del mundo
## Descripción
**C++ Module 01** profundiza en los conceptos esenciales de la gestión de memoria en C++, distinguiendo de forma clara entre la asignación en la pila (_stack_) y en el montón (_heap_). El módulo también introduce el uso de referencias frente a punteros, el manejo de punteros a funciones miembro y la manipulación básica de archivos.

Este repositorio contiene los ejercicios desarrollados para este módulo:
- **ex00 (BraiiiiiiinnnzzzZ):** Práctica sobre la creación de objetos en la pila vs. el montón (`new`/`delete`), controlando estrictamente el ciclo de vida y los destructores de la clase `Zombie`.
- **ex01 (Moar brainz!):** Asignación y destrucción eficiente de una horda completa de zombis utilizando un único bloque de memoria dinámica contigua.
- **ex02 (HI THIS IS BRAIN):** Demostración práctica de la diferencia fundamental entre punteros y referencias utilizando un string.
- **ex03 (Unnecessary violence):** Estudio sobre cuándo utilizar referencias (atributos obligatorios que nunca son nulos como en `HumanA`) frente a punteros (relaciones opcionales o reasignables como en `HumanB`) a través de la clase `Weapon`.
- **ex04 (Sed is for losers):** Programa en C++ para simular un comando `sed` básico que lee un archivo, busca y reemplaza ocurrencias de una cadena por otra, escribiendo el resultado en un nuevo archivo `.replace`.
- **ex05 (Harl 2.0):** Implementación de punteros a funciones miembro para evitar largas cadenas de condicionales (`if/else if`) mediante un sistema de niveles de log (_DEBUG, INFO, WARNING, ERROR_).
- **ex06 (Harl filter):** Extensión del ejercicio anterior utilizando una estructura de control `switch` optimizada para filtrar y mostrar mensajes a partir de un nivel de gravedad determinado.
## Instrucciones
Todos los ejercicios incluyen su respectivo Makefile configurado bajo las normas estrictas de compilación de 42 (`-Wall -Wextra -Werror` y estándar C++98).
## Compilación y Ejecución
1. Clonar el repositorio:
   ```Bash
   git clone <url-del-repositorio>
   cd 42_cpp_module_01
    ```
3. Ejecutar cualquiera de los ejercicios (ej. ex00):
   ```Bash
   cd ex00
   make
   ./zombie
   make clean
   make fclean
    ```
5. Ejecutar el ejercicio 04 (Sed replacement):
   ```Bash
   cd ../ex04
   make
   ./sed <archivo> <cadena_a_buscar> <cadena_de_reemplazo>
     ```
## Recursos
Referencias técnicas y documentación consultada para el desarrollo de este módulo:
- **Documentación oficial:** CPlusPlus para el manejo de flujos de ficheros (`std::ifstream`/`std::ofstream`), gestión de memoria dinámica y sintaxis de C++98.
- **Normas del proyecto:** Restricciones de compilación y diseño orientadas al estándar **C++98** exigido por el subject de 42.
- **Uso de Inteligencia Artificial:**
  - _Tareas asignadas a la IA:_ Asistencia en la revisión conceptual de diferencias de rendimiento y alcance entre referencias y punteros, validación de la lógica de punteros a funciones miembro en el ejercicio de Harl.
