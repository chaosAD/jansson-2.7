#include <stdio.h>
#include "jansson.h"

int main() {
  json_t *json;
  json_error_t error;

  json = json_load_file("/data/file.json", 0, &error);

  return 0;
}