#include <stdio.h>

#define MAX 100

int main() {
    int i,n,n1,n2, maxDegree;
    printf("Enter the degree of the first polynomial: ");
    scanf("%d", &n);
    int poly1[MAX] = {0};

    printf("Enter the coefficients for the first polynomial:\n");
    for ( i=n; i >= 0; i--) {
        printf("Coefficient for x^%d: ", i);
        scanf("%d", &poly1[i]);
    }

    // Accept the degree and coefficients of the second polynomial
    printf("\nEnter the degree of the second polynomial: ");
    scanf("%d", & degree2);
    int poly2[MAX] = {0}; // Initialize all coefficients to 0

    printf("Enter the coefficients for the second polynomial:\n");
    for ( i = degree2; i >= 0; i--) 
	{
        printf("Coefficient for x^%d: ", i);
        scanf("%d", &poly2[i]);
    }

    // Determine the maximum degree for the result polynomial
    maxDegree = (degree1 > degree2) ? degree1 : degree2;
    int sum[MAX] = {0}; // Array to store the sum of polynomials

    // Calculate th
    for (int i = 0; i <= maxDegree; i++) 
	{
        sum[i] = poly1[i] + poly2[i];
    }

    // Display the resulting polynomial
    printf("\nThe sum of the polynomials is: ");
    for (int i = maxDegree; i >= 0; i--) 
	{
        if (sum[i] != 0) { // Skip terms with zero coefficients
            if (i != maxDegree && sum[i] > 0) {
                printf("+"); // Add '+' sign for positive coefficients (except for the first term)
            }
            if (i == 0) {
                printf("%d", sum[i]); // Constant term (x^0)
            } else if (i == 1) {
                printf("%dx", sum[i]); // Term with x^1
            } else {
                printf("%dx^%d", sum[i], i); // General term
            }
        }
    }
    printf("\n");

}

