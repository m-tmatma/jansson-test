#include <string.h>
#include <jansson.h>

int main(int argc, char *argv[])
{

    json_t* json_object;
    json_error_t jerror;

    if (argc != 2)
    {
        printf("usage: %s <json file>\n", argv[0]);
        return 1;
    }

    json_object = json_load_file(argv[1],0,&jerror);

#if 0
    char name[256];
    strcpy(name, json_string_value(json_object_get(json_object, "name")));
    printf("name: %s\n", name);
#endif

    /* obj is a JSON object */
    const char *key;
    json_t *value;

    json_object_foreach(json_object, key, value) {
        /* block of code that uses key and value */
        printf("%s:\n", key);
    }
    json_decref(json_object);
}

