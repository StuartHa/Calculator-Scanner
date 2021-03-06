#pragma once

#ifdef __cplusplus
extern "C" {
#endif

char read_character(char **str);
void unread_character(char **str);
int get_current_line_length(FILE *fp);
int read_line(FILE *fp, char *buf);

#ifdef __cplusplus
}
#endif
