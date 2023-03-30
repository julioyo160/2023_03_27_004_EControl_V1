// 2023_03_27_004_EControl_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

int main()
{
    std::cout << " \tHOLA BIENVENIDO A MI CONSULTORIO MEDICO \n " << std::endl;
    
    std::cout << " buenas tardes \n " << std::endl;

    std::string nombre;
    std::cout << " cual es su nombre " << std::endl;
    getline(std::cin, nombre);
    //std::cin >> nombre;
    std::cout << "Asi que te llamas: " << nombre << std::endl;

    std::string relato;
    std::cout << " Que paso? \n " << std::endl;
    getline(std::cin, relato);
    std::cout << " Veamos que podemos hacer \n " << std::endl;

    char edad[10];
    std::cout << " cual es tu edad? \n " << std::endl;
    std::cin >> edad;
    std::cout << "ok \n " << std::endl;

    int peso;
    std::cout << " peso? \n " << std::endl;
    std::cin >> peso;
    std::cout << "ok \n " << std::endl;

    float altura;
    std::cout << " cual es tu altura? \n " << std::endl;
    std::cin >> altura;
    std::cout << "ok \n " << std::endl;


    bool pregunta_sexo = false;
    std::cout << "Lea y responda con verdadero o falso: \n" <<
        "Tipo de sexo? 0)masculino 1)femenino" << std::endl;
    // Recibir respuesta del usuario
    std::cin >> pregunta_sexo;
    std::cout << "ok \n " << std::endl;

    bool pregunta = false;
    std::cout << "Lea y responda con verdadero o falso: \n" <<
        "se diente mal? 0)No 1)Si" << std::endl;
    // Recibir respuesta del usuario
    std::cin >> pregunta;
    std::cout << "ok \n " << std::endl;

    bool pregunta_dolor = true;
    std::cout << "Lea y responda con verdadero o falso: \n" <<
        "siente dolor? 0)No 1)Si" << std::endl;
    // Recibir respuesta del usuario
    std::cin >> pregunta_dolor;
    std::cout << "dejeme sacar su IMC \n " << std::endl;

    float IMC = 0;
    IMC = peso / (altura * altura);
    std::cout << " Mira este es tu imc: " << IMC;


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
