#include <iostream>
#include "TotalProductos.h"
#include "Producto.h"

int main() {
    std::cout << "SUPERMERCADO MEGA" << std::endl;

    TotalProductos inventario;

    int opcion;
    do {
        std::cout << "\nSeleccione una opción:\n"
                  << "1. Agregar un producto\n"
                  << "2. Mostrar productos de origen animal\n"
                  << "3. Mostrar productos de origen vegetal\n"
                  << "4. Mostrar total de productos\n"
                  << "0. Salir\n"
                  << "Opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::string nombre, marca, fechaCaducidad, clasificacion;
                int codigo, cantidad;
                std::cout << "\nIngrese los datos del producto:\n";
                std::cout << "Nombre: ";
                std::cin >> nombre;
                std::cout << "Marca: ";
                std::cin >> marca;
                std::cout << "Fecha de caducidad: ";
                std::cin >> fechaCaducidad;
                std::cout << "Clasificación (animal/vegetal): ";
                std::cin >> clasificacion;
                std::cout << "Código: ";
                std::cin >> codigo;

                inventario.agregarProducto(Producto(nombre, marca, fechaCaducidad, clasificacion, codigo));
                std::cout << "Producto agregado correctamente.\n";
                break;
            }
            case 2:
                inventario.mostrarProductosAnimales();
                break;
            case 3:
                inventario.mostrarProductosVegetales();
                break;
            case 4:
                inventario.mostrarTotalProductos();
                break;
            case 0:
                std::cout << "Saliendo del programa.\n";
                break;
            default:
                std::cout << "Opción inválida. Intente nuevamente.\n";
                break;
        }
    } while (opcion != 0);

    return 0;
}
