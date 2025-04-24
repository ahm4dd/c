void concat_strings(char *str1, const char *str2) {
  char *chr = str1;
  while (*(chr) != '\0') {
    chr++;
  }
  char *chr2 = str2;
  while (*(chr2) != '\0') {
    *chr = *chr2;
    chr++;
    chr2++;
  }
}
