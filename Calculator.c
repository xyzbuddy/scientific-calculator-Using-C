#include <stdio.h>
#include <math.h>

float add(float arr[], int n) {
    float r = 0;
    for (int i = 0; i < n; i++) 
        r += arr[i];
    
    return r;
}

float sub(float arr[], int n) {
    float r = arr[0];
    for (int i = 1; i < n; i++) 
        r -= arr[i];
    
    return r;
}

float mul(float arr[], int n) {
    float r = 1;
    for (int i = 0; i < n; i++) 
        r *= arr[i];
    
    return r;
}

float divi(float arr[], int n) {
    float r = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] == 0)
            return NAN;
        r /= arr[i];
    }
    return r;
}


float powr (float x, float y) {

float r;

r = pow(x, y);

return r;

}

float sqr(float x) {

float r;

if (x < 0)

r = NAN;

else

r = sqrt(x);

return r;

}

float cub(float x) {
    float r;
    r = cbrt(x);
    return r;
}

float logt(float x) {
    float r;
    if (x <= 0)
        r = NAN;
    else
        r = log10(x);
    return r;
}

float lnn(float x) {
    float r;
    if (x <= 0)
        r = NAN;
    else
        r = log(x);
    return r;
}

float expp(float x) {
    float r;
    r = exp(x);
    return r;
}

float sinn(float x) {
    float r;
    r = sin(x);
    return r;
}

float coss(float x) {
    float r;
    r = cos(x);
    return r;
}

float tann(float x) {
    float r;
    r = tan(x);
    return r;
}

float asinn(float x) {
    float r;
    if (x < -1 || x > 1)
        r = NAN;
    else
        r = asin(x);
    return r;
}

float acoss(float x) {
    float r;
    if (x < -1 || x > 1)
        r = NAN;
    else
        r = acos(x);
    return r;
}

float atann(float x) {
    float r;
    r = atan(x);
    return r;
}

float sinhh(float x) {
    float r;
    r = sinh(x);
    return r;
}

float coshh(float x) {
    float r;
    r = cosh(x);
    return r;
}

float tanhh(float x) {
    float r;
    r = tanh(x);
    return r;
}

int fact(int x) {
    if (x < 0) return -1;
    int r = 1;
    for (int i = 1; i <= x; i++) r *= i;
    return r;
}

int modd(int x, int y) { return (y == 0) ? 0 : x % y; }
float abss(float x) { return fabs(x); }

int main() {
    int op, run = 1;
    float x, y;
    int xi, yi;

    while (run == 1) {
        printf("\n==============================\n");
        printf("\n   SCIENTIFIC CALCULATOR  \n");
        printf("\n==============================\n");

        printf(" 1. Add            12. Cos\n\n");
        printf(" 2. Subtract       13. Tan\n\n");
        printf(" 3. Multiply       14. Arcsin\n\n");
        printf(" 4. Divide         15. Arccos\n\n");
        printf(" 5. Power          16. Arctan\n\n");
        printf(" 6. Sqrt           17. Sinh\n\n");
        printf(" 7. Cbrt           18. Cosh\n\n");
        printf(" 8. Log10          19. Tanh\n\n");
        printf(" 9. Ln             20. Factorial\n\n");
        printf(" 10. Exp           21. Mod\n\n");
        printf(" 11. Sin           22. Abs\n\n");
        printf("          0. Exit      \n\n");
        printf("============================\n");

        scanf("%d", &op);

        switch (op) {
            case 0:
                run = 0;
                break;

            case 1: { 
                int n;
                printf("Enter number of elements: ");
                scanf("%d", &n);
                float arr[n];
                for (int i = 0; i < n; i++) 
                     scanf("%f", &arr[i]);
                printf("%.2f\n", add(arr, n));
                break;
                
               
            }

            case 2: { 
                int n;
                printf("Enter number of elements: ");
                scanf("%d", &n);
                float arr[n];
                for (int i = 0; i < n; i++) 
                     scanf("%f", &arr[i]);
                printf("%.2f\n", sub(arr, n));
                break;
                
               
            }

            case 3: { 
                int n;
                printf("Enter number of elements: ");
                scanf("%d", &n);
                float arr[n];
                for (int i = 0; i < n; i++) 
                    scanf("%f", &arr[i]);
                printf("%.2f\n", mul(arr, n));
                break;
                
            }

            case 4: { 
                int n;
                printf("Enter number of elements: ");
                scanf("%d", &n);
                float arr[n];
                for (int i = 0; i < n; i++)
                    scanf("%f", &arr[i]);
                printf("%.2f\n", divi(arr, n));
                break;
                
            }

            case 5:
                scanf("%f%f", &x, &y);
                printf("%.2f\n", powr(x, y));
                break;
            case 6:
                scanf("%f", &x);
                printf("%.2f\n", sqr(x));
                break;
            case 7:
                scanf("%f", &x);
                printf("%.2f\n", cub(x));
                break;
            case 8:
                scanf("%f", &x);
                printf("%.2f\n", logt(x));
                break;
            case 9:
                scanf("%f", &x);
                printf("%.2f\n", lnn(x));
                break;
            case 10:
                scanf("%f", &x);
                printf("%.2f\n", expp(x));
                break;
            case 11:
                scanf("%f", &x);
                printf("%.2f\n", sinn(x));
                break;
            case 12:
                scanf("%f", &x);
                printf("%.2f\n", coss(x));
                break;
            case 13:
                scanf("%f", &x);
                printf("%.2f\n", tann(x));
                break;
            case 14:
                scanf("%f", &x);
                printf("%.2f\n", asinn(x));
                break;
            case 15:
                scanf("%f", &x);
                printf("%.2f\n", acoss(x));
                break;
            case 16:
                scanf("%f", &x);
                printf("%.2f\n", atann(x));
                break;
            case 17:
                scanf("%f", &x);
                printf("%.2f\n", sinhh(x));
                break;
            case 18:
                scanf("%f", &x);
                printf("%.2f\n", coshh(x));
                break;
            case 19:
                scanf("%f", &x);
                printf("%.2f\n", tanhh(x));
                break;
            case 20:
                scanf("%d", &xi);
                printf("%d\n", fact(xi));
                break;
            case 21:
                scanf("%d%d", &xi, &yi);
                printf("%d\n", modd(xi, yi));
                break;
            case 22:
                scanf("%f", &x);
                printf("%.2f\n", abss(x));
                break;
            default:
                printf("Wrong\n");
        }
    }
    
    return 0;
}