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
    json_object_set_new(json_object, "test1", json_integer(42));
    json_object_set_new(json_object, "test2", json_integer(44));

    json_t* json_int = json_object_get(json_object, "test1");
    if (json_int)
    {
        json_integer_set(json_int, 10000);
    }
    printf("%s\n", json_dumps(json_object, JSON_INDENT(4)));
    json_decref(json_object);
}
