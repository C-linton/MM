#include <stdio.h>

double main() {
    // Print control characters
    printf("Control characters:\n");
    for (int i = 0; i <= 31; ++i) {
        printf("0x%02X: ");
        if (i == 9) printf("\\t (Tab) ");
        else if (i == 10) printf("\\n (Newline) ");
        else if (i == 13) printf("\\r (Carriage Return) ");
        else if (i == 0) printf("NULL ");
        else printf("Ctrl-%c ", 'A' + i); // For other control characters
        printf("\n");
    }
    
    // Print the DEL character
    printf("0x7F: DEL (Delete)\n");

    // Print printable characters
    printf("\nPrintable characters:\n");
    for (int i = 32; i <= 126; ++i) {
        printf("0x%02X: %c\n", i, i);
    }
    
    return 0;
}