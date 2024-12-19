//////////////////////////////////////////////////
//                这是一个计算器                 //
//Tips：不是学一门语言写一个p用没有的计算器是吧？！ //
//////////////////////////////////////////////////


#include <stdio.h>
#include <string.h>

int ADD(int x, int y) {
    return x + y;
}
int SUB(int x, int y) {
    return x - y;
}
int MUL(int x, int y) {
    return x * y;
}
int DIV(int x, int y) {
    if (y != 0) {
        return x / y;
    }
    else {
        printf("Division by zero is not allowed.\n");
        return 0;
    }
}

int main() {
    int arr1[2] = { 0, 0 };
    char rule[3]; // 2 characters for the operator and 1 for the null terminator
    char mode[2]; // 1 character for the mode and 1 for the null terminator

    printf("Which rule you choose ?\n+ - * /");
    scanf("%2s", rule); // Read at most 2 characters to prevent buffer overflow

    printf("Which mode you choose ?\n1. just 2 number \n2. etc.\njust enter the number in front the rule\n");
    scanf("%1s", mode); // Read only 1 character for the mode

    if (strcmp(mode, "1") == 0) {
        if (strcmp(rule, "+") == 0) {
            printf("Enter two numbers: ");
            scanf("%d %d", &arr1[0], &arr1[1]);
            printf("The result is %d\n", ADD(arr1[0], arr1[1]));
        }
        else if (strcmp(rule, "-") == 0) {
            printf("Enter two numbers: ");
            scanf("%d %d", &arr1[0], &arr1[1]);
            printf("The result is %d\n", SUB(arr1[0], arr1[1]));
        }
        else if (strcmp(rule, "*") == 0) {
            printf("Enter two numbers: ");
            scanf("%d %d", &arr1[0], &arr1[1]);
            printf("The result is %d\n", MUL(arr1[0], arr1[1]));
        }
        else if (strcmp(rule, "/") == 0) {
            printf("Enter two numbers: ");
            scanf("%d %d", &arr1[0], &arr1[1]);
            if (arr1[1] != 0) {
                printf("The result is %d\n", DIV(arr1[0], arr1[1]));
            }
        }
        else {
            printf("Invalid rule.\n");
        }
    }
    else {
        printf("The mode 2 is not implemented yet.\n");
    }

    return 0;
}
