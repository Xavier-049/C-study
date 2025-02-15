#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * s_gets(char * set, int n);
#define TSIZE 45

struct film {
    char title[TSIZE];
    int rating;
    struct film * next;
};

int main(void) {
    struct film * head = NULL;
    struct film * current, *prev;
    char input[TSIZE];
    puts("Please enter the first film name:");
    while (s_gets(input, TSIZE) != NULL && input[0] != 0) {
        current = (struct film *)malloc(sizeof(struct film));
        if (head == NULL) {
            head = current;
        } else {
            prev -> next = current;
        }
        current -> next = NULL;
        strcpy(current -> title, input);
        puts("Please enter your rating <0-9>");
        scanf("%d", &current -> rating);
        while (getchar() != '\n') {
            continue;
        }
        puts("Enter the next film title (empty line to stop):");
        prev = current;
    }

    if (head == NULL) {
        puts("No data entered");
    } else {
        puts("Here is the film list:");
    }
    current = head;
    while (current != NULL) {
        printf("Movies: %s   Rating: %d\n", current -> title, current -> rating);
        current = current -> next;
    }

    current = head;
    while (current != NULL) {
        head = current -> next;
        free(current);
        current = head;
    }

    return 0;
}

char * s_gets(char * set, int n) {
    char * ret_val, *find;
    ret_val = fgets(set, n, stdin);
    if (ret_val) {
        find = strchr(set, '\n');
        if (find) {
            *find = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}