#include <string.h>
#include <jansson.h>

int main()
{

    json_t* json_object;
    json_error_t jerror;

    json_object = json_load_file("./sample.json",0,&jerror);

    char name[256];
    strcpy(name, json_string_value(json_object_get(json_object, "name")));
    printf("name: %s\n", name);
}

