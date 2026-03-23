#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Conversion formula
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f°F = %.2f°C\n", fahrenheit, celsius);

    return 0;
}
```

**Sample Output:**
```
Enter temperature in Fahrenheit: 98.6
98.60°F = 37.00°C
