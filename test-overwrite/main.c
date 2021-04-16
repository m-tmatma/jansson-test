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
    json_decref(json_object);
}
