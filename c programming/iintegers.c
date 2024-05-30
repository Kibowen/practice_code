#include <stdio.h>
#include <stdlib.h>

void collatzConjecture(int n) {
    printf("%d ", n);
    
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (n * 3) + 1;
        }
        
        printf("%d ", n);
    }
}

void generateGraph(int n) {
    FILE *gp;
    gp = popen("gnuplot -persist", "w");
    
    if (gp == NULL) {
        fprintf(stderr, "Error opening gnuplot\n");
        return;
    }
    
    fprintf(gp, "set terminal pngcairo enhanced font 'Verdana,12'\n");
    fprintf(gp, "set output 'collatz_graph.png'\n");
    fprintf(gp, "set title 'Collatz Conjecture'\n");
    fprintf(gp, "set xlabel 'Step'\n");
    fprintf(gp, "set ylabel 'Value'\n");
    fprintf(gp, "plot '-' with linespoints pointtype 7 pointsize 1 title 'Collatz sequence'\n");
    
    fprintf(gp, "%d\n", n);
    
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (n * 3) + 1;
        }
        
        fprintf(gp, "%d\n", n);
    }
    
    fprintf(gp, "e\n");
    fflush(gp);
    pclose(gp);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Collatz sequence: ");
    collatzConjecture(num);
    printf("\n");
    
    generateGraph(num);

    printf("Graph generated and saved as 'collatz_graph.png'\n");

    return 0;
}