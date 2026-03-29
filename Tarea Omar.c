#include <stdio.h>
int main() {
    int inicio, fin, incremento;
    
    printf("Ingrese el numero inicial: ");
    scanf("%d", &inicio);
    printf("Ingrese el numero final: ");
    scanf("%d", &fin);
  
    do {
        printf("Ingrese el valor de incremento: ");
        scanf("%d", &incremento);
        if (incremento == 0) {
            printf("\nEl valor del incremento debe ser diferente a 0\n");
        }
    } while (incremento == 0); 

    printf("\nEl resultado del incremento es:\n");
    
    if (inicio <= fin && incremento > 0) {
        for (int i = inicio; i <= fin; i += incremento) {
            printf("%d ", i);
        }
    } else if (inicio >= fin && incremento < 0) {
        for (int i = inicio; i >= fin; i += incremento) {
            printf("%d ", i);
        }
    } else {
        printf("Los numeros inicial o final ingresados no son validos");
    }
    
    printf("\n");
    return 0;
}
