#include <cs50.h>
#include <stdio.h>
#include <string.h>

void pete();

int main(void)
{
   pete();
}

void pete() {
    string answer = get_string("Pete and Repeat are sitting on a bridge. Pete falls off. Who's left? ");
    if (strcmp(answer, "Repeat") == 0) {
        pete();
    }
    else {
        printf("Wrong!\n");
    }
}