#include <string.h>
#include <jansson.h>

int main(int argc, char *argv[])
{
    json_t *array = json_array();
    json_array_append_new(array, json_integer(42));
    json_array_append_new(array, json_integer(10));
    printf("%s\n", json_dumps(array, JSON_SORT_KEYS));
    json_decref(array);
}
