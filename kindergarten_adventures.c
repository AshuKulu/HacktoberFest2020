#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solve(int *t, int t_count);
int parse_int(char *s);
int main(void);


int solve(int *t, int t_count) {
    int seat[t_count];
    memset(seat, 0, t_count * sizeof(int));
    for (int i = 0; i < t_count; i++) {
        if (0 < t[i] && t[i] < t_count) {
            int idx = i + 1;
            seat[idx == t_count ? 0 : idx]++;
            idx = i - t[i] + 1;
            seat[idx < 0 ? idx + t_count : idx]--;
        }
    }
    int idx = 0, rsum = 0, max_rsum = INT_MIN;
    for (int i = 0; i < t_count; i++) {
        rsum += seat[i];
        if (rsum > max_rsum) {
            idx = i;
            max_rsum = rsum;
        }
    }
    return idx + 1;
}

int parse_int(char *s) {
    int ret = 0;
    while (s && (*s) && (*s != '\n'))
        ret = 10 * ret + (*(s++) - '0');
    return ret;
}

int main(void) {
    FILE *fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char *str, *tok;
    size_t n;

    int t_count;
    str = NULL;
    if (getline(&str, &n, stdin) < 0) { exit(EXIT_FAILURE); }
    t_count = parse_int(str);
    free(str);

    int t[t_count];
    str = NULL;
    if (getline(&str, &n, stdin) < 0) { exit(EXIT_FAILURE); }
    tok = strtok(str, " \n");
    for (int i = 0; i < t_count; i++) {
        t[i] = parse_int(tok);
        tok = strtok(NULL, " \n");
    }
    free(str);

    int id = solve(t, t_count);

    fprintf(fptr, "%d", id);
    fclose(fptr);

    return 0;
}
