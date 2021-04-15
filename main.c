#include <string.h>
#include <jansson.h>

void show_value(json_t *json_object, int indent)
{
    const char *key;
    json_t *value;

    json_object_foreach(json_object, key, value) {
        /* block of code that uses key and value */
        for(int i = 0; i < indent; i++)
        {
            printf("\t");
        }
        printf("%s: ", key);
        if (json_is_object(value) )
        {
            const char *subkey;
            json_t *subvalue;

            printf("Object\n");
            show_value(value, indent+1);
        }
        else if (json_is_array(value)  )
        {
            printf("array\n");
        }
        else if (json_is_string(value) )
        {
            printf("string => '%s'\n", json_string_value(value));
        }
        else if (json_is_integer(value))
        {
            printf("integer => %lld\n", json_integer_value(value));
        }
        else if (json_is_real(value)   )
        {
            printf("real => %f\n", json_real_value(value));
        }
        else if (json_is_number(value) )
        {
            printf("number\n");
        }
        else if (json_is_boolean(value))
        {
            printf("bool\n");
        }
        else if (json_is_null(value)   )
        {
            printf("null\n");
        }
    }
}

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

    show_value(json_object, 0);

    json_decref(json_object);
}

