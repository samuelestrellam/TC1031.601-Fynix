# FYNIX - Sistema de Gestión para Tienda de Ropa Deportiva

**Alumno:** Samuel Estrella Martínez
**Matrícula:** A01714991

## Descripción del proyecto

FYNIX es un proyecto enfocado en desarrollar un sistema para la gestión de una tienda de ropa deportiva.

El sistema tendrá como objetivo organizar y facilitar el manejo de la información relacionada con los productos de la tienda, permitiendo consultar el catálogo, organizar los productos, conocer su disponibilidad y acceder a la información de manera eficiente.

Los productos de FYNIX contarán con diferentes atributos, como:

* ID
* Nombre
* Categoría
* Talla
* Precio
* Stock

A lo largo del desarrollo del proyecto se irán agregando diferentes funcionalidades para mejorar la administración así como la consulta del catálogo.

Entre las funcionalidades que se contemplan para el proyecto se encuentran:

* Registro y almacenamiento de productos.
* Consulta del catálogo.
* Ordenamiento de productos por diferentes atributos.
* Filtros para consultar productos específicos.
* Búsqueda de productos.
* Consulta de disponibilidad y stock.
* Organización de los productos por categoría, precio, talla u otros atributos.
* Acceso eficiente a la información almacenada.

El programa estará dividido en diferentes partes para que posteriormente podamos agregar nuevas funciones de manera sencilla sin modificar todo el código.

## Primer avance

En este primer avance se trabaja principalmente con el almacenamiento de los productos y su organización mediante algoritmos de ordenamiento.

Se implementa un algoritmo de ordenamiento que permite organizar los productos de FYNIX utilizando diferentes atributos, como el precio y el stock.

Este avance sirve como base para las funcionalidades que se agregarán posteriormente al sistema.

## Algoritmo de ordenamiento

Para el primer avance se utiliza **Insertion Sort**.

El algoritmo permite recorrer los productos y colocarlos en la posición correspondiente de acuerdo con el atributo seleccionado.

Posteriormente, conforme avance el proyecto, se podrán analizar y utilizar diferentes algoritmos de búsqueda y ordenamiento de acuerdo con las necesidades del sistema.

## SICT0301: Evalúa los componentes

Para el primer avance se realiza un análisis de complejidad del algoritmo Insertion Sort.

### Complejidad temporal

* **Mejor caso:** O(n)
* **Caso promedio:** O(n²)
* **Peor caso:** O(n²)

El mejor caso ocurre cuando los elementos ya se encuentran ordenados, por lo que el algoritmo necesita realizar pocas modificaciones.

En el caso promedio, los elementos requieren diferentes comparaciones y movimientos para encontrar su posición correspondiente, por lo que la complejidad es O(n²).

En el peor caso, los elementos se encuentran en orden inverso y es necesario realizar una mayor cantidad de comparaciones y movimientos, obteniendo una complejidad de O(n²).

### Complejidad espacial

La complejidad espacial adicional de Insertion Sort es **O(1)**, debido a que el algoritmo realiza el ordenamiento sobre los datos existentes y utiliza una cantidad constante de memoria adicional.

## SICT0302: Toma decisiones

Para este primer avance se seleccionó **Insertion Sort** debido a que permite ordenar de manera sencilla los productos almacenados en el catálogo.

El algoritmo resulta adecuado para trabajar inicialmente con una cantidad pequeña de productos y permite implementar diferentes criterios de ordenamiento, como precio y stock.

La elección del algoritmo podrá cambiar o complementarse en futuros avances dependiendo de las necesidades que presente el sistema y de la cantidad de información que se maneje.

## Objetivo del proyecto

El objetivo principal es desarrollar un sistema que permita organizar y consultar de manera eficiente la información de los productos de FYNIX, aplicando estructuras de datos, algoritmos de ordenamiento y búsqueda, análisis de complejidad y buenas prácticas de programación.

El proyecto busca que la información del catálogo pueda ser consultada y organizada de diferentes maneras, facilitando su manejo conforme aumente la cantidad de productos.
