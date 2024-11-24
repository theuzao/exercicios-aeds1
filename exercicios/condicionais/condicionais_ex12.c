// Conversor de Unidades de Temperatura
// Crie um programa que converte temperaturas entre Celsius, Fahrenheit e Kelvin com base na escolha do usuário. 
// Use switch-case.
// Entrada: Temperatura: 25 (Celsius para Fahrenheit)
// Saída: 77°F

#include <stdio.h>

int main() {
    
    int conversaoTemperatura;
    float conversaoNum;
    float temperatura;

    // Menu de opções para conversão
    printf("1. Celsius para Fahrenheit\n2. Celsius para Kelvin\n3. Fahrenheit para Celsius\n4. Fahrenheit para Kelvin\n5. Kelvin para Celsius\n6. Kelvin para Fahrenheit\n");
    
    scanf("%d", &conversaoTemperatura); // Lê a escolha do usuário
    
    printf("Temperatura: ");
    scanf("%f", &temperatura); // Lê a temperatura fornecida pelo usuário
    
    switch (conversaoTemperatura) {
        case 1: // Celsius para Fahrenheit
            conversaoNum = (temperatura * 1.8) + 32;
            printf("Temperatura: %0.2f (Celsius para Fahrenheit)", conversaoNum);
            break;
        
        case 2: // Celsius para Kelvin
            conversaoNum = temperatura + 273.15;
            printf("Temperatura: %0.2f (Celsius para Kelvin)", conversaoNum);
            break;
            
        case 3: // Fahrenheit para Celsius
            conversaoNum = (temperatura - 32) * (5.0 / 9.0); 
            printf("Temperatura: %0.2f (Fahrenheit para Celsius)", conversaoNum);
            break;
        
        case 4: // Fahrenheit para Kelvin
            conversaoNum = (temperatura - 32) * (5.0 / 9.0) + 273.15; 
            printf("Temperatura: %0.2f (Fahrenheit para Kelvin)", conversaoNum);
            break;
        
        case 5: // Kelvin para Celsius
            conversaoNum = temperatura - 273.15;
            printf("Temperatura: %0.2f (Kelvin para Celsius)", conversaoNum);
            break;
            
        case 6: // Kelvin para Fahrenheit
            conversaoNum = ((temperatura - 273.15) * 1.8) + 32; 
            printf("Temperatura: %0.2f (Kelvin para Fahrenheit)", conversaoNum);
            break;
        
        default: // Operação inválida
            printf("Operacao invalida");
            return 1; /
    }
    
    printf("\n");
    return 0;
}
