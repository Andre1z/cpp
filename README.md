# 📌 Introducción a C++ 🚀  

¡Bienvenido a este repositorio! Aquí encontrarás una introducción al lenguaje de programación **C++**, con ejemplos prácticos para ayudarte a comprender los fundamentos.  

## 📖 Contenido  

Este repositorio incluye:  

- ✅ Conceptos básicos de C++  
- ✅ Uso de variables y tipos de datos  
- ✅ Estructuras de control de flujo  
- ✅ Funciones y su implementación  
- ✅ Manejo de memoria y punteros  
- ✅ Programación orientada a objetos (POO)  

## 🚀 Requisitos  

Para ejecutar los ejemplos, necesitarás un compilador de C++ y un editor de código. Algunas opciones recomendadas son:  

- **Compiladores:**
  - [MinGW](https://www.mingw-w64.org/)
  - [WSL (Windows Subsystem for Linux)](https://learn.microsoft.com/en-us/windows/wsl/install)
  - [GCC (GNU Compiler Collection)](https://gcc.gnu.org/)  
  - [Clang](https://clang.llvm.org/)  
  - [MSVC (Microsoft Visual C++)](https://visualstudio.microsoft.com/)  

- **Editores de código:**  
  - [VS Code](https://code.visualstudio.com/)  
  - [CLion](https://www.jetbrains.com/clion/)  
  - [Code::Blocks](http://www.codeblocks.org/)  
  - [Visual Studio](https://visualstudio.microsoft.com/)  

## 🔧 Instalación y Uso  

### 🔹 Instalación del compilador  

#### 🖥️ Windows
Opción 1: Instalar MinGW-w64 y agregarlo a la variable de entorno PATH.

Opción 2: Instalar MSVC mediante Visual Studio.

Opción 3: Usar WSL (Windows Subsystem for Linux) para tener un entorno Linux en Windows.

-Verifica la instalación con:
```powershell
g++ --version
```

##### 🖥️ Linux (Ubuntu/Debian)  

- Abre una terminal y ejecuta:  
```bash
sudo apt update
sudo apt install g++ -y
```

- Verifica la instalación con:
```bash
g++ --version
```
###### 🖥️ macOS
- Instala Xcode Command Line Tools con:
```bash
xcode-select --install
```
- Si prefieres usar Homebrew, instala GCC con:
```bash
brew install gcc
```
- Verifica la instalación con:
```bash
g++ --version
```
## Compila el código: ##
```bash
g++ ejemplo.cpp -o ejemplo
```
## Ejecuta el programa: ##
```bash
./ejemplo   # En Linux/macOS
ejemplo.exe # En Windows
```
