#include <string.h>
#include <jansson.h>

int main(int argc, char *argv[])
{
    json_t* json_root_object;
    json_error_t json_error;

    if (argc == 2)
    {
        json_root_object = json_load_file(argv[1],0,&json_error);
    }
    else
    {
        json_root_object = json_object();
    }

    json_object_set_new(json_root_object, "test1", json_integer(42));
    json_object_set_new(json_root_object, "test2", json_integer(44));

    json_t* json_int = json_object_get(json_root_object, "test1");
    if (json_int)
    {
        json_integer_set(json_int, 10000);
    }

    {
        json_t *obj = json_object();
        json_object_set_new(obj, "test1", json_integer(100));
        json_object_set_new(obj, "test2", json_integer(200));
        json_object_set_new(json_root_object, "hash2", obj);
    }

    {
        json_t *obj = json_array();
        json_array_append_new(obj, json_string("ABCDE"));
        json_array_append_new(obj, json_string("12345"));
        json_array_append_new(obj, json_integer(200));
        json_object_set_new(json_root_object, "arraytest", obj);
    }

    char * dump = json_dumps(json_root_object, JSON_INDENT(4));
    if (dump)
    {
        printf("%s\n", dump);
        free(dump);
    }
    json_decref(json_root_object);
}
