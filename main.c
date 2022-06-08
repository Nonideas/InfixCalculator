#include "calculator.h"

char str[N];

int main() {
    test();

    printf("enter expression (finish expression !):\n");
    scanf(" %[^!]s", str);

    Expr expr;
    Variables var;
    initExpr(&expr, str);
    initVariables(&var);
    double res = parseVariables(&expr, &var);
    printf("%.13lf\n", res);

    char ch;
    scanf("%c", &ch);

    return 0;
}
